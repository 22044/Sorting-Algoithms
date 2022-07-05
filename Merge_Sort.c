#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];
    
    for (i = 0; i < n1; i++)
        LeftArray[i] = a[beg + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = a[mid + 1 + j];

    i = 0, 
    j = 0; 
    k = beg;  

    while (i < n1 && j < n2)
    {
        if(LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        merge_sort(a, beg, mid);
        merge_sort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

int main()
{
    clock_t start,end;
    double time_taken;
    time_t t;
    int j;
    int i=j=0;

    int n=50000;
    int r[n], s[n];
    srand((unsigned) time(&t));
    printf("* Harshil Savaj / 20012531030");
    printf("\n* Merge Sort Algo and Its Time");
    printf("\n----------------------------------");

    printf("\nRandom Data: ");
    for(i = 0; i<n; i++)
    {
        r[i] = rand() % 100;
        //printf("%d ", r[i]);
    }

    start = clock();
    merge_sort(r, 0, n-1);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Random Data: %f", time_taken);

    printf("\nSorted Data: ");
    for(i = 0; i<n; i++)
    {
        s[i] = i+1;
       // printf("%d ", s[i]);
    }

    start = clock();
    merge_sort(s, 0, n-1);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorted Data: %f", time_taken);
    return 0;  
}