typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct Node_823DFE58 Node_823DFE58;
struct Node_823DFE58 { Node_823DFE58 *left; Node_823DFE58 *parent; Node_823DFE58 *right; char pad[0x99]; char isnil; };
typedef struct { int pad; Node_823DFE58 *head; int size; } Tree_823DFE58;
extern int fn_823E14E8();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_821B6A48;
static __forceinline void Clear_823DFE58(Tree_823DFE58 *t)
{
  Node_823DFE58 *n = t->head->parent;
  Node_823DFE58 *next;
  while (!n->isnil) {
    fn_823E14E8(t, n->right);
    next = n->left;
    fn_8265CA20(n);
    n = next;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
}
void fn_823DFE58(unsigned int *param_1)
{
  Tree_823DFE58 *t = (Tree_823DFE58 *)(param_1 + 1);
  *param_1 = (unsigned int)&lbl_821B6A48;
  Clear_823DFE58(t);
  fn_8265CAA0(param_1[5]);
  fn_8265CAA0(param_1[6]);
  Clear_823DFE58(t);
  fn_8265CA20(t->head);
}

