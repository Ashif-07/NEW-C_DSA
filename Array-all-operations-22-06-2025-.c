#include <stdio.h>
#include <stdlib.h>

int insertbeg(int arr[], int size, int capacity, int element)
{
    if (size < capacity)
    {
        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = element;
        return ++size;
    }
    else
        printf("Insertion Failed because array is full\n\n");
    return size;
}

int insertend(int arr[], int size, int capacity, int element)
{
    if (size < capacity)
    {
        arr[size] = element;
        return ++size;
    }
    else
        printf("Insertion Failed because array is full\n\n");
    return size;
}

int insertindex(int arr[], int size, int capacity, int element, int index)
{
    if (size < capacity)
    {
        for (int i = size - 1; i >= index; i--)
            arr[i + 1] = arr[i];
        arr[index] = element;
        return ++size;
    }
    else
        printf("Insertion Failed because array is full\n\n");
    return size;
}

int show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

int delbeg(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = arr[i + 1];
    return --size;
}

int delend(int arr[], int size)
{
    return --size;
}

int delindex(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
        arr[i] = arr[i + 1];
    return --size;
}

int binarysearch(int arr[], int size, int target)
{

    int low = 0, high = --size, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (target > arr[mid])
            low = ++mid;
        else if (target < arr[mid])
            high = --mid;
        else
            return mid;
    }
    printf("\nElemet is not exist\n");
    return -1;
}

int linearsearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    printf("\nElemet is not exist\n");
    return -1;
}

int main()
{
    int arr[50] = {2, 5, 7, 9, 11, 15, 17, 21, 23, 25, 30};
    int capacity = sizeof(arr) / sizeof(int);
    int size = 11, index = 2, element = 99;
    printf("\n\nOriginal Array\t");
    // show(arr, size);
    // size = insertbeg(arr, size, capacity, element);
    // printf("After Insert at Beginning\t");
    // show(arr, size);
    // size = insertend(arr, size, capacity, element);
    // printf("After Insert at End\t");
    // show(arr, size);
    // size = insertindex(arr, size, capacity, element, index);
    // printf("After Insert at index %d \t", index);
    // show(arr, size);
    // size = delbeg(arr, size);
    // printf("After Delete at Beginning\t");
    // show(arr, size);
    // size = delend(arr, size);
    // printf("After Delete at End\t");
    // show(arr, size);
    // size = delindex(arr, size, index);
    // printf("After Delete at index %d \t", index);
    show(arr, size);
    // printf("index =  %d ",binarysearch(arr,size,212));
    printf("index =  %d ", linearsearch(arr, size, 11));
}
