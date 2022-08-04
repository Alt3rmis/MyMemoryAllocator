#include <chrono>

struct Timer
{
    Timer()
    {
        t1 = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        t2 = std::chrono::high_resolution_clock::now();
        auto ms_int = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
        std::cout << ms_int.count() << "ms\n";
    }
    std::chrono::_V2::system_clock::time_point  t1;
    std::chrono::_V2::system_clock::time_point  t2;
};