// Erases a tree subtree using the system allocator. The value type is a
// placeholder for the original game element.
namespace std { extern "C" __declspec(noreturn) void fn_82F622A8(const char *); }
#define _Xlength_error fn_82F622A8
#include <set>
#include <deque>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"
struct Item_82893530 { char data; };
typedef std::deque<Item_82893530, Allocator_825089A0<Item_82893530,0> > Deque;
extern "C" void fn_8288C358(Deque *);
template <> __forceinline void Deque::_Tidy() { fn_8288C358(this); }
struct Element_82893530 { int key; Deque items; };
typedef std::set<Element_82893530,std::less<Element_82893530>,Allocator_825089A0<Element_82893530,0> > Set;
typedef Set::_Mybase Tree;
extern "C" void fn_82893530(Tree *self, Tree::_Nodeptr root) {
 for (Tree::_Nodeptr node=root; !node->_Isnil; root=node) {
  fn_82893530(self,node->_Right); node=node->_Left;
  root->_Myval.~Element_82893530();
  fn_825089A0()->vf28(root);
 }
}
