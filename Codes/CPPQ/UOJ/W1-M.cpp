// UOJ W1-K
#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2, diff;
    cin >> h1 >> m1 >> h2 >> m2;
    diff = h2 * 3600 + m2 - h1 * 3600 - m2;
    cout << diff << endl;
    return 0;
}