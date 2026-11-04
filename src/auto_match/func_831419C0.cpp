// Static destructor of a global std::set: erases every element, then frees the
// sentinel node through the system allocator. The range erase is the std::_Tree
// member (func_828EAF40).
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
#include "game/Element_828EA970.h"

typedef std::set<Element_828EA970> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

extern "C" {
extern Set lbl_83214540;

void fn_831419C0(void)
{
    lbl_83214540.erase(lbl_83214540.begin(), lbl_83214540.end());
    Tree::_Nodeptr head = lbl_83214540._Myhead;
    fn_825089A0()->vf28(head);
}
}
