#include <stdio.h>
#include "arraylib.h"
int findMaxIndex(int arr[],int size){
    int i=0;
    for(int j=0 ; j<size ; j++){
        if(arr[j]>arr[i]){
            i=j;
        }
    }
    return i;

}


int findMinIndex(int arr[],int size){
    int i=0;
    for(int j=0 ; j<size ; j++){
        if(arr[j]<arr[i]){
            i=j;
        }
    }
    return i;
}


float findAverage(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int avg=sum/size;
    return avg;
}


void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void reverseArray(int arr[],int size){
    for(int i=0;i<size/2; i++){
        int temp=arr[i];
        arr[i]=arr[size - 1 -i];
        arr[size - 1- i]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void sortArray(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int linearSearch(int arr[],int size, int value){
    for (int i=0;i<size;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}

 