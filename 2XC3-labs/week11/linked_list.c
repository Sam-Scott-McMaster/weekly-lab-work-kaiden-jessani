/* Some linked list examples. See textbook 17.5 for more code.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 100

/* The node type contains a next pointer */
struct node {
    char name[N+1];
    int grade;
    struct node *next;
};

/* returns TRUE if head is null (list is empty) */
bool is_empty(struct node *head) {
    return head == NULL;
}

/* prepends a node containing the given name and grade at the head of a list 
 * returns the new head 
 */
struct node *prepend(struct node *head, char *name, int grade) {
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) 
        exit(EXIT_FAILURE);

    strcpy(newnode->name, name);
    newnode->grade = grade;
    newnode->next = head;

    return newnode;
}

int count(struct node *head, int sum)
{
	int total = 0;
	sum = 0;
	while(!is_empty(head))
	{
		sum += head->grade;
		head = head->next;
	}
	return sum;
}

struct node* createNode(const char *name, int grade) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    strncpy(newNode->name, name, N);
    newNode->name[N] = '\0'; // Ensure null-termination
    newNode->grade = grade;
    newNode->next = NULL;
    return newNode;
}

struct node* append(struct node *head, char *name, int grade) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    strncpy(newNode->name, name, N);
    newNode->name[N] = '\0'; // Ensure null-termination
    newNode->grade = grade;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

    return head;
}

struct node* reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next; // Store next
        current->next = prev; // Reverse current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }
    head = prev;
    return head;
}

/* deletes the head of a list. Returns the new head. */
struct node *delete_first(struct node *head) {
    if (head == NULL) 
        return head;
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

/* destroys a list from head onwards. Returns NULL. */
struct node *destroy_list(struct node *head) {
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    return NULL;
}

/* prints the contents of a list given the head. */
void print_list(struct node *head) {
    if (head == NULL) {
        puts("*** empty list ***");
        return;
    }
    while (head != NULL) {
        printf("%s: %d\n", head->name, head->grade);
        head = head->next;
    }
}

/* main function - some simple tests of above functions */
void main() {
	// Example usage
    struct node *head = createNode("Alice", 85);
    head = append(head, "Bob", 90);
    head = append(head, "Charlie", 78);
    head = append(head, "David", 92); // Adding another node using append

    printf("Original list:\n");
    struct node *current = head;
    while (current != NULL) {
        printf("%s: %d\n", current->name, current->grade);
        current = current->next;
    }

    head = reverse(head);

    printf("\nReversed list:\n");
    current = head;
    while (current != NULL) {
        printf("%s: %d\n", current->name, current->grade);
        current = current->next;
    }

    int totalSum = count(head, 0);
    printf("\nTotal sum of grades: %d\n", totalSum);
    
    // Free the allocated memory
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
