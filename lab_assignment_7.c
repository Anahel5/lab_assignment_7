#include <stdlib.h>
#include <stdio.h>

void swap(int* arr,int n, int k){
    int temp=arr[n];
    arr[n]=arr[k];
    arr[k]=temp;
}

void bubbleSort(int total, int arr[]){
    int counter[total],totalCount=0;
    for (int i=0; i < total; i++) {
        counter[i] = 0;
    }
    for(int i=0;i<total-1;i++){
        int swapped=0;
        for(int j=0;j<total-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr, j, j+1);
                swapped++;
                counter[j]++;
                counter[j+1]++;
                swap(counter,j,j+1);
                totalCount++;
            }
        }
        if(swapped==0){
            break;
        }
    }
    for(int k=0;k<total;k++){
        printf("%d: %d\n",arr[k],counter[k]);
    }
    printf("%d\n",totalCount);
}

void selectionSort(int total, int arr[]){
    int min,counter[total],totalCount=0;
    for (int i=0; i < total; i++) {
        counter[i] = 0;
    }
    for(int i=0;i<total-1;i++){
        min=i;
        for(int j=i+1;j<total;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr,min,i);
            counter[min]++;
            counter[i]++;
            swap(counter,min,i);
            totalCount++;
        }
    }
    for(int k=0;k<total;k++){
        printf("%d: %d\n",arr[k],counter[k]);
    }
    printf("%d\n",totalCount);
}

int main(){
    int arr1[9]={97,16,45,63,13,22,7,58,72};
    int arr2[9]={90,80,70,60,50,40,30,20,10};
    printf("array1 bubble sort:\n");
    bubbleSort(9,arr1);
    printf("array2 bubble sort:\n");
    bubbleSort(9,arr2);
    int arr3[9]={97,16,45,63,13,22,7,58,72};
    int arr4[9]={90,80,70,60,50,40,30,20,10};
    printf("array1 selection sort:\n");
    selectionSort(9,arr3);
    printf("array2 selection sort:\n");
    selectionSort(9,arr4);
}