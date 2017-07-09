#include <iostream>

int main()
{
    {
        int a [10];
        a[9] = 10;
        for (int& e : a)
            std::cout << e << ' ';

    }
}
