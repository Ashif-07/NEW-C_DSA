#include <stdio.h>
#include <stdlib.h>

struct array
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct array *p, int uSize, int tSize)
{

    p->ptr = (int *)malloc(tSize * sizeof(int));
    p->totalSize = tSize;
    p->usedSize = uSize;
}

void setval(struct array *p)
{
    for (int i = 0; i < p->usedSize; i++)
    {
        printf("Enter value of Index '%d' ", i);
        scanf("%d", &p->ptr[i]);
    }
}

void show(struct array *p)
{
    for (int i = 0; i < p->usedSize; i++)
        printf("%d ", p->ptr[i]);
}
int main()
{
    int uSize = 5, tSize = 15;
    struct array marks;
    createArray(&marks, uSize, tSize);
    setval(&marks);
    show(&marks);
    return 0;
}
