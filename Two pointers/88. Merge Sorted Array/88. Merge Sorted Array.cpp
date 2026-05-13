// Два массива целых чисел nums1 и nums2, отсортированные в порядке убывания, и два целых числа m и n, представляющие количество элементов в nums1 и nums2 
// Объединить nums1 и nums2в один массив, отсортированный в порядке убывания.
// Итоговый отсортированный массив должен храниться внутри массива nums1 (для этого массив nums1 имеет длину m + n, где последние n элементы устанавливаются в 0)

#include <iostream>
#include <vector>

using namespace std;

void fill_by_nums1(vector<int>& nums1, int& i, int& curIndex_nums1)
{
    while (i >= 0)
    {
        nums1[curIndex_nums1] = nums1[i];

        i--;
        curIndex_nums1--;
    }
}

void fill_by_nums2(vector<int>& nums1, vector<int>& nums2, int& j, int& curIndex_nums1)
{
    while (j >= 0)
    {
        nums1[curIndex_nums1] = nums2[j];

        j--;
        curIndex_nums1--;
    }
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int p1 = m - 1;
    int p2 = n - 1;
    int curIndex_nums1 = m + n - 1;

    while (p1 >= 0 && p2 >= 0)
    {
        if (nums1[p1] > nums2[p2])
        {
            nums1[curIndex_nums1] = nums1[p1];
            --p1;
        }
        else
        {
            nums1[curIndex_nums1] = nums2[p2];
            --p2;
        }

        --curIndex_nums1;
    }

    if (p1 >= 0)
        fill_by_nums1(nums1, p1, curIndex_nums1);

    if (p2 >= 0)
        fill_by_nums2(nums1, nums2, p2, curIndex_nums1);
}

int main()
{
    std::vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
    int m = 3;
    std::vector<int> nums2 = { 2, 5, 6 };
    int n = 3;

    merge(nums1, m, nums2, n);
}