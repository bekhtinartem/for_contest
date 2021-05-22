#include <iostream>
#include <stack>

using namespace std;


int main()
{

    string s;
    cin >> s;
    stack<char> in;
    in.push(s[0]);

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '<' || s[i] == '>' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}') {
            if (!in.empty()) {
                char e = in.top();
                if ((e == '(' && s[i] == ')') || (e == '<' && s[i] == '>') || (e == '[' && s[i] == ']') || (e == '{' && s[i] == '}')) {
                    in.pop();
                }
                else {
                    in.push(s[i]);
                }
            }
            else {
                in.push(s[i]);
            }
        }

    }

    if (in.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
