#include<iostream>
using namespace std;

int find_pivot(int arr[], int n){
    int s = 0;
    int e =  n - 1;

    int mid = s + (e-s) / 2;

    while(s < e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s) / 2;
    }

    return s;
}

int main(){

    int n = 5;

    int arr[n] = {3, 8, 10, 17, 1};

    int indexPivot  = find_pivot(arr, n);

    cout<<" Index of Pivot Element : "<< indexPivot <<endl;
}