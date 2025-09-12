#include<iostream>
#include<vector>
using namespace std;
int pivit(vector<int>&arr, int st, int end){
    int idx=st-1, pivot = arr[end];
    for(int i=st; i<end; i++){
        if(arr[i]<pivot){
            i++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}
void quicksort(vector<int>&arr, int st, int end){
    if(st<end){
        int pivitidx = pivit(arr, st, end);
        quicksort(arr, st, pivitidx-1);
        quicksort(arr, pivitidx+1, end);
    }
}
int main(){;
    vector<int>arr = {1,3,5,4,2,6,7};
    quicksort(arr, 0, arr.size()-1);
    for(int i:arr){
        cout<<i<<"  ";
    }
}