// Static destructor of a global std::set: erases every element, then frees the
// sentinel node. The range erase is the std::_Tree member (func_828E8448).
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
extern Set lbl_83214478;
void fn_8265CA20(void *p);

void fn_83141698(void)
{
    lbl_83214478.erase(lbl_83214478.begin(), lbl_83214478.end());
    fn_8265CA20(lbl_83214478._Myhead);
}
}
