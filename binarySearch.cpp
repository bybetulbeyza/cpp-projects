#include <iostream>
using namespace std;
int binarySearch(int* arr,int n,int size){
    int left = 0;
    int right = size-1; //inedx starts with 0, size is 8 but last index is 7
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid]== n){
            return(mid);
        }else if(arr[mid]<n){
            left = mid+1;
        }
        else{
            right= mid-1;
        }
    }
    return(-1);
}

int main(){
    int arr[]= {1,3,4,5,6,7,8,9};
    int n = 6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int a = binarySearch(arr,n,size);
    if(a==-1)
    cout<<"array doesnt contain "<<n;
    else
    cout<<"the number you are searching is at index "<<a<<"."<<endl;
    return (0);
}