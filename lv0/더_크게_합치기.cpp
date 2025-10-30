#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string first = to_string(a) + to_string(b);
	string second = to_string(b) + to_string(a);
	int c = stoi(first);
	int d = stoi(second);
	return c > d ? c : d;
}
