bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    long long reversed = 0;
    long long tmp = x;

    while (tmp != 0)
    {
        int last_number = tmp % 10;
        reversed = reversed * 10 + last_number;
        tmp /= 10;
    }

    return (reversed == x);
}