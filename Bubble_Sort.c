//Bubble Sort Practical_3c (PRIVATE DOC)

#include<stdio.h>
#include<time.h>
#include <stdlib.h>

void b_sort(int array[],int n){
    int i,j,swap;
    int flag=0;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(array[j]>array[j+1])
            {
                swap =array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            //    flag=1;
            }
            // if(!flag){
            //     break;
            // }
        }
    }
    
    // for(i=0; i<n; i++){
    // printf("%d ",array[i]); 
    // }
}
int main(){
    
    clock_t start,end;
    double time_taken;
    double t_taken;
    time_t t; 
    printf("* Harshil Savaj / 20012531030");
    printf("\n* Bubble Sort Algo and Its Time");
    printf("\n----------------------------------");
    int n=40;
    int i;
    int arr;
    

    int r[n], s[n] ,a[n];
    srand((unsigned) time(&t));
    printf("\nRandom Generated Data: ");
    for( i = 0; i<n; i++)
    {
        r[i] = rand() % 100;
        //printf("%d ", r[i]);
    }   
    start = clock();
    printf("\nSorted Random Data :");
    b_sort(r,n);
    end=clock();
    
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorting Random Data: %f", time_taken);
    
//*************************************************************************************** 
//For Already Sorted Data :
    printf("\nAlready Sorted Data :");
    for(i=0; i<n; i++)
    {
       a[i]=i;
    }
     start=clock();
     b_sort(a,n);
     end=clock();
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Sorting Already Sorted Data: %f", time_taken);

    return 0;
    
}




































// start = clock();
    //  b_sort(s, n);
    // end = clock();