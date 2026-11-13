// std::vector<T>::push_back(const T &) inlined into a wrapper (func_82835208.cpp shape).
// Element_82816868 is the 20-byte element of the vector whose _Reserve is
// func_82816868.cpp; the element is copied by struct assignment (lwzu/stwu loop).
#include <vector>
struct Element_82816868 {
    int data[5];
};
typedef Element_82816868 Elem_82816B30;
template <> void std::vector<Element_82816868>::_Reserve(unsigned int);
struct ReserveAccess_82816B30 : std::vector<Element_82816868> { using std::vector<Element_82816868>::_Reserve; };
typedef struct { Elem_82816B30 *first, *last, *end; } Vec_82816B30;

static __forceinline unsigned char Inside(Vec_82816B30 *v, Elem_82816B30 *x)
{
  return x < v->last && v->first <= x;
}

static __forceinline void Construct(Elem_82816B30 *p, Elem_82816B30 *x)
{
  if (p != 0) {
    *p = *x;
  }
}

extern "C" void fn_82816B30(Vec_82816B30 *v, Elem_82816B30 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      ((ReserveAccess_82816B30 *)v)->_Reserve(1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      ((ReserveAccess_82816B30 *)v)->_Reserve(1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
