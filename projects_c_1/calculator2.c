#include <stdio.h>

int main()
{
    double first_num, second_num;
    char operator;

    printf("Enter your operations +, -, /, * ( 10 + 20) :\n");
    scanf("%lf %c %lf", &first_num, &operator, & second_num);

    switch (operator)
    {
    case '+':
        printf("%f\n", first_num + second_num);
        break;
    case '-':
        printf("%f\n", first_num + second_num);
        break;
    case '/':
        printf("%f\n", first_num + second_num);
        break;
    case '*':
        printf("%f\n", first_num + second_num);
        break;
    default:
        printf("There is an error , please Check your operation\n");
        break;
    }
    return 0;
}