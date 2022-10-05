#include <stdio.h>

int main(void)

{
    int num1, num2, res{};
    char op;

    printf("Please enter it : ");
    scanf_s("%d%c%d", &num1, &op, 1, &num2);

    switch (op)

    {
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '*': res = num1 * num2; break;
    case '/': res = num1 / num2; break;
    }

    printf("%d %c %d = %d\n", num1, op, num2, res);

    return 0;

}