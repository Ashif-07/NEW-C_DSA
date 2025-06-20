#include <stdio.h>
#include <stdlib.h>
int insertAtIndex(int arr[], int index, int capacity, int size, int value)
{
    if (size >= capacity)
        return 1;
    else
        for (int i = size - 1; i >= index; i--)
            arr[i + 1] = arr[i];
    arr[index] = value;
    return 0;
}
void show(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int capacity = 25, index = 4, size = 9, value = 17;
    ;
    int arr[25] = {7, 9, 11, 15, 19, 27, 32, 42, 49};
    show(arr, size);
    if (insertAtIndex(arr, index, capacity, size, value) == 0)
    {
        printf("Insertation is Sucessful !\n");
        size++;
    }
    else
        printf("Insertation is Unsucessful !\n");
    show(arr, size);
}
