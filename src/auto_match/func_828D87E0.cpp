#include <vector>
struct Element_828D8768 { int data[7]; };
template <> void std::vector<Element_828D8768>::_Reserve(unsigned int);
struct ReserveAccess_828D87E0 : std::vector<Element_828D8768> { using std::vector<Element_828D8768>::_Reserve; };

struct Inner_828D87E0 { int v[4]; };
struct Elem_828D87E0 {
    void *vtable;
    int a;
    int b;
    Inner_828D87E0 inner;
};
typedef struct { Elem_828D87E0 *first, *last, *end; } Vec_828D87E0;

extern "C" char lbl_82026D70[];
extern "C" void fn_828D83F0(Inner_828D87E0 *self, const Inner_828D87E0 *other);

static __forceinline unsigned char Inside(Vec_828D87E0 *v, const Elem_828D87E0 *x)
{
  return x < v->last && v->first <= x;
}

static __forceinline void Construct(Elem_828D87E0 *p, const Elem_828D87E0 *x)
{
  if (p != 0) {
    p->vtable = lbl_82026D70;
    p->a = x->a;
    p->b = x->b;
    fn_828D83F0(&p->inner, &x->inner);
  }
}

extern "C" void fn_828D87E0(Vec_828D87E0 *v, const Elem_828D87E0 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      ((ReserveAccess_828D87E0 *)v)->_Reserve(1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      ((ReserveAccess_828D87E0 *)v)->_Reserve(1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
