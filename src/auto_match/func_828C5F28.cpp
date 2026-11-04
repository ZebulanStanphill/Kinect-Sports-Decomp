// Destructor body of an object that owns a heap Obj (released through its virtual slot 0) and
// a std::set<Element_82887890> (the range erase is func_82887890).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_82887890.h"

typedef std::set<Element_82887890> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

struct Obj { void (**vtbl)(struct Obj *, int); };
struct Self { void *vtbl; int x4; Obj *obj; Set list; };

extern "C" {
void fn_8265CA20(void *);
extern char lbl_820260D8[];

static void List_dtor(Set *l)
{
  Tree::iterator r = l->erase(l->begin(), l->end());
  fn_8265CA20(l->_Myhead);
}

void fn_828C5F28(Self *self)
{
  Obj *o;

  o = self->obj;
  self->vtbl = lbl_820260D8;
  if (o != 0)
    o->vtbl[0](o, 1);
  self->obj = 0;
  List_dtor(&self->list);
}
}
