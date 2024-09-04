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
    int counter = 1;
    
        while(counter < n){
            for(int i = 0; i<n-counter;i++){
            if(arr[i] > arr[i+1]){
            // swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
        }
        counter++;
    }
    cout << endl;
    for(int i =0 ;i <n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}