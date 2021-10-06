#include <stdio.h>
#include <string.h>

#define MAX 500

int top=-1;

char item;

char stack_string[MAX];

void pushChar(char item);

char popChar(void);

int isEmpty(void);

int isFull(void);

int main()
{
    char str[MAX];

    int i;

    printf("Input any string of your choice: ");
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)
       {
           pushChar(str[i]);
       }

    for(i=0;i<strlen(str);i++)
        {
            str[i]=popChar();
        }
    printf("The Reversed String is: %s\n",str);

    return 0;
}

void pushChar(char item)
{
    if(isFull())
    {
        printf("\nThe Stack is Full \n");
        return;
    }

    top=top+1;
    stack_string[top]=item;
}

 char popChar()
{

    if(isEmpty())
    {
        printf("\nThe Stack is Empty\n");
        return 0;
    }

    item = stack_string[top];
    top=top-1;
    return item;
}

int isEmpty()  //check the stack if empty
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()   //check the stack if full
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
