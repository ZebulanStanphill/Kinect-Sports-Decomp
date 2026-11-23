// Appends elements of two lists to an output list, round by round: when only
// one list has elements, each round takes elements until their weights (word
// 4) reach 7; otherwise each round takes a share of both lists, ordered by
// word 2.

#include <vector>

// 40-byte element; the layout is shared with fn_82471140 (vector::push_back).
struct Element_82471140 {
    int data[10];
};

typedef std::vector<Element_82471140> ElementList_824BF410;

template <> void ElementList_824BF410::push_back(const Element_82471140 &);

static __forceinline void AddByWeight(ElementList_824BF410 *list, ElementList_824BF410::iterator item,
                                      ElementList_824BF410::iterator end, int rounds,
                                      ElementList_824BF410 *out)
{
    int round;
    for (round = 0; round < rounds; round++) {
        int budget = 7;
        do {
            budget -= item->data[4];
            out->push_back(*item);
            ++item;
            if (item == end) {
                item = list->begin();
            }
        } while (budget > 0);
    }
}

static __forceinline void AddByTime(ElementList_824BF410 *first, ElementList_824BF410 *second,
                                    ElementList_824BF410::iterator item, ElementList_824BF410::iterator other,
                                    unsigned int rounds, unsigned int firstTotal, unsigned int secondTotal,
                                    ElementList_824BF410 *out)
{
    unsigned int round;
    for (round = 0; round < rounds; round++) {
        unsigned int firstLeft = firstTotal / rounds;
        unsigned int secondLeft = secondTotal / rounds;
        while (firstLeft != 0 || secondLeft != 0) {
            // "> 0" here and "!= 0" in the loop test keep the original's second test of firstLeft.
            if (firstLeft > 0 &&
                (secondLeft == 0 || (unsigned int)item->data[2] < (unsigned int)other->data[2])) {
                out->push_back(*item);
                firstLeft--;
                ++item;
            } else {
                out->push_back(*other);
                ++other;
                secondLeft--;
            }
            if (other == second->end()) {
                other = second->begin();
            }
            if (item == first->end()) {
                item = first->begin();
            }
        }
    }
}

extern "C" void fn_824BF410(ElementList_824BF410 *first, ElementList_824BF410 *second, int rounds,
                            ElementList_824BF410 *out, unsigned int firstTotal, unsigned int secondTotal)
{
    ElementList_824BF410::iterator end = first->end();
    if (first->begin() == end) {
        ElementList_824BF410::iterator item = second->begin();
        end = second->end();
        if (item != end) {
            AddByWeight(second, item, end, rounds, out);
        }
    } else {
        ElementList_824BF410::iterator secondBegin = second->begin();
        ElementList_824BF410::iterator item = first->begin();
        if (secondBegin == second->end()) {
            AddByWeight(first, item, end, rounds, out);
        } else {
            AddByTime(first, second, item, secondBegin, rounds, firstTotal, secondTotal, out);
        }
    }
}
