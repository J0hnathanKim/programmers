#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string first = to_string(a) + to_string(b);
	
	int c = stoi(first);
	int d = 2 * a * b;
    
	return c >= d ? c : d;
}
