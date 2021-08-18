#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string solution(vector<vector<int>> scores) {
    string answer = "";
    int i, j;
    
    for(i=0;i<scores.size();i++) {
        vector<int> tmp;
        for(j=0;j<scores.size();j++) {
            tmp.push_back(scores[j][i]);
        }
        int max_index = max_element(tmp.begin(), tmp.end()) - tmp.begin();
        int min_index = min_element(tmp.begin(), tmp.end()) - tmp.begin();
        if(max_index == i) {
            if(count(tmp.begin(), tmp.end(), tmp[max_index]) == 1) {
                tmp.erase(tmp.begin() + i);
            }
        }
        if(min_index == i) {
            if(count(tmp.begin(), tmp.end(), tmp[min_index]) == 1) {
                tmp.erase(tmp.begin() + i);
            }
        }
        int avg = accumulate(tmp.begin(), tmp.end(), 0) / tmp.size();
        switch(avg/10) {
            case 9:
                answer += "A";
                break;
            case 8:
                answer += "B";
                break;
            case 7:
                answer += "C";
                break;
            case 6: case 5:
                answer += "D";
                break;
            default:
                answer += "F";
                break;
        }
    }
    return answer;
}
