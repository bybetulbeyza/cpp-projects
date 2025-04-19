#include <iostream>
using namespace std;
int iterativefactorial(int n){
    int j=1;
        for(int i=1; i<=n; i++){
        j =i*j;
    }
    return (j);
}
    int main(){
        int n;
        cout<<"enter a number to calculate its factorial : ";
        cin>>n;
        if (n < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return 1;}
            
        int a= iterativefactorial(n);
        cout<<"factorial of "<<n<<" is "<<a;
        return (0);
    }