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
{ printf("Array Elements are... \n");
    for (int i = 0; i <= size - 1; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int delete(int arr[], int index, int size)
{
    for (int i = index; i <= size-1;i++){
        arr[i]=arr[i+1];
    }
    return 0;
}
int main()
{
    int capacity = 25, index = 1, size = 9, value = 17;
    ;
    int arr[25] = {7, 9, 11, 15, 19, 27, 32, 42, 49};
    show(arr, size);
    // if (insertAtIndex(arr, index, capacity, size, value) == 0)
    // {
    //     printf("Insertation is Sucessful !\n");
    //     size++;
    // }
    // else
    //     printf("Insertation is Unsucessful !\n");
   if( delete(arr, index, size)==0){
    printf("Deletion is Sucessfull !\n");
    --size;
   }
    show(arr, size);
}
