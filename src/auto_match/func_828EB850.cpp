namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828B45A8.h"

typedef std::set<Element_828B45A8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

struct NoNullCheck {};
inline void *operator new(unsigned int, void *where, NoNullCheck) { return where; }
inline void operator delete(void *, void *, NoNullCheck) {}

extern "C" {
void fn_8265CA20(void *);
extern unsigned int lbl_8202751C;

struct Str_828EB850 {
  union { char *ptr; char buf[16]; } u;
  unsigned int size;
  unsigned int cap;
};

void fn_828EB850(unsigned int *param_1)
{
  unsigned char auStack_20[16];
  *param_1 = (unsigned int)&lbl_8202751C;
  {
    Set *t = (Set *)(param_1 + 0x17);
    new ((void *)auStack_20, NoNullCheck()) Tree::iterator(t->erase(t->begin(), t->end()));
  }
  fn_8265CA20((void *)param_1[0x18]);
  {
    Str_828EB850 *s = (Str_828EB850 *)(param_1 + 3);
    if (s->cap >= 0x10) {
      fn_8265CA20(s->u.ptr);
    }
    s->size = 0;
    s->cap = 0xf;
    s->u.buf[0] = 0;
  }
}
}
