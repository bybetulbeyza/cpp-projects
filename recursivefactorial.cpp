#include <iostream>
using namespace std;

int recursivefactorial(int n){
    if(n == 0||n==1){ //base case if n 0 or 1 return 1
    return(1);//0!=1 and 1!=1
}
else
    return(n*(recursivefactorial(n-1)));//recursive step: multiply n by the factorial of (n-1)

}

int main(){
    int n;
    cout<<"enter a number to calculate its factorial : ";
    cin>>n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    int a = recursivefactorial(n);
    cout<<"factorial of "<<n<<" is "<<a<<endl;
}