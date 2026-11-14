#include <vector>

struct Elem_827D9350 {
    int a;
    int b;
};

typedef std::vector<Elem_827D9350> Vec_827D9350;

extern "C" void fn_827D90D0(Vec_827D9350 *v, Elem_827D9350 *val);
extern "C" void fn_827D8CF0(Elem_827D9350 **out, Elem_827D9350 *first,
                            Elem_827D9350 *mid, Elem_827D9350 *last);

template<> __forceinline
void Vec_827D9350::push_back(Elem_827D9350 &&val)
{
    fn_827D90D0(this, &val);
}

namespace std {
template<> __forceinline
Vec_827D9350::iterator rotate<Vec_827D9350::iterator>(Vec_827D9350::iterator first,
                                                       Vec_827D9350::iterator mid,
                                                       Vec_827D9350::iterator last)
{
    Elem_827D9350 *r;
    fn_827D8CF0(&r, first._Ptr, mid._Ptr, last._Ptr);
    return Vec_827D9350::iterator(r, 0);
}
}

template Vec_827D9350::iterator Vec_827D9350::emplace<Elem_827D9350>(Vec_827D9350::const_iterator, Elem_827D9350 &&);
