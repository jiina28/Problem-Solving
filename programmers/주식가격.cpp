#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    queue<int> q;
    int i, j;
    
    int p_size = prices.size();
    
    for(i=0;i<p_size;i++)
        q.push(prices[i]);
    
    for(i=0;i<p_size;i++)
    {
        int cnt = 0;
        
        for(j=i+1;j<p_size;j++)
        {
            
            if(prices[i] <= prices[j])
            {
                cnt++;
            }
            else if(prices[i] > prices[j]){
                cnt++;
                break;
            }
            
        }
        answer.push_back(cnt);
    }
    return answer;
}