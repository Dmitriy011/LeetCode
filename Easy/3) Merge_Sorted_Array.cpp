#include "vector"

void fill_by_nums1(std::vector<int>& nums1, int& i, int& k);
void fill_by_nums2(std::vector<int>& nums1, std::vector<int>& nums2, int& j, int& k);

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    if (i >= 0)
    {
        fill_by_nums1(nums1, i, k);
    }

    if (j >= 0)
    {
        fill_by_nums2(nums1, nums2, j, k);
    }
}

void fill_by_nums1(std::vector<int>& nums1, int& i, int& k)
{
    while (i >= 0)
    {
        nums1[k] = nums1[i];
        i--;
        k--;
    }
}

void fill_by_nums2(std::vector<int>& nums1, std::vector<int>& nums2, int& j, int& k)
{
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
