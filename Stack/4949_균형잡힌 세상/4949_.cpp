#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str("");
    char ret=' ';
    int flag;

    while(1) {
        flag = 1;
        getline(cin, str);
        if (str.size()==1 && str[0] == '.') {
            flag = 2;
            break;
        }
        stack<char> s;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='('||str[i]=='[') {
                s.push(str[i]);
            }
            else if (str[i]==')') {
                if(s.empty()||s.top()!='(')
                    flag = 0;
                else s.pop();
            }
            else if (str[i]==']') {
                if(s.empty()||s.top()!='[')
                    flag = 0;
                else s.pop();
            }
        }
        if(s.empty()&&flag!=0)
            cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}