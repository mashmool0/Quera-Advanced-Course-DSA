#include <iostream> 

using namespace std ; 

int main() { 
    int n , q ; 
    cin >> n  >> q; 
    int array[n] ;
    for (int i = 0 ; i < n ; i++) { 
        cin >> array[i]; 
    } 
    int x ; 
    for (int i = 0 ; i<q; i++) {
        int count = 0 ; 
        cin >> x ; 
        for (int j = 0 ; j < n ; j++) { 
            if (array[j] < x) { 
                count++ ; 
            }

        }

        cout << count  << "\n" ; 

    }



    
    return 0 ; 

}
