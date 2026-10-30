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
extern void fn_824C9CB8(void *);
extern void fn_824CB6A0(void *, void *);
extern void fn_8265CA20(void *);

typedef struct Pair_824CAA50 { char key[0x20]; char val[0x88]; } Pair_824CAA50;
typedef struct Node_824CAA50 {
  struct Node_824CAA50 *left; struct Node_824CAA50 *parent; struct Node_824CAA50 *right;
  int pad; Pair_824CAA50 value; char color; char isnil;
} Node_824CAA50;
typedef struct Tree_824CAA50 { int pad; Node_824CAA50 *head; int size; } Tree_824CAA50;

void fn_824CAA50(Tree_824CAA50 *t)
{
  Node_824CAA50 *root = t->head->parent;
  Node_824CAA50 *p;
  for (p = root; !p->isnil; root = p) {
    fn_824CB6A0(t, p->right);
    p = p->left;
    {
      Pair_824CAA50 *v = &root->value;
      fn_824C9CB8(v->val);
      fn_82230300(v->key, 1, 0);
    }
    fn_8265CA20(root);
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
}
