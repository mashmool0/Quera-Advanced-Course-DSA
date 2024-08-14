#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void min_finder(int arr[], int n) {
    int min = 10000000;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    cout << min;
}

int main() {
    int k, n;
    cin >> n >> k;

    if (n==1) {
        cout<<0;
        return 0;
    } 

    int arr[n];
    int arr_test[n] ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr_test[i] = arr[i] ; 
    }
    int awnser_arr[n];
    // 1 2 3 4  
    // 
    // 
    // 
    // -1 -2 -3 -4 
    // -1 2 -3 -4 

    for (int i = 0; i < n; i++) {
        awnser_arr[i] = 0;
        if (i!=0) {
            for (int z = 0 ; z < n;z++){
                arr_test[z] = arr[z] ; 
            }
        }

        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            } 
            int new_k = (abs(i - j) * k) ; // 3 
            int new_j = 0 ; 

            
            if (i<j) {
                new_j = new_k + arr_test[i];
                awnser_arr[i] += abs(new_j - arr_test[j]);
                arr_test[j] = new_j ; 
            }else {
                new_j = arr_test[i]- new_k ;  
                awnser_arr[i] += abs(new_j -arr_test[j] );
                arr_test[j] = new_j ;
            }


            


            
        }
    }
    // 1 2 3 4 
    // -1 2 5 8 
    // Call the min_finder function to get the minimum value from awnser_arr
    min_finder(awnser_arr, n);

    return 0;
}
