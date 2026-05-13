// Два массива целых чисел nums1 и nums2, отсортированные в порядке убывания, и два целых числа m и n, представляющие количество элементов в nums1 и nums2 
// Объединить nums1 и nums2в один массив, отсортированный в порядке убывания.
// Итоговый отсортированный массив должен храниться внутри массива nums1 (для этого массив nums1 имеет длину m + n, где последние n элементы устанавливаются в 0)

#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(string s) 
{
    // Проходит по всем элементам от begin() до end()
    // Применяет условие(предикат) к каждому символу
    // Перемещает "ненужные" элементы в конец контейнера
    // Возвращает итератор на начало "мусорной" зоны
    /*std::remove_if(s.begin(), s.end(), [](char c) 
    {
        return !std::isalnum(static_cast<unsigned char>(c));
    })*/

    s.erase(std::remove_if(s.begin(), s.end(), [](char c) 
    { 
        return !std::isalnum(static_cast<unsigned char>(c));
    }), s.end());

    for (char& c : s) 
    {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    int L = 0, R = s.length() - 1;
    while (L < R)
    {
        if (s[L] != s[R])
            return false;
        else
        {
            ++L;
            --R;
        }
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    std::cout << isPalindrome(s);
}