#include<iostream>
using namespace std;
int main(){
   int n;
   cout << "enter n";
   cin >> n;
   int arr[n];
   
   // input
    for(int i = 0; i<n;i++){
        cout << "enter " << i << " element";
        cin >> arr[i];
    }
    // print
    for(int i =0 ;i <n;i++){
        cout << arr[i] << " ";
    }
    // selection sort
    for(int i = 0;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[i]){
                // swap using temporary variable
                int temp = arr[j] ;
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << endl;

    // print
    for(int i =0 ;i <n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}