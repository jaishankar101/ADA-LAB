#include <iostream>
#include<ctime>
using namespace std;

void merge(int p[], int plen, int q[], int qlen, int r[]) {
    int pi = 0, qi = 0, ri = 0;
    while (pi < plen && qi < qlen) {
        if (p[pi] < q[qi]) {
            r[ri] = p[pi];
            pi++;
        } else {
            r[ri] = q[qi];
            qi++;
        }
        ri++;
    }
    while (pi < plen) {
        r[ri] = p[pi];
        ri++;
        pi++;
    }
    while (qi < qlen) {
        r[ri] = q[qi];
        ri++;
        qi++;
    }
}

void mergeSort(int a[], int len) {
    if (len < 2)
        return;
    int mid = len / 2;
    int left[mid];
    int right[len - mid];

    for (int i = 0; i < len; i++) {
        if (i < mid)
            left[i] = a[i];
        else
            right[i - mid] = a[i];
    }

    mergeSort(left, mid);
    mergeSort(right, len - mid);

    merge(left, mid, right, len - mid, a);
}

int main() {
    int len;
    clock_t start ,end;
    cout<<"enter length:";
    cin>>len;
    int arr[len];
    cout<<"Enter elements:";
    for (int i = 0; i < len; i++) {
        arr[i]=(rand()%1000 + 1);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    start=clock();
    mergeSort(arr, len);
    end=clock();
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    // cout<<endl<<(float)(end-start);
    cout<<endl<<"Time taken:"<<difftime(end,start)/CLOCKS_PER_SEC<<" seconds";
    return 0;
}
