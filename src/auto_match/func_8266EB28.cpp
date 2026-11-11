#include <vector>

// Same element type as the already matched std::vector::_Reserve unit.
struct Element_8266E4E8;
extern "C" void *fn_8266CB08(Element_8266E4E8 *, const Element_8266E4E8 *);
struct Element_8266E4E8 {
    int data[3];
};
// This specialization is defined by func_8266E4E8.cpp.
template <> void std::vector<Element_8266E4E8>::_Reserve(size_type);

// Expose the vector's protected state for this C-linkage entry point.
struct Vec_8266EB28 : std::vector<Element_8266E4E8> {
    using std::vector<Element_8266E4E8>::_Myfirst;
    using std::vector<Element_8266E4E8>::_Mylast;
    using std::vector<Element_8266E4E8>::_Myend;
    using std::vector<Element_8266E4E8>::_Reserve;
};

static __forceinline unsigned char Inside(Vec_8266EB28 *v, Element_8266E4E8 *x)
{
  return x < v->_Mylast && v->_Myfirst <= x;
}

extern "C" void fn_8266EB28(Vec_8266EB28 *v, Element_8266E4E8 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->_Myfirst;
    if (v->_Mylast == v->_Myend) {
      v->_Reserve(1);
    }
    if (v->_Mylast != 0) {
      fn_8266CB08(v->_Mylast, v->_Myfirst + idx);
    }
  } else {
    if (v->_Mylast == v->_Myend) {
      v->_Reserve(1);
    }
    if (v->_Mylast != 0) {
      fn_8266CB08(v->_Mylast, x);
    }
  }
  v->_Mylast = v->_Mylast + 1;
}
