// Static destructor of a heap-allocated std::set: erases every element, then frees
// the sentinel node and the set. The range erase is the std::_Tree member (func_82887890).
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

extern "C" {
extern Set *lbl_83214490;
void fn_8265CA20(void *p);

void fn_83141798(void)
{
    Set *t = lbl_83214490;
    if (lbl_83214490 != 0) {
        Tree::_Nodeptr *hp = &t->_Myhead;
        Tree::iterator r = t->erase(Tree::const_iterator((*hp)->_Left, t), Tree::const_iterator(*hp, t));
        fn_8265CA20(t->_Myhead);
        fn_8265CA20(t);
    }
}
}
