// Link of question:   https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[] , int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }

        if(arr[mid] < key){   // right me jaoo
            start = mid + 1;
        }
        else{                 // left me jaoo
            end = mid - 1;
        }

         mid = start + (end - start)/2;

    }

    return ans;

}


int lastOccurance(int arr[] , int size, int key){

    int s = 0;
    int e = size-1;

    int mid = s + (e - s)/2;
    int ans = -1;

    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            s =  mid + 1;
        }

        if(arr[mid] < key){   // right me jaoo
            s = mid + 1;
        }
        else if(arr[mid] > key){                 // left me jaoo
            e = mid - 1;
        }

         mid = s + (e - s)/2;

    }

    return ans;

}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i =0 ; i < n ; i++ ){
            cin>>arr[i];
        }

        // int first = firstOcc(arr , n , k);
        // int last = lastOccurance(arr , n , k);

        cout<<firstOcc(arr , n , k)<<" "<<lastOccurance(arr , n , k)<<endl;

        return 0;


    }
}







// ********************************************* solution using pain & vectors *******************************************


// int firstOccurance(vector<int>& arr , int size, int key){

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end - start)/2;
//     int ans = -1;

//     while(start <= end){

//         if(arr[mid] == key){
//             ans = mid;
//             end = mid -1;
//         }

//         if(arr[mid] < key){   // right me jaoo
//             start = mid + 1;
//         }
//         else{                 // left me jaoo
//             end = mid - 1;
//         }

//          mid = start + (end - start)/2;

//     }

//     return ans;

// }

// int lastOccurance(vector<int>& arr , int size, int key){

//     int s = 0;
//     int e = size-1;

//     int mid = s + (e - s)/2;
//     int ans = -1;

//     while(s <= e){

//         if(arr[mid] == key){
//             ans = mid;
//             s =  mid + 1;
//         }

//         if(arr[mid] < key){   // right me jaoo
//             s = mid + 1;
//         }
//         else if(arr[mid] > key){                 // left me jaoo
//             e = mid - 1;
//         }

//          mid = s + (e - s)/2;

//     }

//     return ans;

// }


// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//    pair <int, int> p;
//     p.first = firstOccurance(arr, n, k);
//     p.second = lastOccurance(arr, n, k);
    
//     return p;
// }