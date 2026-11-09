// Erases the range [pair.first, pair.second) of the manager's std::set (the
// range found for a key built from the object's name), then releases the key and
// the object's name. The range erase is the std::_Tree member (func_828E8448).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E7248.h"

typedef std::set<Element_828E7248> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

extern "C" {
void fn_828B5580(void *dst, void *src);
void fn_828B55B0(void *p);
void fn_828E4A20(void *p);
void fn_828E6B10(void *out, void *mgr, void *key);
Set *fn_828E8EF8(void);

struct Str {
    char b[12];
};

struct Key {
    int id;
    Str name;
};

struct Obj {
    int a;
    int *inner;
    char pad[0x30];
    Str name;
};

void fn_828E91A8(Obj *o)
{
    struct {
        Tree::_Nodeptr first;
        Tree::_Nodeptr second;
    } pair;
    Key key;
    Set *mgr;

    key.id = o->inner[10];
    fn_828B5580(&key.name, &o->name);
    mgr = fn_828E8EF8();
    fn_828E6B10(&pair, mgr, &key);
    Tree &tree = *mgr;
    Tree::iterator res = tree.erase(Tree::const_iterator(pair.first, &tree), Tree::const_iterator(pair.second, &tree));
    (void)res;
    fn_828B55B0(&key.name);
    fn_828B55B0(&o->name);
    fn_828E4A20(o);
}
}
