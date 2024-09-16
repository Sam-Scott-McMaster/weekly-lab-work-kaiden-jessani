#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    printf("Question 1: What do you think is the move useful thing you've learned so far in this course? ");
    fflush(stdout);
    sleep(2);
    printf("\nThe move useful thing I have learned so far in this course is how to operate WSL.");
    fflush(stdout);
    sleep(4);
    printf("\n\nQuestion 2: Is there anything you’ve learned so far that you do not think is useful? If so, explain why.");
    fflush(stdout);
    sleep(2);
    printf("\nSo far, I don't think there's anything we've learned that isn't useful. I believe everything we've learned may have an application in our lives after graduating. ");
    fflush(stdout);
    sleep(4);
    printf("\n\nQuestion 3: What are the advantages and disadvantages of using vim for coding?");
    fflush(stdout);
    sleep(2);
    printf("\nOne advantage of using vim when coding is its ability to use hotkeys. If one were to get familiar with hotkeys, they could become very proficient in vim, increasing productivity. Vim is also very fast, as it doesn't need to run on high-end hardware to operate");
    fflush(stdout);
    sleep(1);
    printf("\nOne disadvantage of using vim when coding is that vim can be unintuitive when using it for the first time. Compared to an application like notepad or MS Word, it can be hard to learn how to use it if one is used to more developed applications. Vim also doesn't have much customization, which when coding doesn't matter as much, however when writing documents, it can lead to a document being harder to read. \n");
    fflush(stdout);
    sleep(4);
    printf("\n\nQuestion 4: What are the advantages and disadvantages of using VS Code for coding?");
    fflush(stdout);
    sleep(2);
    printf("\nOne advantage of using VSCode is its intuitiveness. It is very easy to know if code may not work because of it's console, and it is easy to differentiate methods from statements from variables due to its colour-coded interface. ");
    fflush(stdout);
    sleep(1);
    printf("\nOne disadvantage of using VSCode is that it takes up more CPU and RAM, which may not always run on all devices. Due to it's complex IDE, VSCode uses much more system resources compared to WSL, which can be noticeable on certain systems. ");
    fflush(stdout);
}