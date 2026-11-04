// Erases the entries of a std::set<Element_828A73E8> that fall in the range found by
// the equal-range helper for a key; the range erase is func_828A7E40.
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
#include "game/Element_828A73E8.h"

typedef std::set<Element_828A73E8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

// placement new without the null check of the library's throw() version
struct NoNullCheck {};
inline void *operator new(unsigned int, void *where, NoNullCheck) { return where; }
inline void operator delete(void *, void *, NoNullCheck) {}

extern "C" {
unsigned int fn_823AA970(void *key);
void fn_828CCE98(void *out, void *set, unsigned int *key);

void fn_828CF0F0(Tree *param_1, void *param_2)
{
  unsigned int auStack_20;
  struct { Tree::_Nodeptr first; Tree::_Nodeptr second; } stack_pair_18;

  auStack_20 = fn_823AA970(param_2);
  fn_828CCE98(&stack_pair_18, param_1, &auStack_20);
  new ((void *)&auStack_20, NoNullCheck()) Tree::iterator(
      param_1->erase(Tree::const_iterator(stack_pair_18.first, param_1),
                     Tree::const_iterator(stack_pair_18.second, param_1)));
}
}
