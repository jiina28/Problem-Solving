#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum = 0;
    int i;
    
    for(i=1;i<=count;i++) {
        int mul = price * i;
        sum += mul;
    }
    if(sum > money) {
        answer = sum - money;
    }
    else answer = 0;
    
    return answer;
}
