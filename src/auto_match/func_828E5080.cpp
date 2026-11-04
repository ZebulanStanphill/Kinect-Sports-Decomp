// Owner of a heap Obj with a std::set<Element_828E4F28>: erases the whole set (the range
// erase is func_828E4F28), then frees the set's head and the Obj.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E4F28.h"

typedef std::set<Element_828E4F28> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

struct Obj { void *p0; int p1, p2; Set tree; };
struct Owner { int pad[3]; Obj *obj; };

extern "C" {
void fn_8265CA20(void *p);
void fn_828E3D60(Obj *p);

void fn_828E5080(Obj *o)
{

  if (o != 0) {
    Tree::iterator r = o->tree.erase(o->tree.begin(), o->tree.end());
    fn_8265CA20(o->tree._Myhead);
    fn_828E3D60(o);
    fn_8265CA20(o->p0);
    fn_8265CA20(o);
  }
}
}
