// Caller of std::set<Element_828EAB70>::erase(const_iterator): drops one reference and,
// at zero, erases the entry found in one of three sets.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Allocator_825089A0.h"
#include "game/Element_828EAB70.h"

typedef std::set<Element_828EAB70, std::less<Element_828EAB70>, Allocator_825089A0<Element_828EAB70, 0> > Set;
typedef Set::_Mybase Tree;

// out of line: the original's erase(const_iterator) (func_828EAB70)
template <> Tree::iterator Tree::erase(const_iterator where);

struct O_828EB410 { char p0[8]; unsigned char f8; char p9[0x4b]; int f54; unsigned char f58; unsigned char f59; char p5a[0x2e]; unsigned char f88; char p89[7]; int f90; };

extern "C" {
Tree *fn_828EB388(void);
Tree *fn_828EB278(void);
Tree *fn_828EB300(void);
void fn_8289F160(int *, void *, int *);
extern unsigned char lbl_832144F6;

void fn_828EB410(O_828EB410 *o)
{
  int v;
  Tree *r;
  struct { int a, b; } L;
  if (--o->f90 == 0) {
    if (o->f8 != 0 && o->f88 != 0) lbl_832144F6 = 1;
    if (o->f8 != 0) {
      if (o->f59 != 0) {
        r = fn_828EB388();
        L.a = o->f54;
        fn_8289F160(&L.b, r, &L.a);
        v = L.b;
        r = fn_828EB388();
      } else {
        r = fn_828EB278();
        L.b = o->f54;
        fn_8289F160(&L.a, r, &L.b);
        v = L.a;
        r = fn_828EB278();
      }
    } else {
      r = fn_828EB300();
      L.b = o->f54;
      fn_8289F160(&L.a, r, &L.b);
      v = L.a;
      r = fn_828EB300();
    }
    new (&L.b) Tree::iterator(r->erase(Tree::const_iterator((Tree::_Nodeptr)v, r)));
    o->f58 = 0;
  }
}
}
