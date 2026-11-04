// Destroys the owned containers in reverse member order.
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
#include "game/Allocator_825089A0.h"
#include "game/Element_828957B0.h"
#include "game/Element_828960C0.h"
#include "game/Element_82896D88.h"
struct Node_828971A0 { Node_828971A0 *next; };
struct Iterator_828971A0 { Node_828971A0 *node; };
static Iterator_828971A0 iter(Node_828971A0 *n) { Iterator_828971A0 i = {n}; return i; }
typedef std::set<Element_828957B0>::_Mybase Tree_828957B0;
typedef std::set<Element_828960C0>::_Mybase Tree_828960C0;
typedef std::set<Element_82896D88>::_Mybase Tree_82896D88;
template <> Tree_828957B0::iterator Tree_828957B0::erase(const_iterator, const_iterator);
template <> Tree_828960C0::iterator Tree_828960C0::erase(const_iterator, const_iterator);
template <> Tree_82896D88::iterator Tree_82896D88::erase(const_iterator, const_iterator);
extern "C" {
extern unsigned int lbl_8202396C;
void fn_8265CA20(Node_828971A0 *);
void fn_828C5F28(void *);
void fn_828B22F0(void *);
void fn_82825F40(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_82887890(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_8288E4B0(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_8224ED20(void *, void *, Iterator_828971A0, Iterator_828971A0);
}
static void clear_last(void *result, Node_828971A0 **tree) { fn_82825F40(result, tree, iter(tree[1]->next), iter(tree[1])); }
template <class Tree> static void erase_all(void *result, Tree *t) { new (result) typename Tree::iterator(t->erase(t->begin(), t->end())); }
extern "C" void fn_828971A0(Node_828971A0 **param_1)

{
  Node_828971A0 *uVar1;
  System_825089A0 *piVar2;
  unsigned char auStack_20 [8];
  
  *param_1 = (Node_828971A0 *)&lbl_8202396C;
  clear_last(auStack_20, param_1 + 0x30);
  fn_8265CA20(param_1[0x31]);
  fn_828C5F28(param_1 + 0x29);
  erase_all(auStack_20, (Tree_828960C0 *)(param_1 + 0x25));
  fn_8265CA20(param_1[0x26]);
  erase_all(auStack_20, (Tree_828957B0 *)(param_1 + 0x1f));
  uVar1 = param_1[0x20];
  piVar2 = fn_825089A0();
  piVar2->vf28((void *)uVar1);
  fn_82887890(auStack_20,param_1 + 0x1b,iter(param_1[0x1c]->next),iter(param_1[0x1c]));
  fn_8265CA20(param_1[0x1c]);
  fn_8288E4B0(auStack_20,param_1 + 0x17,iter(param_1[0x18]->next),iter(param_1[0x18]));
  fn_8265CA20(param_1[0x18]);
  fn_828B22F0(param_1 + 0x14);
  fn_8265CA20(param_1[0x14]);
  fn_828B22F0(param_1 + 0x11);
  fn_8265CA20(param_1[0x11]);
  erase_all(auStack_20, (Tree_82896D88 *)(param_1 + 0xd));
  fn_8265CA20(param_1[0xe]);
  fn_8224ED20(auStack_20,param_1 + 9,iter(param_1[10]->next),iter(param_1[10]));
  fn_8265CA20(param_1[10]);
  erase_all(auStack_20, (Tree_82896D88 *)(param_1 + 5));
  fn_8265CA20(param_1[6]);
  fn_8224ED20(auStack_20,param_1 + 1,iter(param_1[2]->next),iter(param_1[2]));
  fn_8265CA20(param_1[2]);
  return;
}
