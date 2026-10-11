#include "reel.h"
#include <random>
#include <chrono>

/*-----------------------------------------------------------------
*
*   1) We need to seed a random number generator
*   2) Generate a random numer 0 - n 
*   3) based on that number have a symbol/ location in the reel appear
*   4) Repeat for all reels/ symbols on the reel
*   5) Check for line pays, or bonus
*   6) If bonus, play the bonus
* 
*
*--------------------------------------------------------------------*/

// Seeds the mt() Number generator, seeds only once, but will continue to produce random numbers
std::mt19937& seedNumberGen()
{
    static std::mt19937 mt = []{
        std::random_device rd{};
        std::seed_seq ss {
            static_cast<std::seed_seq::result_type>(
                std::chrono::steady_clock::now().time_since_epoch().count()
                ), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()
        };

        return std::mt19937 {ss};
    }();
    
    return mt;
}

// Generate random numbers in a given range 0 to n
int generateRandomNum(int low, int high)
{
    std::uniform_int_distribution reelPosition{low, high};
    return reelPosition(seedNumberGen());
}
