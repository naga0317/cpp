// CPP program to count minimum reduce
// operations to make a palindrome
#include <bits/stdc++.h>
using namespace std;
 
// Returns count of minimum character
// reduce operations to make palindrome.
int countReduce(string& str)
{
    int n = str.length();
    int res = 0;
 
    // Compare every character of first half
    // with the corresponding character of
    // second half and add difference to
    // result.
    for (int i = 0; i < n / 2; i++)
        res += abs(str[i] - str[n - i - 1]);
 
    return res;
}
 
// Driver code
int main()
{
    string str = "abcd";
    cout << countReduce(str);
    return 0;
}
