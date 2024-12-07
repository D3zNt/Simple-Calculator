#include <stdio.h>
#include <stdlib.h>

float additon(float x, float y);
float substraction(float x, float y);
float multiplication(float x, float y);
float divider(float x, float y);

int main() {
    float input1, input2;
    int choice = 0; // Initialize choice

    printf("Simple Calculator\n");
    printf("------------------------\n");

    printf("Input: ");
    scanf("%f", &input1);

    while (choice != -1) {
        printf("\nChoice:\n");
        printf("1: Add       2: Subtract\n3: Multiply  4: Divide\n-1: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("Exiting the calculator. Goodbye!\n");
            return 0;
        }
        printf("input2: ");
        scanf("%f", &input2);

        switch (choice)
        {
        case 1:
            input1 = additon(input1, input2);
            break;
        case 2:
            input1 = substraction(input1, input2);
            break;
        case 3:
            input1 = multiplication(input1, input2);
            break;
        case 4:
            if (input2 != 0 ){
                input1 = divider(input1, input2);
            } else
                printf("Cannot Divide by zero\n");
            break;
        case -1:
            printf("Exiting the calculator. Goodbye! :)\n");
            return 0;
        default:
        printf("invalid input\n");
            break;
        }
    if (input1 == (int)input1) {
        // Integer case
        printf("-------\n");
        printf("| %3d |\n", (int)input1);
        printf("-------\n");
    } else {
        // Decimal case
        printf("---------\n");
        printf("| %6.2f |\n", input1);
        printf("---------\n");
    }
    }
    return 0;
}

float additon(float x, float y){
	return x+y;
}

float substraction(float x, float y) {
	return x-y;
}

float multiplication(float x, float y) {
    return x * y;
}
float divider(float x, float y){
    return x/y;
}
