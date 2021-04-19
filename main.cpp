#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n));
    int v;
    cin >> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j] ;
        }
    }
    stack<int> k;
    v--;
    k.push(v);
    int count=1, max=1;
    vector<int> used(n);
    used[v]=1;
    while(!k.empty()){
        int v=k.top();
        k.pop();
        count--;
        if(used[v]==2){
            continue;
        }
        used[v]=2;
        for(int i=0;i<n;i++){
            if(matrix[v][i]  && used[i]!=2){
                k.push(i);
                used[i]=1;
                count++;
                if(count>max){
                    max=count;
                }
            }
        }
    }
    cout << max+1 << endl;
    return 0;
}

