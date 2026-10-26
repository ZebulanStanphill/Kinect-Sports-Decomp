// Destroys the owned containers in reverse member order.
#include <new>
#include "game/Allocator_825089A0.h"
struct Node_828971A0 { Node_828971A0 *next; };
struct Iterator_828971A0 { Node_828971A0 *node; };
static Iterator_828971A0 iter(Node_828971A0 *n) { Iterator_828971A0 i = {n}; return i; }
extern "C" {
extern unsigned int lbl_8202396C;
void fn_8265CA20(Node_828971A0 *);
void fn_828C5F28(void *);
void fn_828B22F0(void *);
void fn_82825F40(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_828960C0(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_828957B0(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_82887890(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_8288E4B0(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_82896D88(void *, void *, Iterator_828971A0, Iterator_828971A0);
void fn_8224ED20(void *, void *, Iterator_828971A0, Iterator_828971A0);
}
static void clear_last(void *result, Node_828971A0 **tree) { fn_82825F40(result, tree, iter(tree[1]->next), iter(tree[1])); }
extern "C" void fn_828971A0(Node_828971A0 **param_1)

{
  Node_828971A0 *uVar1;
  System_825089A0 *piVar2;
  unsigned char auStack_20 [8];
  
  *param_1 = (Node_828971A0 *)&lbl_8202396C;
  clear_last(auStack_20, param_1 + 0x30);
  fn_8265CA20(param_1[0x31]);
  fn_828C5F28(param_1 + 0x29);
  fn_828960C0(auStack_20,param_1 + 0x25,iter(param_1[0x26]->next),iter(param_1[0x26]));
  fn_8265CA20(param_1[0x26]);
  fn_828957B0(auStack_20,param_1 + 0x1f,iter(param_1[0x20]->next),iter(param_1[0x20]));
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
  fn_82896D88(auStack_20,param_1 + 0xd,iter(param_1[0xe]->next),iter(param_1[0xe]));
  fn_8265CA20(param_1[0xe]);
  fn_8224ED20(auStack_20,param_1 + 9,iter(param_1[10]->next),iter(param_1[10]));
  fn_8265CA20(param_1[10]);
  fn_82896D88(auStack_20,param_1 + 5,iter(param_1[6]->next),iter(param_1[6]));
  fn_8265CA20(param_1[6]);
  fn_8224ED20(auStack_20,param_1 + 1,iter(param_1[2]->next),iter(param_1[2]));
  fn_8265CA20(param_1[2]);
  return;
}

