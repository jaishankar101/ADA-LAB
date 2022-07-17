#include<iostream>

using namespace std;

void delay(){
    for(long i=0;i<1000;i++);
}

void towerh(int n,char src,char dest,char aux){
    if(n==0){
        cout<<"move disc from "<<src<<" to "<<dest<<endl;
    }
    else{
        towerh(n-1,src,aux,dest);
        cout<<"move disc from "<<src<<" to "<<dest<<endl;
        towerh(n-1,dest,src,aux);
    }
}

int main(){
    clock_t start,end;
    int n;
    cout<<"Enter the number of disks\n";
    scanf("%d",&n);
    start= clock();
    towerh(n,'a','b','c');
    end=clock();
    cout<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds";
}
