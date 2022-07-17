#include<iostream>
#include <ctime>
using namespace std;

void delay(){
    for(long i=0;i<1000;i++);
}

int gcd(int m,int n){
    if(n==0)
        return m;
    delay();
    return gcd(n,m%n);
}

int main()
{
    int a,b,c;
    clock_t start,end;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    start= clock();
    delay();
    c=gcd(a,b);
    end= clock();
    cout<<"The gcd of two numbers is "<<c;
    cout<<"\nThe time taken is "<<((double)(end-start)/CLOCKS_PER_SEC)<<" seconds";
}
