// Pairs up two small point sets (at most eight points each) so that the summed squared distance is
// smallest: tries every arrangement of every choice of points of the larger set.
#include <algorithm>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
}

struct Pair_823DC330 {
    unsigned int first;  /* 0x00 */
    unsigned int second; /* 0x04 */
};

struct Best_823DC330 {
    unsigned int order[8]; /* 0x00 */
    double cost;           /* 0x20 */
};

// Advances [chosenBegin, chosenEnd) to the next combination of the sorted values [allBegin, allEnd).
template <class It>
static __forceinline bool NextCombination(It allBegin, It allEnd, It chosenBegin, It chosenEnd)
{
    bool marked = false;
    It chosenMarked = chosenEnd;
    It all = allEnd;
    It chosen;
    It last = chosenEnd;

    --all;
    --last;
    for (chosen = last; chosen != chosenBegin || chosen == chosenBegin; --chosen, --all) {
        if (*chosen == *all) {
            if (chosen != chosenBegin) {
                marked = true;
                chosenMarked = --chosen;
                ++chosen;
                continue;
            } else {
                return false;
            }
        } else {
            if (marked == true) {
                It allMarked = allEnd;
                It search;
                It next;
                It fill;

                for (search = allBegin; search != allEnd; ++search) {
                    if (*chosenMarked == *search) {
                        allMarked = search;
                        break;
                    }
                }
                next = ++allMarked;
                for (fill = chosenMarked; fill != chosenEnd; ++fill, ++next) {
                    *fill = *next;
                }
                return true;
            }
            for (It search = allBegin; search != allEnd; ++search) {
                if (*chosen == *search) {
                    *chosen = *(++search);
                    return true;
                }
            }
        }
    }
    return true;
}

static __forceinline float LengthSq3(__vector4 v)
{
    __vector4 d = __vmsum3fp(v, v);
    return d.vector4_f32[0];
}

extern "C" unsigned int fn_823DC330(const __vector4 *pointsA, unsigned int countA, const __vector4 *pointsB,
                                    unsigned int countB, Pair_823DC330 *pairs)
{
    const __vector4 *larger = pointsA;
    const __vector4 *smaller = pointsB;
    unsigned int largerCount = countA;
    unsigned int smallerCount = countB;
    double cost;
    unsigned int i;
    unsigned int count;

    if (countA < countB) {
        larger = pointsB;
        smaller = pointsA;
        largerCount = countB;
        smallerCount = countA;
    }

    Best_823DC330 best = {{0, 1, 2, 3, 4, 5, 6, 7}, 1.7976931348623157e+308};
    unsigned int all[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    unsigned int chosen[8] = {0, 1, 2, 3, 4, 5, 6, 7};

    do {
        do {
            cost = 0.0;
            for (i = 0; i < smallerCount; i++) {
                cost += LengthSq3(__vsubfp(smaller[i], larger[chosen[i]]));
            }
            if (cost < best.cost) {
                best.cost = cost;
                for (i = 0; i < smallerCount; i++) {
                    best.order[i] = chosen[i];
                }
            }
        } while (std::next_permutation(chosen, chosen + smallerCount));
    } while (NextCombination(all, all + largerCount, chosen, chosen + smallerCount));
    count = smallerCount > 7 ? 7 : smallerCount;
    if (larger == pointsB) {
        for (i = 0; i < count; i++) {
            pairs[i].first = i;
            pairs[i].second = best.order[i];
        }
    } else {
        for (i = 0; i < count; i++) {
            pairs[i].first = best.order[i];
            pairs[i].second = i;
        }
    }
    return count;
}
