#include <iostream>
#include <queue>

using namespace std;

int main() {
    int k, n, i;
    int tmp;
    int idx=0;
    
    cin >> n >> k;

    int* result = new int[n];

    queue<int> q;

    for(i=1;i<=n;i++) {
        q.push(i);
    }
    
    i = 0;
    while(!q.empty()) {
        idx++;
        tmp = q.front();
        q.pop();
        if(idx%k==0) {
            result[i] = tmp;
            i++;
        }
        else {
            q.push(tmp);
        }
    }

    cout << "<";
    for(i=0;i<n;i++) {
        if(i==n-1) {
            cout << result[i];
        }
        else cout << result[i] << ", ";
    }
    cout << ">";

    delete[] result;
    return 0;
}
