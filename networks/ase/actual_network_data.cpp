#include <actual_network.H>


#ifdef NSE_NET
namespace NSE_INDEX
{
    AMREX_GPU_MANAGED amrex::Array2D<int, 1, Rates::NumRates, 1, 7, Order::C> rate_indices {
        -1, 1, 3, -1, -1, 4, 61,
        -1, 2, 3, -1, -1, 6, 62,
        -1, 2, 5, -1, -1, 7, 63,
        -1, 2, 6, -1, -1, 8, 64,
        -1, 2, 7, -1, -1, 10, 67,
        -1, 0, 8, -1, -1, 9, 65,
        -1, 2, 8, -1, -1, 12, 70,
        -1, 1, 9, -1, -1, 10, 66,
        -1, 0, 10, -1, -1, 11, 68,
        -1, 1, 11, -1, -1, 12, 69,
        -1, 2, 12, -1, -1, 14, 72,
        -1, 1, 13, -1, -1, 14, 71,
        -1, 2, 14, -1, -1, 16, 74,
        -1, 1, 15, -1, -1, 16, 73,
        -1, 3, 3, -1, 1, 11, -1,
        -1, 3, 3, -1, 2, 8, -1,
        -1, 2, 4, -1, 1, 6, 76,
        -1, 3, 6, -1, 1, 13, -1,
        -1, 3, 6, -1, 2, 12, -1,
        -1, 6, 6, -1, 1, 15, -1,
        -1, 6, 6, -1, 2, 14, -1,
        -1, 2, 7, -1, 1, 9, 78,
        -1, 2, 9, -1, 0, 12, 79,
        -1, 1, 11, -1, 2, 8, 77,
        -1, 1, 13, -1, 2, 12, 80,
        -1, 1, 15, -1, 2, 14, 81,
        2, 2, 2, -1, -1, 3, 75,
        -1, 3, 3, -1, -1, 12, -1,
        -1, 6, 6, -1, -1, 16, -1,
        -1, 3, 6, -1, -1, 14, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, 2, 16, -1, -1, 17, 50,
        -1, -1, 17, -1, 2, 16, -1,
        -1, 2, 17, -1, -1, 18, 52,
        -1, -1, 18, -1, 2, 17, -1,
        -1, 2, 18, -1, -1, 19, 54,
        -1, -1, 19, -1, 2, 18, -1,
        -1, 2, 19, -1, -1, 20, 56,
        -1, -1, 20, -1, 2, 19, -1,
        -1, 2, 20, -1, -1, 21, 58,
        -1, -1, 21, -1, 2, 20, -1,
        -1, 2, 21, -1, -1, 22, 60,
        -1, -1, 22, -1, 2, 21, -1,
        -1, -1, 4, -1, 1, 3, -1,
        -1, -1, 6, -1, 2, 3, -1,
        -1, -1, 7, -1, 2, 5, -1,
        -1, -1, 8, -1, 2, 6, -1,
        -1, -1, 9, -1, 0, 8, -1,
        -1, -1, 10, -1, 1, 9, -1,
        -1, -1, 10, -1, 2, 7, -1,
        -1, -1, 11, -1, 0, 10, -1,
        -1, -1, 12, -1, 1, 11, -1,
        -1, -1, 12, -1, 2, 8, -1,
        -1, -1, 14, -1, 1, 13, -1,
        -1, -1, 14, -1, 2, 12, -1,
        -1, -1, 16, -1, 1, 15, -1,
        -1, -1, 16, -1, 2, 14, -1,
        -1, -1, 3, 2, 2, 2, -1,
        -1, 1, 6, -1, 2, 4, -1,
        -1, 2, 8, -1, 1, 11, -1,
        -1, 1, 9, -1, 2, 7, -1,
        -1, 0, 12, -1, 2, 9, -1,
        -1, 2, 12, -1, 1, 13, -1,
        -1, 2, 14, -1, 1, 15, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1
    };
}
#endif

void actual_network_init()
{

}
