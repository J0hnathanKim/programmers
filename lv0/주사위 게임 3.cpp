#include <math.h>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    if (a == b && b == c && c == d) answer = 1111 * a;
    else if (a != b && b == c && c == d) answer = (10 * b + a) * (10*b + a);
    else if (a == b && b != c && b == d) answer = (10 * b + c) * (10*b + c);
    else if (a == b && b == c && c != d) answer = (10 * b + d) * (10*b + d);
    else if (a != b && a == c && c == d) answer = (10 * a + b) * (10*a + b);
    else if ((a == b && c == d) || (a == c && b == d) || (a == d && c == b)) {
        if (a == b) answer = (a + c) * abs(a - c);
        else if (a == c) answer = (a + b) * abs(a - b);
        else answer = (a + b) * abs(a - b);
    }
    else if (a == b && c != d) {
        answer = c * d;
    }
    else if (a == c && b != d) {
        answer = b * d;
    }
    else if (a == d && b != c) {
        answer = b * c;
    }
    else if (b == c && a != d) {
        answer = a * d;
    }
    else if (b == d && a != c) {
        answer = a * c;
    }
    else if (c == d && a != b) {
        answer = a * b;
    }
    else answer = a > b ? (b > c ? (c > d ? d : c) : (b > d ? d : b)) : (a > c ? (c > d ? d : c) : a > d ? d : a);

    return answer;
}
