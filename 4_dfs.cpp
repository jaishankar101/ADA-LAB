
#include<iostream>

using namespace std;

int visited[10],arr[10][10];
int brr[10],head=0;

void dfs(int v,int n){
    brr[head++]=v;
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(arr[v][i] && !visited[i])
            dfs(i,n);
    }
}

int main(){
    int n,k,flag=0;
    cout<<"Enter no of vertices: ";
    cin>>n;
    cout<<"Enter adjacency matrix:";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<"Enter starting vertex:";
    cin>>k;
    dfs(k-1,n);
    cout<<"Vertices from v"<<k<<":";
    for(int i=1;i<head;i++)
        cout<<" v"<<(brr[i]+1);
    cout<<endl;
    for(int i=0;i<n;i++){
        if(visited[i]){
            flag=1;;
        }else{
            flag=0;
        }
    }
    if(flag){
        cout<<"Graph connected"<<endl;
    }else{
        cout<<"Graph not connected"<<endl;
    }
}
