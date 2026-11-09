// std::vector<T>::push_back (VC10) for a 4-byte element (float). Identical code folding gave every
// 4-byte vector one _Reserve, named after Element_82360E28 (func_82360E28.cpp); it is reached
// here through a declaration of that member. fn_8287D600 keeps its name (callers in C units).
#include <vector>

struct Element_82360E28 {
    int data[1];
};

template <> void std::vector<Element_82360E28>::_Reserve(size_type count);

struct Vector_8287D600 : std::vector<Element_82360E28> {
    using std::vector<Element_82360E28>::_Reserve;
};

struct Values_8287D600 {
    float *first;
    float *last;
    float *end;
};

static __forceinline bool Inside(Values_8287D600 *v, const float *x)
{
    return x < v->last && v->first <= x;
}

static __forceinline void Construct(float *p, const float &x)
{
    if (p != 0) {
        *p = x;
    }
}

extern "C" void fn_8287D600(Values_8287D600 *v, const float *x)
{
    if (Inside(v, x)) {
        int idx = x - v->first;
        if (v->last == v->end) {
            ((Vector_8287D600 *)v)->_Reserve(1);
        }
        Construct(v->last, v->first[idx]);
    } else {
        if (v->last == v->end) {
            ((Vector_8287D600 *)v)->_Reserve(1);
        }
        Construct(v->last, *x);
    }
    ++v->last;
}
