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


typedef struct Node_8288B8B0 { struct Node_8288B8B0 *left, *parent, *right; int key; char pad[9]; unsigned char isnil; } Node_8288B8B0;
typedef struct { int pad; Node_8288B8B0 *head; } Tree_8288B8B0;
extern unsigned char fn_828B5650(void *, int);

Node_8288B8B0 *fn_8288B8B0(Tree_8288B8B0 *t, int k)
{
  Node_8288B8B0 *where = t->head;
  Node_8288B8B0 *n = where->parent;
  while (!n->isnil) {
    if (fn_828B5650(&n->key, k)) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  return where;
}
