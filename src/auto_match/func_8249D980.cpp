#include <vector>

struct Pair_8249D980 {
    int first;
    unsigned int second;
};

extern "C" void fn_8249D980(std::vector<Pair_8249D980> *v, unsigned int value)
{
    for (std::vector<Pair_8249D980>::iterator it = v->begin(); it != v->end(); ++it) {
        if (it->second == value) {
            v->erase(it);
            return;
        }
    }
}
