#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    // check wheather "x" present in an sorted array or not?   // it return o/p in boolean form i.e true(1) or false(0).
    // int n = 5;
    // int arr[n] = {1,3,5,8,9};

    // bool res1 =  binary_search(arr , arr + n, 3);

    // cout<<res1<<endl; // returns true (1)

    // bool res2 =  binary_search(arr, arr+n, 10);

    // cout<<res2<<endl; // returns flase (0)

// -******************************************************

// lower_bound(); It points to the first most position of element we are searching for in a sorted array is present else it points the first next greatest element present in an array!

// int n = 6;
// int a[n] = {1, 33, 33, 33, 45, 56};

// int index = lower_bound(a, a+n, 33) - a;  // we added "- a" to the index this lower_bound pointing to.
// int ind = lower_bound(a, a+n, 34) - a;

// cout<<index<<endl;  // 1 o/p
// cout<<ind<<endl;   // 4 o/p


// syntax for vector ->  lower_bond(a.begin() , a.end() , X) - a.begin();

// -******************************************************

// upper_bound(); it return the position of first next greater element in our sorted array 

// int n = 6;
// int a[n] = {1, 33, 33, 33, 45, 56};

// int index1 = upper_bound(a, a+n, 33) - a;
// int index2 = upper_bound(a, a+n, 56) - a;

// cout<<index1<<"\n";      // o/p - it is pointing 45 (index-> 4)
// cout<<index2<<"\n";     // o/p - it is pointing next to 56 (index-> 6)


// syntax for vector ->  upper_bond(a.begin() , a.end() , X) - a.begin();

// -***************************BAsics Questions***************************

// Q1) Find the first occurrence of a X in a sorted array. If it does not exits, print -1.

// as we know using lower_bound(); function we get first occurance ;

        // int n = 7;
        // int arr[n] = {1,3,3,3,3,4,6};

        // int x; cin>>x;

        // int ind = lower_bound(arr, arr+n, x) - arr;

        // if(ind < n && arr[ind] == x) cout<<"x present at index : "<<ind<<endl;
        // else cout<<"-1";
 
 // *****************************************************************
 
 // Q2) Find the last occurrence of a X in a sorted array. If it does not exits, print -1.

 // using upper_bond(); function

        // int n = 7;
        // int arr[n] = {1,3,3,3,3,4,6};

        // int x; cout<<"enter value of x :"; cin>>x;

        // int ind = upper_bound(arr, arr+n, x) - arr;
        // ind--;

        // if(ind >=0  && arr[ind] == x) cout<<"x present at index : "<<ind<<endl;
        // else cout<<"-1";
 
 // *****************************************************************


 // Q3) Find the largest number smaller than X in a sorted array. If no number exists print -1.
        
        // int n = 7;
        // int arr[n] = {1,2,2,4,6,8,9};

        // int x;
        // cout<<"enter value of x : ";
        // cin>>x;

        // int ind = lower_bound(arr, arr+n, x) - arr;
        // ind--;

        // if(ind >= 0) cout<<"largest number smaller than X is: "<< arr[ind] <<endl;
        // else cout<<"-1"; 



// }