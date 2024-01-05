#include <actual_network.H>


#ifdef NSE_NET
namespace NSE_INDEX
{
    AMREX_GPU_MANAGED amrex::Array2D<int, 1, Rates::NumRates, 1, 7, Order::C> rate_indices {
        -1, -1, 3, -1, 0, 2, -1,
        -1, -1, 5, -1, 1, 2, -1,
        -1, -1, 6, -1, 1, 4, -1,
        -1, -1, 7, -1, 1, 5, -1,
        -1, -1, 9, -1, 0, 8, -1,
        -1, -1, 9, -1, 1, 6, -1,
        -1, -1, 11, -1, 0, 10, -1,
        -1, -1, 11, -1, 1, 7, -1,
        -1, -1, 12, -1, 1, 10, -1,
        -1, -1, 13, -1, 0, 12, -1,
        -1, -1, 13, -1, 1, 11, -1,
        -1, -1, 14, -1, 1, 12, -1,
        -1, -1, 15, -1, 0, 14, -1,
        -1, -1, 15, -1, 1, 13, -1,
        -1, -1, 16, -1, 1, 14, -1,
        -1, -1, 17, -1, 0, 16, -1,
        -1, -1, 17, -1, 1, 15, -1,
        -1, -1, 18, -1, 1, 16, -1,
        -1, -1, 19, -1, 0, 18, -1,
        -1, -1, 19, -1, 1, 17, -1,
        -1, -1, 20, -1, 1, 18, -1,
        -1, -1, 21, -1, 0, 20, -1,
        -1, -1, 21, -1, 1, 19, -1,
        -1, -1, 22, -1, 1, 20, -1,
        -1, -1, 23, -1, 0, 22, -1,
        -1, -1, 23, -1, 1, 21, -1,
        -1, -1, 24, -1, 1, 22, -1,
        -1, -1, 25, -1, 0, 24, -1,
        -1, -1, 25, -1, 1, 23, -1,
        -1, -1, 26, -1, 1, 24, -1,
        -1, -1, 27, -1, 0, 26, -1,
        -1, -1, 27, -1, 1, 25, -1,
        -1, -1, 2, 1, 1, 1, -1,
        -1, 0, 2, -1, -1, 3, 1,
        -1, 1, 2, -1, -1, 5, 2,
        -1, 1, 4, -1, -1, 6, 3,
        -1, 1, 5, -1, -1, 7, 4,
        -1, 1, 6, -1, -1, 9, 6,
        -1, 1, 7, -1, -1, 11, 8,
        -1, 0, 8, -1, -1, 9, 5,
        -1, 0, 10, -1, -1, 11, 7,
        -1, 1, 10, -1, -1, 12, 9,
        -1, 1, 11, -1, -1, 13, 11,
        -1, 0, 12, -1, -1, 13, 10,
        -1, 1, 12, -1, -1, 14, 12,
        -1, 1, 13, -1, -1, 15, 14,
        -1, 0, 14, -1, -1, 15, 13,
        -1, 1, 14, -1, -1, 16, 15,
        -1, 1, 15, -1, -1, 17, 17,
        -1, 0, 16, -1, -1, 17, 16,
        -1, 1, 16, -1, -1, 18, 18,
        -1, 1, 17, -1, -1, 19, 20,
        -1, 0, 18, -1, -1, 19, 19,
        -1, 1, 18, -1, -1, 20, 21,
        -1, 1, 19, -1, -1, 21, 23,
        -1, 0, 20, -1, -1, 21, 22,
        -1, 1, 20, -1, -1, 22, 24,
        -1, 1, 21, -1, -1, 23, 26,
        -1, 0, 22, -1, -1, 23, 25,
        -1, 1, 22, -1, -1, 24, 27,
        -1, 1, 23, -1, -1, 25, 29,
        -1, 0, 24, -1, -1, 25, 28,
        -1, 1, 24, -1, -1, 26, 30,
        -1, 1, 25, -1, -1, 27, 32,
        -1, 0, 26, -1, -1, 27, 31,
        -1, 2, 2, -1, 0, 10, 81,
        -1, 2, 2, -1, 1, 7, 76,
        -1, 1, 3, -1, 0, 5, 69,
        -1, 0, 5, -1, 1, 3, -1,
        -1, 2, 5, -1, 0, 12, 85,
        -1, 2, 5, -1, 1, 11, 83,
        -1, 5, 5, -1, 0, 14, 91,
        -1, 5, 5, -1, 1, 13, 88,
        -1, 1, 6, -1, 0, 8, 79,
        -1, 1, 7, -1, 0, 10, -1,
        -1, 1, 7, -1, 2, 2, -1,
        -1, 2, 7, -1, 0, 14, 90,
        -1, 2, 7, -1, 1, 13, 87,
        -1, 0, 8, -1, 1, 6, -1,
        -1, 0, 10, -1, 1, 7, 75,
        -1, 0, 10, -1, 2, 2, -1,
        -1, 1, 11, -1, 0, 12, -1,
        -1, 1, 11, -1, 2, 5, -1,
        -1, 0, 12, -1, 1, 11, 82,
        -1, 0, 12, -1, 2, 5, -1,
        -1, 1, 13, -1, 0, 14, -1,
        -1, 1, 13, -1, 2, 7, -1,
        -1, 1, 13, -1, 5, 5, -1,
        -1, 0, 14, -1, 1, 13, 86,
        -1, 0, 14, -1, 2, 7, -1,
        -1, 0, 14, -1, 5, 5, -1,
        -1, 1, 15, -1, 0, 16, -1,
        -1, 0, 16, -1, 1, 15, 92,
        -1, 1, 17, -1, 0, 18, -1,
        -1, 0, 18, -1, 1, 17, 94,
        -1, 1, 19, -1, 0, 20, -1,
        -1, 0, 20, -1, 1, 19, 96,
        -1, 1, 21, -1, 0, 22, -1,
        -1, 0, 22, -1, 1, 21, 98,
        -1, 1, 23, -1, 0, 24, 101,
        -1, 0, 24, -1, 1, 23, -1,
        -1, 1, 25, -1, 0, 26, 103,
        -1, 0, 26, -1, 1, 25, -1,
        1, 1, 1, -1, -1, 2, 33,
        -1, 2, 2, -1, -1, 11, -1,
        -1, 5, 5, -1, -1, 15, -1,
        -1, 2, 5, -1, -1, 13, -1
    };
}
#endif

void actual_network_init()
{

}
