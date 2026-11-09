// std::vector<T>::push_back (VC10) for a 4-byte element (int). Identical code folding gave every
// 4-byte vector one _Reserve, named after Element_82360E28 (func_82360E28.cpp); it is reached
// here through a declaration of that member. fn_8257A9F0 keeps its name (callers in C units).
#include <vector>

struct Element_82360E28 {
    int data[1];
};

template <> void std::vector<Element_82360E28>::_Reserve(size_type count);

struct Vector_8257A9F0 : std::vector<Element_82360E28> {
    using std::vector<Element_82360E28>::_Reserve;
};

struct Values_8257A9F0 {
    int *first;
    int *last;
    int *end;
};

static __forceinline bool Inside(Values_8257A9F0 *v, const int *x)
{
    return x < v->last && v->first <= x;
}

static __forceinline void Construct(int *p, const int &x)
{
    if (p != 0) {
        *p = x;
    }
}

extern "C" void fn_8257A9F0(Values_8257A9F0 *v, const int *x)
{
    if (Inside(v, x)) {
        int idx = x - v->first;
        if (v->last == v->end) {
            ((Vector_8257A9F0 *)v)->_Reserve(1);
        }
        Construct(v->last, v->first[idx]);
    } else {
        if (v->last == v->end) {
            ((Vector_8257A9F0 *)v)->_Reserve(1);
        }
        Construct(v->last, *x);
    }
    ++v->last;
}
