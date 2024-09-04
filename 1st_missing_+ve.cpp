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
    int m = 1e6 + 2;
    bool check[m];
    for(int i = 0; i<m;i++){
        check[i] = false;
    }
    // pehle saare check array mai false   kr diye
    // ab apne array mai jo jo elements present honge unki check array mai +true value kr denge

    for(int i = 0; i<n;i++){
        if(arr[i] >0){
            check[arr[i]] = true;
        }
    }
    int ans =-1;
    cout << endl;

    for(int i = 1 ;i<m;i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }
    cout << ans;



}