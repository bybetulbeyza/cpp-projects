#include <iostream>
using namespace std;
int fibonacci(int number){
    if (number <= 1)
    return number;
    else
    return fibonacci(number-1)+fibonacci(number-2);
}
int main(){
    cout<<"enter a number to see fibonacci series up to that index: ";
    int number;
    cin>>number;
    cout<<"fibonacci series : ";
    for (int i = 0; i<=5; i++)
    cout<<fibonacci(i)<<" ";
    return 0;
}