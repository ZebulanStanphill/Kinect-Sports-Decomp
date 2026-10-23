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
typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; } Node;
typedef struct Tree { int alloc; Node *head; int size; } Tree;
typedef struct Obj { void *vt; int f4; Tree tree; int f14; int sub[8]; int f38; } Obj;
extern int fn_8288C2E0(int *p, void *a);
extern int fn_828B22F0(int *p);
extern int fn_828C91C0(Tree *t, void *a, void *b);
extern int fn_828CA3C8(Tree *t, Node *n);
extern unsigned int lbl_82026438;

static void Tree_clear(Tree *t)
{
  fn_828CA3C8(t, t->head->parent);
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
}

Obj * fn_828CAB48(Obj *param_1)
{
  char auStack_30 [1];

  param_1->vt = &lbl_82026438;
  fn_828C91C0(&param_1->tree,auStack_30,auStack_30);
  fn_8288C2E0(param_1->sub,auStack_30);
  param_1->f38 = 0;
  Tree_clear(&param_1->tree);
  fn_828B22F0(param_1->sub);
  return param_1;
}
