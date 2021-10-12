#include <stdio.h>
#define ll long long
int main()
{

    int num1, num2;
    printf("Enter two numbers for operations\n");
    scanf("%d %d", &num1, &num2);

    int operation;
    printf("Enter '1' for addition and '2' for multiplication \n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("Sum of two numbers = %d\n", num1 + num2);
        break;

    case 2:
        printf("MUltiplication of two numbers = %d\n", num1 * num2);
        break;

    default:

        break;
    }

    return 0;
}