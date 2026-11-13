// std::vector<Element>::push_back(const Element &) from VC10 <vector> for a 32-byte element:
// a std::string-like member copied by fn_8223B688 plus a float. _Reserve is the ICF-folded
// 32-byte-element _Reserve fn_8236D190 (func_8236D190.cpp).
#include <vector>

struct String_8223B688 {
    int data[7];
};

extern "C" void fn_8223B688(String_8223B688 *dst, const String_8223B688 *src);

struct Element_8236D0D0 {
    String_8223B688 name;
    float value;

    Element_8236D0D0(const Element_8236D0D0 &o)
    {
        fn_8223B688(&name, &o.name);
        value = o.value;
    }
};

typedef std::vector<Element_8236D0D0> ElementVector_8236D0D0;

extern "C" void fn_8236D190(ElementVector_8236D0D0 *self, unsigned int count);

template <> __forceinline void ElementVector_8236D0D0::_Reserve(size_type count)
{
    fn_8236D190(this, count);
}

extern "C" void fn_8236D0D0(ElementVector_8236D0D0 *self, const Element_8236D0D0 *x)
{
    self->push_back(*x);
}
