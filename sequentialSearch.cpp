#include <iostream>
using  namespace std;
int sequentialSearch(int* a,int size,int n){
    int i;
    for(i=0;i<size;i++){
        if (a[i]==n)
        return(i);
    }
    return(-1);
}
int main(){
    int number=5;
    int a[]={1,2,5,6,3,4,7};
    int index;
    int size= sizeof(a)/sizeof(a[0]);
    index = sequentialSearch(a,size,number);
    if(index==-1)
    cout<<"array doesnt contain the number you are searching for"<<endl;
    else
    cout<<"the number you are searching is found at index :"<<index<<endl;
    return 0;
}