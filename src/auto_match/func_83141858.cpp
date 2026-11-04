// Static destructor of a global std::set: erases every element, then frees the
// sentinel node. The range erase is the std::_Tree member (func_828E8B50).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E8B50.h"

typedef std::set<Element_828E8B50> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

extern "C" {
extern Set lbl_8321449C;
void fn_8265CA20(void *p);

void fn_83141858(void)
{
    lbl_8321449C.erase(lbl_8321449C.begin(), lbl_8321449C.end());
    fn_8265CA20(lbl_8321449C._Myhead);
}
}
