#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

void delay(){
    for(long j=0;j<5000;j++);
    }

vector<int> insertion_sort(vector<int> arr){
    int j,temp;
    
    for(int i=1;i<arr.size();i++){
        j=i-1;
        temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=temp;
            delay();
            j--;
        }
        arr[j+1]=temp;
    }
    return arr;
}

int  main()
{
    vector<int> a;
    int n,ele;
    clock_t start,end;
    cout<<"Enter Size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    cout<<"\nElements Before Sort: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    start=clock();
    a=insertion_sort(a);
    end=clock();
    cout<<"\nElements after Sort: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nTime taken for sorting:"<<(end-start);
}
