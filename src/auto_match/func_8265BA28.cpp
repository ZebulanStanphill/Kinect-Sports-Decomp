// std::_Tree_unchecked_const_iterator::operator++ from <xtree>: steps to the next node of a
// std::set<Element_8265C818>. Only that set's erase functions call it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8265C818.h"

typedef std::set<Element_8265C818> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

template Unchecked &Unchecked::operator++();
