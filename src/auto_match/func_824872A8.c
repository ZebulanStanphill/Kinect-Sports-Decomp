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
extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_822B1B28(void *);
extern void fn_82359C18(void *);
extern void fn_823B9360(void *, void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_821BE8A4[];
typedef struct DV_824872A8 { struct { void (*dtor)(struct DV_824872A8 *, int); } *vt; } DV_824872A8;
typedef struct TNode_824872A8 { struct TNode_824872A8 *left; struct TNode_824872A8 *parent; struct TNode_824872A8 *right; int pad[2]; void *ptr; unsigned char color; unsigned char isnil; } TNode_824872A8;
typedef struct { int pad; TNode_824872A8 *head; unsigned size; } Tree_824872A8;
typedef struct {
  void *vt;
  Tree_824872A8 tree;
  char pad10[0x1c - 0x10];
  char str[0x20];
  void *owner;
  DV_824872A8 *del;
} Obj_824872A8;

void fn_824872A8(Obj_824872A8 *p)
{
  TNode_824872A8 *n, *nx;
  Tree_824872A8 *t;
  void *o;
  p->vt = lbl_821BE8A4;
  if (p->del != 0) {
    p->del->vt->dtor(p->del, 1);
  }
  o = p->owner;
  if (o != 0) {
    fn_82359C18((char *)o + 0x10);
    fn_822B1B28(o);
    fn_8265CA20(o);
  }
  fn_82230300(p->str, 1, 0);
  t = &p->tree;
  n = t->head->parent;
  nx = n;
  while (nx->isnil == 0) {
    fn_823B9360(t, nx->right);
    nx = nx->left;
    if (n->ptr != 0) fn_822315A0(n->ptr);
    fn_8265CA20(n);
    n = nx;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
}
