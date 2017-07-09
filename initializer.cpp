#include <iostream>
#include <vector>
#include <atomic>

class Widget {};

int main()
{
    {
        std::cout << "init variable:\n";
        int w(42);
        int x = 43;
        int y{44};
        int z = {45};
        std::cout << w << ' '<< x << ' ' << y << ' ' << z << '\n';
    }

    {
        std::vector<int> v{1,3,5};
        std::cout << "print initialized vector:\n";
        for (int& e: v)
            std::cout << e << " ";
        std::cout << std::endl;
    }
    {
        // uniform 
        // copyable class:
        class Widget {
            int x{0};
            int y = 0;
            // int z(0);
        };
        // non copyable class:
        std::atomic<int> ai1{0};
        std::atomic<int> ai2 (0);
        //std::atomic<int> ai3 = 0;
    }
    {
        //Widget widget (); // most vexing parse
        Widget widget {};
        (void) widget;
    }
}
