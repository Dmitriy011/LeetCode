// Массив целых чисел arr и целое число val
// Удалите все вхождения в val на nums месте из массива 
// Порядок элементов может быть изменен.
// Верните количество элементов в массиве, которые не равны val

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& arr, int val)
{
    //arr.erase(std::remove(arr.begin(), arr.end(), val), arr.end());

    for (auto it = arr.begin(); it != arr.end(); )
    {
        if (*it == val)
            it = arr.erase(it);
        else
            ++it;
    }

    return arr.size();
}

int main()
{
    
}
