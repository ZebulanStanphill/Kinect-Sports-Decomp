#include <vector>
struct Element_82834F10 { int a,b,c; };
typedef Element_82834F10 Elem_82835208;
template <> void std::vector<Element_82834F10>::_Reserve(unsigned int);
struct ReserveAccess_82835208 : std::vector<Element_82834F10> { using std::vector<Element_82834F10>::_Reserve; };
typedef struct { Elem_82835208 *first, *last, *end; } Vec_82835208;


static __forceinline unsigned char Inside(Vec_82835208 *v, Elem_82835208 *x)
{
  return x < v->last && v->first <= x;
}

static __forceinline void Construct(Elem_82835208 *p, Elem_82835208 *x)
{
  if (p != 0) {
    p->a = x->a;
    p->b = x->b;
    p->c = x->c;
  }
}

extern "C" void fn_82835208(Vec_82835208 *v, Elem_82835208 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      ((ReserveAccess_82835208 *)v)->_Reserve(1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      ((ReserveAccess_82835208 *)v)->_Reserve(1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
