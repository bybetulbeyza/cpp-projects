#include <iostream>
using namespace std;
void decimaltobinary(int number){
    if(number==1){
    cout<<number;
}
    else {
        decimaltobinary(number/2);
        cout<<number%2;
    }
}

int main(){
    cout<<"enter a number to convert to binary : ";
    int number ;
    cin>>number;
    cout<<"binary version of "<<number<<" is ";
    decimaltobinary(number);
    cout<<endl;
    return (0);
}