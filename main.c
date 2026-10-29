#include <stdio.h>

// This is my first proper C program so it might be a bit all over the place since I am just experimenting with stuff
// It is mostly a calculator but a basic one at that
int main()
{
    int num1 = 200;
    int num2 = 500;
    int num3 = 300;

    printf("Can you solve the impossible math quiz????\n");
    printf("It is  %d +  %d +  %d\n", num1, num2, num3);
    printf("The answer is: %d\n", num1+num2+num3); // adds all the numbers defined at the start

    printf("===============================================\n");

    // pointer 
    int num = 21;
    int *ptr = &num;

    printf("Regular variable contains: %d\n", num);
    printf("Pointer variable contains: %p\n", ptr); // shows the memory address 
    printf("Pointer points to value: %d\n\n", *ptr);

    printf("================================================\n");

    // ascii art 
    printf(
        "\033[1;31m"
        "    ______   _________    __    ________  ____    ___  __________  ____ \n"
        "   / ____/  / ____/   |  / /   / ____/ / / / /   /   |/_  __/ __ \\/ __ \\\n"
        "  / /      / /   / /| | / /   / /   / / / / /   / /| | / / / / / / /_/ /\n"
        " / /___   / /___/ ___ |/ /___/ /___/ /_/ / /___/ ___ |/ / / /_/ / _, _/ \n"
        " \\____/   \\____/_/  |_/_____/\\____/\\____/_____/_/  |_/_/  \\____/_/ |_|\n"
        "\033[0m"
    );

    printf("Welcome to my basic C calculator\n");
    printf("Here you can add two numbers\n");
    
    int userNum1;
    int userNum2;

    printf("Enter a number:  \n");

    // asks for user input
    scanf("%d", &userNum1);

    printf("Enter another number:  \n");

    scanf("%d", &userNum2);

    printf("Your answer is: %d\n", userNum1+userNum2);

    printf("Would you like to see the memory addres of your first chosen number? (y/n)\n");

    char response;

    scanf(" %c", &response); 

    if (response == 'y' || response == 'Y') { // if the user says yes then it shows the memory address
        printf("Memory address: %p\n", (void *)&userNum1); // shows it 
    } else if (response == 'n' || response == 'N') {
        printf("You chose No.\n");
        printf("Goodbye"); // says bye and then app exits
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
 