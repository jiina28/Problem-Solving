#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int num = commands.size();
    
    for(int i=0;i<num;i++) {
        vector<int> temp;
        int idx = commands[i][0];
        int idx2 = commands[i][1];
        
        for(int j=idx;j<=idx2;j++) {
            temp.push_back(array[j-1]);
        }
        
        int find = commands[i][2];
        sort(temp.begin(), temp.end());
        answer.push_back(temp[find-1]);
    }
    
    return answer;
}
