#include <vector>

struct Pair_83062AD8 {
    int first;
    int second;
};

typedef std::vector<Pair_83062AD8> Vec_83062AD8;

extern "C" Vec_83062AD8::iterator *fn_83062AD8(Vec_83062AD8::iterator *out, Vec_83062AD8 *v, Vec_83062AD8::const_iterator where)
{
    *out = v->erase(where);
    return out;
}
