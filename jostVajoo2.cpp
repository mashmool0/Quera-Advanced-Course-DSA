#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int n, q;
    cin >> n >> q; 
    vector<int> array(n); 
    for (int i = 0; i < n; i++) {
        cin >> array[i]; 
    }
    
    // Use std::sort which is more efficient
    sort(array.begin(), array.end());

    for (int j = 0; j < q; j++) {
        int new_num;
        cin >> new_num;  
        
        // Use std::upper_bound to find the first element greater than new_num
        int count = upper_bound(array.begin(), array.end(), new_num - 1) - array.begin();
        
        cout << count << endl; 
    }

    return 0; 
}
