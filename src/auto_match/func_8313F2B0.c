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
typedef struct Node_8313F2B0 Node_8313F2B0;
struct Node_8313F2B0 { Node_8313F2B0 *left; Node_8313F2B0 *parent; Node_8313F2B0 *right; int val; int pad; unsigned char color; unsigned char isnil; };
typedef struct { int al; Node_8313F2B0 *head; int size; } Tree_8313F2B0;
extern struct { char pad[0x10]; Tree_8313F2B0 t; } lbl_83297924;
extern void fn_8243DD58(Tree_8313F2B0 *, Node_8313F2B0 *);
extern void fn_8265CA20(void *);
extern void fn_82518828(void);

void fn_8313F2B0(void)
{
  Node_8313F2B0 *p;
  Node_8313F2B0 *q;
  p = lbl_83297924.t.head->parent;
  while (!p->isnil) {
    fn_8243DD58(&lbl_83297924.t, p->right);
    q = p->left;
    fn_8265CA20(p);
    p = q;
  }
  lbl_83297924.t.head->parent = lbl_83297924.t.head;
  lbl_83297924.t.head->left = lbl_83297924.t.head;
  lbl_83297924.t.head->right = lbl_83297924.t.head;
  lbl_83297924.t.size = 0;
  fn_8265CA20(lbl_83297924.t.head);
  fn_82518828();
}
