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
struct Obj_82FB7CC8;
typedef struct VT_82FB7CC8 {
  void *s0;
  void (*f4)(struct Obj_82FB7CC8 *);
} VT_82FB7CC8;
typedef struct Obj_82FB7CC8 {
  VT_82FB7CC8 *vt;
} Obj_82FB7CC8;

typedef struct Node_82FB7CC8 {
  int pad0;
  struct Node_82FB7CC8 *next;
  char pad8[0x14];
  int kind;
} Node_82FB7CC8;

typedef struct Frame_82FB7CC8 {
  Node_82FB7CC8 *node;
  short cnt;
  short pad;
  Obj_82FB7CC8 *obj;
} Frame_82FB7CC8;

typedef struct Sub_82FB7CC8 {
  int pad;
  Frame_82FB7CC8 *top;
} Sub_82FB7CC8;
typedef struct Stack_82FB7CC8 {
  int pad0;
  Sub_82FB7CC8 sub;
} Stack_82FB7CC8;

Node_82FB7CC8 *fn_82FB7CC8(Stack_82FB7CC8 *s, Node_82FB7CC8 *n)
{
  Frame_82FB7CC8 *top;
  for (;;) {
    unsigned char leaf;
    if (n == 0) return n;
    if (n->kind == 0 || n->kind == 2)
      leaf = 1;
    else
      leaf = 0;
    if (leaf) return n;
    top = s->sub.top;
    if (top[-1].cnt == 0) return n;
    if (top[-1].cnt > 1) break;
    {
      Frame_82FB7CC8 *f = top - 1;
      int k;
      Sub_82FB7CC8 *q;
      n = n->next;
      k = f->node->kind;
      if ((k == 0 || k == 2) && f->obj != 0) f->obj->vt->f4(f->obj);
      q = &s->sub;
      q->top = q->top - 1;
    }
  }
  {
    short *c = &top[-1].cnt;
    *c = *c - 1;
  }
  return n;
}
