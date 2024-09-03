#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') {
            if(cnt<0) continue;
            cnt++;
        }
        else if(s[i]==')') {
            if(cnt<0) continue;
            cnt--;
        }
    }
    
    if(cnt==0) return true;
    else return false;

}