#include<stdio.h>
#include<stdlib.h>
#include "header.h"

int insertion(int arr[], int arr_size, int ele, int pos)
{
    if(0 == pos || pos > arr_size + 1)
    {
        printf("Invalid position entered.\n");
        return arr_size;
    }

    //Increasing the size of array to accomodate the new element
    ++arr_size;
    arr = (int*) realloc (arr,sizeof(int)*arr_size);

    //Inserting the element
    for(int i = arr_size-1; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;

    return arr_size;
}

int deletion(int arr[], int arr_size, int ele)
{
    //To find the position of the required element
    int pos = linear_search(arr,arr_size,ele);

    if(-1 == pos)
    {
        printf("Element not found.\n");
        return arr_size;
    }

    //Deleting the element
    for(int i = pos; i < arr_size; i++)
    {
        arr[i] = arr[i+1];
    }
    
    //Reducing the size of the array so as to save some space
    --arr_size;
    arr = (int*) realloc (arr,sizeof(int)*arr_size);

    return arr_size;
}

int display(int arr[],int arr_size)
{
    //For storing the index we are using i
    for(int i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

int linear_search(int arr[], int arr_size, int ele)
{
    //no_ele is used for the case where the element is not found. -1 is returned in this case.
    int no_ele = -1;

    //Here i is returned if the element exists in the array and no_ele is returned otherwise
    for(int i = 0; i < arr_size; i++)
    {
        if(ele == arr[i])
        {
            return i;
        }
    }
    return no_ele;
}

int binary_search(int arr[], int arr_size, int ele)
{
    //no_ele is used for the case where the element is not found. -1 is returned in this case.
    int no_ele = -1;

    //Declaration of variables required for Binary search
    int start = 0, mid, end = arr_size;

    //Loop runs until arr[mid] is equal to the search element
    while(start <= end)
    {
        mid = (start+end)/2;
        if(ele == arr[mid])
        {
            return mid;
        }
        else if(ele > arr[mid])
        {
            start = mid+1;
        } 
        else if(ele < arr[mid])
        {
            end = mid-1;
        }
    }
    return no_ele;
}

int *selection_sort(int arr[], int arr_size)
{
    //Traversing the array using i,j as indexes so as to be able to work with 2 variables at the same time.
    for(int i = 0; i < arr_size; i++)
    {
        for(int j = i+1; j < arr_size; j++)
        {
            if(arr[i] > arr[j])
            {
                //Swapping without third variable to save some space
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
    }

    return 0;
}

int *bubble_sort(int arr[], int arr_size)
{
    //Traversing the array using i,j as indexes so as to be able to work with 2 variables at the same time.    
    for(int i = 0; i < arr_size; i++)
    {
        for(int j = i; j < arr_size; j++)
        {
            if(arr[i] > arr[j])
            {
                //Swapping without third variable
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];                
            }
        }
    }
    return 0;
}