#include <iostream>

int getNext(int i)
{
    int sum = 0;
    while (i > 0) 
    {
        int lastNum = i % 10;
        sum += lastNum * lastNum;

        i /= 10;
    }
    return sum;
}

bool isHappy(int n)
{
    int slow = n;
    int fast = getNext(n);

    while (fast != 1 && slow != fast)
    {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }

    return fast == 1;
}

int main()
{
    std::cout << isHappy(19);
}