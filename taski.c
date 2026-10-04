#include<stdio.h>
int main(){
    int a, b, result;
    char choice;
    printf("Enter the a value: ");
    scanf("%d", &a);
    printf("Enter the b value: ");
    scanf("%d", &b);
    printf("Enter the choice (+, -, *, /): ");
    scanf(" %c", &choice);
    switch (choice){
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;
        case '/':
            if (b != 0){
                result = a / b;
                printf("Result = %d", result);
            }else{
                printf("Division by zero is not possible");
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
