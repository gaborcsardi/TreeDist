#include <stdint.h>
#include <limits>
#include "lap.h" /* for cost */

/*************** TYPES      *******************/

typedef uint64_t splitbit;

/*************** CONSTANTS  *******************/

const int BIN_SIZE = 64;
const int MAX_BINS = 32;
const int MAX_TIPS = BIN_SIZE * MAX_BINS;
const int MAX_SPLITS = MAX_TIPS; /* -3, but quicker if a power of two? */

const splitbit ALL_ONES = std::numeric_limits<splitbit>::max();

const cost BIG = std::numeric_limits<cost>::max() / MAX_SPLITS;
const double BIGL = double (BIG);

const splitbit right16bits = 65535U;
const uint32_t powers_of_two[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512,
                                    1024, 2048, 4096, 8192, 16384, 32768};

/*************** FUNCTIONS  *******************/

extern double lg2_trees_matching_split(int a, int b);

extern int count_bits (splitbit x);