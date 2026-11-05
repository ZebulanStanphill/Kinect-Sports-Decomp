// Destroys two owned containers: a node list head and a std::set<Element_8288E4B0>.
#include <new>
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Element_8288E4B0.h"
struct Node_828C9D58 { Node_828C9D58 *next; };
typedef std::set<Element_8288E4B0>::_Mybase Tree_8288E4B0;
template <> Tree_8288E4B0::iterator Tree_8288E4B0::erase(const_iterator, const_iterator);
extern "C" {
void fn_8265CA20(Node_828C9D58 *);
void fn_828B22F0(void *);
}
template <class Tree> static void erase_all(void *result, Tree *t) { new (result) typename Tree::iterator(t->erase(t->begin(), t->end())); }
extern "C" void fn_828C9D58(void *unused, Node_828C9D58 **param_2)
{
  unsigned char auStack_20[8];
  Tree_8288E4B0 *t = (Tree_8288E4B0 *)(param_2 + 2);
  fn_828B22F0((char *)t + 0x10);
  fn_8265CA20(param_2[6]);
  erase_all(auStack_20, t);
  fn_8265CA20(param_2[3]);
}
