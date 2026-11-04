// Clears a std::set<Element_828A61C8> member (the range erase is func_828A61C8), frees its head
// node and resets the std::string stored in front of it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A61C8.h"

typedef std::set<Element_828A61C8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

struct Obj {
    char buf[16];
    unsigned int size;
    unsigned int res;
    int pad18;
    Set tree;
};

extern "C" {
void fn_8265CA20(void *p);

void fn_828A7378(void *unused, Obj *o)
{
    Tree::iterator ret = o->tree.erase(o->tree.begin(), o->tree.end());
    fn_8265CA20(o->tree._Myhead);
    if (o->res >= 16) {
        fn_8265CA20(*(void **)o->buf);
    }
    o->size = 0;
    o->res = 15;
    o->buf[0] = 0;
}
}
