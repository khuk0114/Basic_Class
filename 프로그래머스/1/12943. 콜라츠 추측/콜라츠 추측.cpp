#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int cnt = 0;
    while(1){
        if(num==1)
            return cnt;
        else if(num%2==0) 
            num = num/2;
        else if(num%2==1)
            num = num*3 + 1;
        cnt++;
        if(cnt==500) return -1;
    }
}
