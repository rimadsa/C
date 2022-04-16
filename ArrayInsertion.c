#include <stdio.h>

void display(int arr[], int size)
{
    printf("Array is:");
    for(int i =0; i<10; i++)
    {
        printf(" %d ", arr[i]);
    }
}
int insertion(int arr[], int size, int capacity, int value, int index)
{
    if(capacity < index)
    {
        printf("Cant insert as index is more than capacity!\n");
        //return size;
    }

    if(index < size)
    {
        for(int i =size+1; i>index; i++)
        {
           arr[i] = arr[i-1];
        }
        arr[index] = value;
    }
    // if(index >= size)
    // {
        arr[index] = value;
    // }
    printf("arr[index]:%d\n", arr[index]);
    printf("value:%d\n", value);
    size = size+1;
    
    return size;
}
int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
}

int main()
{
   printf("Hello World by me!\n");

    int arr[100] = {1,2,3,4,5};
    //int size = sizeof(arr)/sizeof(int);
    int size = 5;
    printf("array size before insertion:%d\n", size);
    printf("array before insertion:\n");
    display(arr, size);
    
    size = insertion(arr, 5, 100, 6, 5);
    printf("array size after insertion:%d\n", size);
    printf("array after insertion:\n");
    display(arr, size);

    size = insertion(arr, 5, 100, 7, 6);
    printf("array size after insertion:%d\n", size);
    printf("array after insertion:\n");
    display(arr, size);


    indInsertion(arr, size, 8, 100, 7);
    size +=1;
   printf("array after insertion-2:\n");
    display(arr, size);
   return 0;
}
