#include<stdio.h>
void swapr(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int pivit(int arr[], int st, int end){
    int idx=st-1, pivot=arr[end];
    for(int i=st; i<end; i++){
        if(arr[i]<pivot){
            idx++;
            swapr(&arr[i], &arr[idx]);
        }
    }
    idx++;
    swapr(&arr[idx],&arr[end]);
    return idx;
}
void quicksort(int arr[], int st, int end){
    if(st<end){
        int pivitidx = pivit(arr, st, end);
        quicksort(arr,st, pivitidx-1);
        quicksort(arr, pivitidx+1, end);
    }
}
int main(){
    int n;
    printf("enter a number n:");
    scanf("%d" ,&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}