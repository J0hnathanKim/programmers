#include <string>


using namespace std;

string solution(string code) {
    string answer = "";
    string a = code;
    int mode = 0;
    for(int i = 0; i < a.length(); i++){
       if(a[i] != '1' && mode == 0 ){
           if(i % 2 == 0) answer += a[i];
       }
       else if(a[i] == '1') {
           if(mode == 0) mode = 1;
           else if(mode == 1) mode = 0;
           continue;
       }
       else if(a[i] != '1' && mode == 1){
           if(i % 2 != 0) answer += a[i];
       }
    }
    return answer.empty() ? "EMPTY" : answer;
}
