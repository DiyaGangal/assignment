#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"
int main(void){
    int choice;
    printf("enter 1 for number or 2 for array operations: ");
    scanf("%d",&choice);
    if(choice==1){
        int n;
        printf("enter number: ");
        scanf("%d",&n);
        printf("isArmstrong(%d)=%s\n",n,isArmstrong(n) ? "Yes" : "No");
        printf("isAdams(%d)=%s\n",n,isAdams(n) ? "Yes" : "No");
        printf("isPrimePalindrome(%d)=%s\n",n,isPrimePalindrome(n) ? "Yes" : "No");
    }
    else if(choice==2){
        int n,i;
        printf("enter length: ");
        scanf("%d",&n);
        int a[n];
        printf("enter elements: ");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        displayArray(a,n);
        printf("Max at index %d\n", findMaxIndex(a,n));
        printf("Min at index %d\n", findMinIndex(a,n));
        printf("average is %.2f\n", findAverage(a,n));
        int v;
        printf("enter value ");
        scanf("%d",&v);
        int j = linearSearch(a,n,v);
        if(j== -1){
            printf("index not found\n");
        }
        else{
            printf("index is %d\n", j);
        }
        reverseArray(a,n);
        sortArray(a,n);
    }
    else{
        printf("invalid choice");
    }
    return 0;
}