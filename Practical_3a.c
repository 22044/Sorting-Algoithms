#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int count=0;   
// Binary Search Function 

void s_sort(int arr[], int n)       
{
    int i;
    int j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
        }
    }
     printf(" ");
    for(i=0; i<n; i++)            
    { 
        printf("%d ",arr[i]);
    }
}


int main()
{
    clock_t start,end;
    double time_taken;
    time_t t;
    int i;
    int y;
    int size;
    

    srand((unsigned) time(&t));
    // Code Owner :- Harshil Savaj / 

    printf("\nEnter the size of the list:");
    scanf("%d", &size);
        int *r;
        r=(int *)malloc(y*sizeof(int));  //Dynamic memory allocation                       
        count++;

    printf("\nRandom  Generated Data: ");
    for(i = 0; i<size; i++)
    {
        r[i] = rand() % 100;
        printf("%d ", r[i]);
        count++;
    }
    printf("\nSorted Data (Random):");
    start = clock();
    s_sort(r, size);
    end = clock();
    
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorting Data: %f", time_taken);
    printf("\nthe number of steps is  %d ",count);

    return 0;
}   
