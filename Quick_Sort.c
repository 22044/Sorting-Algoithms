#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int a[], int start, int end)
{
    int pivot = a[end]; 
    int i = (start - 1);
    int j;

    for (j = start; j <= end - 1; j++)
    {
        
        if (a[j] < pivot)
        {
            i++; 
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i+1];
    a[i+1] = a[end];
    a[end] = t;
    return (i + 1);
}

void quick_sort(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        quick_sort(a, start, p - 1);
        quick_sort(a, p + 1, end);
    }
}

int main()
{
    clock_t start,end;
    double time_taken;
    time_t t;
    int i,j,k;
    printf("* Harshil Savaj / 20012531030");
    printf("\n* Quick sort algo and Its Time");
    printf("\n----------------------------------");

    int n=5;
    int r[n], s[n];
    srand((unsigned) time(&t));

    printf("\nRandom Data: ");
    for(i = 0; i<n; i++)
    {
        r[i] = rand() % 100;
        printf("%d ", r[i]);
    }

    start = clock();
    quick_sort(r, 0, n-1);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Random Data: %f", time_taken);
    

    printf("\nSorted Data: ");
    for(i = 0; i<n; i++)
    {
        s[i] = i+1;
        printf("%d ", s[i]);
    }

    start = clock();
    quick_sort(s, 0, n-1);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorted Data: %f", time_taken);
    return 0;
}