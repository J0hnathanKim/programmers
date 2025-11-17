#include <string>
#include <vector>
#include <cctype>   // toupper 사용

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char c : myString){
        answer += toupper(c);   // 소문자면 대문자로, 아니면 그대로
    }
    
    return answer;
}
