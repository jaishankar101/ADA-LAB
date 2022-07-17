#include<iostream>
#include <ctime>
using namespace std;

void delay(){
    for(long i=0;i<1000;i++);
}

int lsearch(int arr[],int key){
    int i=0;
    while(i!=10000 && arr[i]!=key){
        i++;
    }
    if(i==10000)
        return -1;
    else
        return i;
}

int main(){
    clock_t start,end;
    int arr[10000];
    int key,result;
    for(int i = 0;i<10000;i++) {
        arr[i] = i;
    }
    cout<<"Enter the key\n";
    cin>>key;
    start = clock();
    delay();
    result = lsearch(arr,key);
    end = clock();
    if(result==-1)
        printf("Element not found\n");
    else
        printf("Element found\n");
    cout<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds";
}
