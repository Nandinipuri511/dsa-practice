#include<iostream>
#include<stack>
using namespace std;
void reverseSentence(string s){
    stack<string> st;
    // pehle word initialize krenge

    for(int i = 0;i<s.length();i++){
    string word = "";
    while(s[i] != ' ' && i < s.length()){
        word += s[i];
        i++;
    }

    st.push(word);
    }

    while (!st.empty())
    {
       cout<< st.top() << " ";
       st.pop();
    }
    cout << endl;
}

int main(){
    stack <string> st;
    string s= "What are you doing?";
    cout << s << endl;
    reverseSentence(s);
}