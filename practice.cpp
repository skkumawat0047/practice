#include<iostream>
#include<vector>
using namespace std;
int pivit(vector<int>&arr, int st, int end){
    int idx=st-1, pivot=arr[end];
    for(int i=st; i<end; i++){
        if(arr[i]<pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quicksort(vector<int>&arr, int st, int end){
    if(st<end){
        int pivitidx = pivit(arr, st, end);
        quicksort(arr,st, pivitidx-1);
        quicksort(arr, pivitidx+1, end);
    }
}
int main(){
    vector<int>arr;
    int n;
    cout<<"enter a numebr n: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    quicksort(arr, 0, n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}