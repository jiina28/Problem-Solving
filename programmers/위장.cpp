#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> cl;
    
    for(auto c:clothes) {
        cl[c[1]]++;
    }
    
    for(auto it=cl.begin();it!=cl.end();it++) {
        answer *= it->second + 1;
    }
    answer--;
    return answer;
}
