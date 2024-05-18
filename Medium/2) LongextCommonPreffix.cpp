#include <iostream>
#include <vector>
#include <string>    

std::string longestCommonPrefix(std::vector<string>& strs)
{
    std::string res;
    sort(strs.begin(), strs.end());
    std::string first = strs[0];
    std::string last = strs[strs.size() - 1];

    // общий префикс должен быть общим для всех строк, поэтому нам нужно найти общий префикс первой и последней     
    // строки в отсортированном списке.
    // !!! НО важно было отсоритрвоать лексигкографически 
    for (int i = 0; i < std::min(first.size(), last.size()); ++i)
    {
        if (first[i] != last[i])
        {
            return res;
        }

        res += first[i];
    }

    return res;
}
