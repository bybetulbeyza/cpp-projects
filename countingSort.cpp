#include <iostream>
#include <vector>
using namespace std;
void countingsort(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){ //find the maximum element in the array to determine the range
        if(arr[i]>max)
        max=arr[i];
    }
    vector<int>count(max+1,0);
    for(int i= 0;i<size;i++){ //count the occurences of each element
        count[arr[i]]++;
    }
    int index = 0;
    for(int i=0;i<=max;i++){
        while(count[i]>0){
            arr[index]=i;
            index++;
            count[i]--;
        }
    }
}
int main(){
    int arr[]={2,2,2,1,2,4,5,3,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array : ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    countingsort(arr,size);
    cout<<"sorted array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}