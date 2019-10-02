//Custom made header file
#include "header.h"

//Pre-existing header files
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Array operations like Insertion, Deletion and Display
    
    //Declarations of required variables.
    int *arr, size, index;
    int ele, pos;

    //Scanning for the desired array size by user to prevent overflow or underflow of memory
    scanf("%d",&size);
    
    //Creating memory for the array arr.
    arr = (int*) malloc(sizeof(int)*size);
    
    //Input of elements into the array.
    for(index = 0; index < size; index++)
    {
        scanf("%d",&arr[index]);
    }

    //Insertion of elements
    scanf("%d %d",&ele, &pos);
    size = insertion(arr, size, ele, pos);
    display(arr,size);

    //Deletion of elements
    scanf("%d", &ele);
    size = deletion(arr, size, ele);
    display(arr, size);


    //Printing the array
    //display(arr,size);
    
    //Wiping the array so as to give the memory back to the system
    free(arr);
    arr = NULL;

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    //LINEAR SEARCH
    //Scanning for the desired array size by user to prevent overflow or underflow of memory
    scanf("%d",&size);
    
    //Creating memory for the array arr.
    arr = (int*) malloc(sizeof(int)*size);
    
    //Input of elements into the array.
    for(index = 0; index < size; index++)
    {
        scanf("%d",&arr[index]);
    }

    //Input the element to search
    scanf("%d",&ele);
    
    //Searching algorithm
    pos = linear_search(arr,size,ele);
    
    //Printing the array
    if(-1 == pos)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Position = %d\n",pos+1);
    }
    
    //Wiping the array so as to give the memory back to the system
    free(arr);
    arr = NULL;

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    //BINARY SEARCH
    //Scanning for the desired array size by user to prevent overflow or underflow of memory
    scanf("%d",&size);
    
    //Creating memory for the array arr.
    arr = (int*) malloc(sizeof(int)*size);
    
    //Input of elements into the array.
    for(index = 0; index < size; index++)
    {
        scanf("%d",&arr[index]);
    }

    //Input the element to search
    scanf("%d",&ele);
    
    //Sorting algorithm to make the list sorted for the binary search algorithm
    selection_sort(arr,size);

    //Searching algorithm
    pos = binary_search(arr,size,ele);
    
    //Printing the array
    if(-1 == pos)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Position = %d\n",pos+1);
    }
    
    //Wiping the array so as to give the memory back to the system
    free(arr);
    arr = NULL;

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    //SELECTION SORT
    //Scanning for the desired array size by user to prevent overflow or underflow of memory
    scanf("%d",&size);
    
    //Creating memory for the array arr.
    arr = (int*) malloc(sizeof(int)*size);
    
    //Input of elements into the array.
    for(index = 0; index < size; index++)
    {
        scanf("%d",&arr[index]);
    }
    
    //Sorting algorithm
    selection_sort(arr,size);
    
    //Printing the array
    display(arr,size);
    
    //Wiping the array so as to give the memory back to the system
    free(arr);
    arr = NULL;

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    //BUBBLE SORT
    //Scanning for the desired array size by user to prevent overflow or underflow of memory
    scanf("%d",&size);
    
    //Creating memory for the array arr.
    arr = (int*) malloc(sizeof(int)*size);
    
    //Input of elements into the array.
    for(index = 0; index < size; index++)
    {
        scanf("%d",&arr[index]);
    }
    
    //Sorting algorithm
    bubble_sort(arr,size);
    
    //Printing the array
    display(arr,size);
    
    //Wiping the array so as to give the memory back to the system
    free(arr);
    arr = NULL;

    return 0;
}