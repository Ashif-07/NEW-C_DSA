#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int element)
{
    int mid, high = size - 1, low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2; // low+(high-low)/2
        if (element > arr[mid])
            low = mid + 1;
        else if (element < arr[mid])
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int linearSearch(int arr[], int element, int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 5, 7, 9, 10, 15, 17, 19, 24};
    int size = sizeof(arr) / sizeof(int), element, index;
    system("cls");
    printf("Enter a Element you want to find in the existing array\t");
    scanf("%d", &element);
    index = binarySearch(arr, size, element);
    if (-1 != index)
        printf("\nYour Element '%d' is Found at index '%d' \n", element, index);
    else
        printf("\nyour Element '%d' is not exist in existing array\n", element);
}
