// Erases the entries of a std::set<Element_8289F4C8> (at 0x22c) that fall in the range found
// by the equal-range helper for a key; the range erase is func_8289F4C8.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8289F4C8.h"

typedef std::set<Element_8289F4C8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

// placement new without the null check of the library's throw() version
struct NoNullCheck {};
inline void *operator new(unsigned int, void *where, NoNullCheck) { return where; }
inline void operator delete(void *, void *, NoNullCheck) {}

extern "C" {
void fn_828A1C98(void *out, void *set, unsigned int *key);

void fn_8289FB00(char *param_1, char *param_2)
{
  unsigned int auStack_20;
  struct { Tree::_Nodeptr first; Tree::_Nodeptr second; } stack_pair_18;
  Set *s = (Set *)(param_1 + 0x22c);

  auStack_20 = *(unsigned int *)(param_2 + 0xc);
  fn_828A1C98(&stack_pair_18, s, &auStack_20);
  new ((void *)&auStack_20, NoNullCheck()) Tree::iterator(
      s->erase(Tree::const_iterator(stack_pair_18.first, s), Tree::const_iterator(stack_pair_18.second, s)));
}
}
