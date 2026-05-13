// Массив целых чисел arr, отсортированный в порядке неубывания.
// Удалить дубликаты.
// Относительный порядок элементов должен оставаться неизменным.
// Верните количество уникальных элементов.k​​​​​​​

///Решение:

/*nums = [0, 0, 1, 1, 1, 2]
int slow = 0, fast = 1;
1. nums[slow] == nums[fast]
1.1. fast = 2
nums = [s 0, 0, f 1, 1, 1, 2]

2. nums[slow] != nums[fast]
2.1. slow = 1
2.2.[0, s 1, f 0, 1, 1, 2]
2.3. f = 3
[0, s 1, 0, f 1, 1, 2 ]

3. nums[slow] == nums[fast]
3.1. fast = 4
[0, s 1, 0, 1, f 1, 2]

4. nums[slow] == nums[fast]
4.1. fast = 5
[0, s 1, 0, 1, 1, f 2]

5. nums[slow] != nums[fast]
5.1. slow = 2
[0, 1, s 0, 1, 1, f 2]
5.2.[0, 1, s 2, 1, 1, f 1]
5.3. fast = 6

6. return slow = 3 элемента
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int slow = 0, fast = 1;
    while (fast < nums.size())
    {
        if (nums[slow] != nums[fast])
        {
            ++slow;

            nums[slow] = nums[fast];
        }

        ++fast;
    }

    return slow + 1;
}

int main()
{
}