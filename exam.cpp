# include<bits/stdc++.h>
# include <string>
# include <vector>
using namespace std;
int main()
{
    int a, b;
string rawInput;
vector < string > numbers;
while (getline(cin, rawInput, ' '))
    {
        numbers.push_back(rawInput);
    }
    a = stoi(numbers.at(0));
    b = stoi(numbers.at(1));

    int ans = 0, k = 0;
    k = b;
    while (a > 1)
        {
            ans = ans + a;
        a = a - (a * k) / 100;
        }
        cout << ans;

    }