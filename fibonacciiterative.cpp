#include <iostream>
using namespace std;

void fibonacciiterative(int number){
    int a = 0, b=1,next;
    for (int i = 0;i<number;i++){
        cout<<a<<" ";//print the first fibonacci number
        next=a+b;//calculate next number in sequence
        a=b;//update a to the previous b
        b=next;//update b to the newly calculated number
    }
    cout<<endl;
}
int main(){
    cout<<"enter a number to see fibonacci series to that index : ";
    int number;
    cin>>number;
    cout<<"fibonacci series : ";
        fibonacciiterative(number);
}