#include<iostream> 
using namespace std;
void TowerOfHanoi(int n, char src, char dest, char helper){
    if(n == 0){
        return;
    }

    TowerOfHanoi(n-1,src,helper,dest);
    cout << "move disc from " << src << " to " << dest <<endl;
    TowerOfHanoi(n-1,dest,helper,src);
}

int main(){
    TowerOfHanoi(3,'a','c','b');
    return 0;
}