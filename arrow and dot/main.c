#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node * next;

};

int main()
{
    struct node a;
    a.val = 10;
    printf("text a %d\n",a.val);
    printf("text a %d\n",(&a)->val);

    struct node * b= malloc(sizeof(struct node));;
    b->val = 10;
    printf("text b %d\n",b->val);
    printf("text b %d\n",(*b).val);

    return 0;
}
