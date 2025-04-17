#include <iostream>
#include <vector>
using namespace std;
vector<int> primenumber(int n){
    vector<int>a(n+1,1);// mark all numbers as prime initially
    vector<int>primes;
    a[0]=a[1]=0;//0 and 1 are not primes
    for (int p=2;(p*p)<=n;p++){
        if(a[p] !=0){
          for(int j=p*p;j<=n;j+=p){
            a[j]=0;//mark multiples of p as not prime
          }
           }
        }
    for (int p=2;p<=n;p++){
        if(a[p]!=0)
            primes.push_back(p);
    }
    return(primes);
}
int main(){
    int n;
    cout<<"enter the upper limit : "<<endl;
    cin>>n;
    vector<int> primes = primenumber(n);
    cout<<"all prime numbers betwen 0 and "<<n<<endl;
    for (int s : primes) {
        cout << s << " ";
    }
    return 0;
}