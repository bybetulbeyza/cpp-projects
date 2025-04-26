#include <iostream>
#include <vector>
using namespace std;

void prefixaverage(int* arr,int size){
    vector<int>array;
    int s=0;
    for(int i =0;i<size;i++){
        s=arr[i]+s;
        array.push_back(s/(i+1));
    }
    for(int i=0;i<size;i++)
    cout<<array[i]<<" ";
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size =sizeof(arr)/sizeof(int);
    prefixaverage(arr,size);
    return 0;
}