#include <iostream>
using namespace std; 

void PrintArray(int arr[],int n){
    for (int i = 0 ; i< n;i++) {
        cout << arr[i] << " " ; 
    }
    cout << endl;
}

int main() { 
    // donbale k hesab 
    // tedad add n ta 
`
    PrintArray(arr,n);
    cout << "------- " << endl ; 
    // example 
    // 1 2 3 4 
    // 1 3 5 
    int count = 0 ;
    int complete = 0 ;

    while (complete != n-1) { 
        complete = 0 ; 
        for (int i = 0 ; i< n-1 ; i++) { 
            if (abs(arr[i] - arr[i+1]) != k ) { // i = 1   complete= 0  va k = 1  va  n=3 
                // agar 2 ta bad az add jari addi vojood dasht     // 2 4 4 
                if (i+2 <= n-1 ) {
                    // roye i tasir mizarim          // mosavi check shavad ???!!!! 
                    if (arr[i] < arr[i+1]){
                        if (arr[i+1] - arr[i] < k) {
                            arr[i] -= 1 ;
                            count++;
                            break;
                        }else if (arr[i+1] - arr[i] > k) { 
                            arr[i] += 1 ;
                            count++;
                            break;
                        }
                    }else if (arr[i+1] < arr[i]) { 
                        if (arr[i] - arr[i+1] < k) {
                            arr[i] += 1 ; 
                            count++;
                            break;
                        }else {
                            arr[i] -= 1 ; 
                            count++;
                            break; 
                        }
                    }else {
                        arr[i+1] +=1;
                        count++; 
                        break;
                    }
                }else { 
                    // roye i+1 tasir mizarim 
                    if (arr[i] < arr[i+1]){
                        if (arr[i+1] - arr[i] < k ) { 
                            arr[i+1] +=1 ;
                            count++;
                            break;
                        }else {
                            arr[i+1] -= 1 ;
                            count++;
                            break; 
                        }
                    }else if (arr[i]>arr[i+1]) { 
                        if (arr[i] - arr[i+1] < k) { 
                            arr[i+1] -= 1;
                            count++;
                            break;
                        }else if (arr[i] - arr[i+1] > k  ){ 
                            arr[i+1] +=1 ;
                            count++;
                            break; 
                        }
                    }else {
                        arr[i] -= 1 ;
                        count++;
                        break;
                    }
                
                }
            }
            else { 
                // for finish main while 
                complete++;
                continue;
            }

        


        } 
    }

    PrintArray(arr,n);
    cout << count ; 



    return 0;

}