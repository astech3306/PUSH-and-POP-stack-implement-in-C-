#include <stdio.h>

void PUSH(int S[], int Top)
{
    printf("Enter an element to PUSH it in Stack: ");
    scanf("%d", &S[Top]);
}

int POP(int S[], int Top)
{
    int X;
    X = S[Top];
    return X;
}

void Display(int S[], int size, int Top)
{
    int i;
    for (i = Top; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
}

int main()
{
    int S[100], choice1 = 0, num, top = -1, temp, X;
    do
    {
        printf("\n1. PUSH\n2. POP\n3. Display\n4. Exit\nWhat you want to do: ");
        scanf("%d", &choice1);

        if (choice1 == 1)
        {
            top++;
            PUSH(S, top);
        }

        else if (choice1 == 2)
        {
            if (top == -1)
            {
                printf("Stack Underflow\n");
            }

            else
            {
                X = POP(S, top);
                top--;
                printf("Poped element is: %d\n", X);
            }
        }

        else if (choice1 == 3)
        {
            if (top == -1)
            {
                printf("Nothing to display\n");
            }
            else
            {
                Display(S, (top - 1), top);
            }
        }

        else if (choice1 != 4)
        {
            printf("Please choose a correct option from menu\n");
        }

    } while (choice1 != 4);
    printf("Thanks for using me!");
    return 0;
}