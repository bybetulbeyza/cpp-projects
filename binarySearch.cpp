#include <iostream>
using namespace std;
int binarySearch(int* arr,int n,int size){
    int left = 0;
    int right = size-1; //index starts at 0, size is 8 but last index is 7
    while(left<=right){
        int mid = left + (right - left)/2;//find the middle index
        if(arr[mid]== n){//if middle element equal to target return middle index
            return(mid);
        }else if(arr[mid]<n){//if middle element is smaller than target ignore left half
            left = mid+1;
        }
        else{//if middle element is greater than target ignore right half
            right= mid-1;
        }
    }
    return(-1);//if the element not is not found return -1
}

int main(){
    int arr[]= {1,3,4,5,6,7,8,9};//need to be sorted array for binarry search
    int n = 6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int a = binarySearch(arr,n,size);
    if(a==-1)
    cout<<"array doesnt contain "<<n;
    else
    cout<<"the number you are searching is at index "<<a<<"."<<endl;
    return (0);
}