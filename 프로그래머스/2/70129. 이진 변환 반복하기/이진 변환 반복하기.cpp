#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int>answer(2);
    int cnt0=0;
    
    while(1){
        int cnt1=0;
    
        for(int i =0; i<s.size();i++){
            if(s[i]=='1') cnt1++;
        }
        
        answer[1] += s.size()-cnt1;
        s.clear();
        
        while(cnt1!=0){
            if(cnt1%2==1)
                s.push_back('1');
            else
                s.push_back('0');
            cnt1/=2;
        }
        reverse(s.begin(), s.end());
        cnt0++;
        
        if(s.size()==1) break;
    }
    answer[0] = cnt0;
    
    return answer;
}