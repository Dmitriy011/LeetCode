// Даны 2 строки needleи haystack.
// Верните индекс первого вхождения строки needleв haystack, или, -1 если needle строка не является частью haystack.

#include <iostream>
#include <vector>

using namespace std;

//int strStr(string haystack, string needle)
//{
//    bool isGood = false;
//    for (int i = 0; i < haystack.size(); ++i)
//    {
//        for (int j = 0; j < needle.size(); ++j)
//        {
//            if (haystack[j + i] == needle[j])
//            {
//                isGood = true;
//            }
//            else
//            {
//                isGood = false;
//                break;
//            }
//        }
//
//        if (isGood)
//            return i;
//    }
//
//    return -1;
//}

int strStr(string haystack, string needle)
{
    if (haystack.length() < needle.length())
        return -1;

    int p1 = 0;

    while (p1 < haystack.size())
    {
        if (haystack.substr(p1, needle.length()) == needle)
            return p1;
        else
            p1++;
    }

    return -1;
}

int main()
{
    string  haystack = "leetcode";
    string needle = "sad";

    std::cout << strStr(haystack, needle);
}
