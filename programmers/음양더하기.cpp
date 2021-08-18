#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int i=0;
    
    for(i=0;i<absolutes.size();i++) {
        if(!signs[i]) {
            absolutes[i] = -absolutes[i];
        }
        answer += absolutes[i];
    }
    
    return answer;
}
