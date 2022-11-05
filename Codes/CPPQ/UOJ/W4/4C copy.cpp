#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str;
    cout << "Please input some text: ";
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::tolower); //将所有字母转为小写

    int cnt[256] = {};
    for (int i = 0; i < str.size(); i++)
    {
        cnt[(int)str[i]]++;
    }
    //输出字符出现次数
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            cout << "the number of " << (char)i << ": " << cnt[i] << endl;
        }
    }
}
