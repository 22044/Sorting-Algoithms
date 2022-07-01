#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n)
{
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = arr[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= arr[j]) 
        {    
            arr[j+1] = arr[j];     
            j = j-1;    
        }    
        arr[j+1] = temp;    
    }  
    printf("\n");

    // for(i=0; i<n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}

int main()
{
    clock_t start,end;
    double time_taken;
    time_t t;
    int i;
    int j;

    int n=50000;
    // printf("Enter the length of array: ");
    // scanf("%d",&n);
    int r[n], s[n];
    srand((unsigned) time(&t));
    printf("\n* Insertion Sort Algo and Its Time");
    printf("\n----------------------------------");

    printf("\nRandom Data: ");
    for(i = 0; i<n; i++)
    {
        r[i] = rand() % 100;
       // printf("%d ", r[i]);
    }
    start = clock();
    insertion_sort(r, n);
    end = clock();
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Random Data: %f", time_taken);
    printf("\nSorted Data: ");
    for(i = 0; i<n; i++)
    {
        s[i]  = i+1;
      // printf("%d ", s[i]);
    }

    start = clock();
    insertion_sort(s, n);
    end = clock();
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorted Data: %f", time_taken);
    return 0;
}