#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixaverage(int* arr,int size){
    vector<int> array(size);
    int s=0;
    for(int i =0;i<size;i++){
        s=arr[i]+s;
        array.push_back(s/(i+1));
    }
    return array;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size =sizeof(arr)/sizeof(int);
    vector<int>result=prefixaverage(arr,size);
    for(int x : result){
        cout<<" ";
    }
    return 0;
}