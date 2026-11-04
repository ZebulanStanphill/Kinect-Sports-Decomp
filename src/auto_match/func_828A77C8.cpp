// std::set<Element_828CE758>::_Erase(_Nodeptr)-style recursive node destruction: each
// node's inner std::set is cleared (func_828A6130) and its head node freed.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A57C0.h"
#include "game/Element_828CE758.h"

typedef InnerSet_828CE758 InnerSet;
typedef InnerSet::_Mybase InnerTree;
typedef std::set<Element_828CE758> Set;
typedef Set::_Mybase Tree;

template <> InnerTree::iterator InnerTree::erase(const_iterator, const_iterator);

extern "C" {
void fn_8265CA20(void *p);

void fn_828A77C8(Tree *self, Tree::_Nodeptr root)
{
    Tree::_Nodeptr p;
    for (p = root; !p->_Isnil; root = p) {
        fn_828A77C8(self, p->_Right);
        p = p->_Left;
        InnerSet &s = root->_Myval.unkC;
        s.erase(s.begin(), s.end());
        fn_8265CA20(s._Myhead);
        fn_8265CA20(root);
    }
}
}
