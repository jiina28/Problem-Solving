#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one[5] = {1,2,3,4,5};
    int two[8] = {2,1,2,3,2,4,2,5};
    int three[10] = {3,3,1,1,2,2,4,4,5,5};
    int a=0, b=0, c=0;
    
    int num = answers.size();
    for(int i=0;i<num;i++) {
        if(answers[i] == one[i%5]) a++;
        if(answers[i] == two[i%8]) b++;
        if(answers[i] == three[i%10]) c++;
    }
    
    if(a == max({a,b,c})) answer.push_back(1);
    if(b == max({a,b,c})) answer.push_back(2);
    if(c == max({a,b,c})) answer.push_back(3);
    
    return answer;
}
