# include <cmath>

int mySqrt(int x) {
    if (x == 0 || x == 1)
    {
        return x;
    }

    int st = 1;
    int fn = x;
    int mid;

    while (st <= fn)
    {
        mid = (st + fn) * 0.5;

        if ((long)mid * mid > (long)x)
        {
            fn = mid - 1;
            continue;
        }
        else
        {
            if (mid * mid == x)
            {
                return mid;
            }
            else
            {
                st = mid + 1;
            }
        }
    }

    return round(fn);
}