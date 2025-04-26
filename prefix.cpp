#include <iostream>
#include <vector>
using namespace std;

void prefix(int *array,int size){
    int s=0;
    vector<int>arr;
    for(int i = 0;i<size;i++){
       s = array[i]+s;
       arr.push_back(s);
       
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[]={2,3,4,5,6,7};
    int size =sizeof(array)/sizeof(array[0]);
    prefix(array,size);
    return 0;
}