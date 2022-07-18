#include <iostream>
#include <ctime>
using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[r];
    int pIndex = 0;
    for (int i = 0; i < r; i++) {
        if (a[i] <= pivot) {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[r]);

    return pIndex;
}

void quickSort(int a[], int left, int right) {
    if (left < right) {
        int p = partition(a,left, right);
        quickSort(a, 0, p - 1);
        quickSort(a, p + 1, right);
    }
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
    quickSort(arr, 0, len-1);
    end=clock();
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    // cout<<endl<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds";
    cout<<endl<<"Time taken:"<<difftime(end,start)/CLOCKS_PER_SEC<<" seconds";
    return 0;
}
