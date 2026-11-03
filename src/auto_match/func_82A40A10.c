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


typedef struct Obj_82A40A10 { void **vt; } Obj_82A40A10;
typedef struct Node_82A40A10 { Obj_82A40A10 *obj; struct Node_82A40A10 *next; } Node_82A40A10;

void fn_82A40A10(int param_1, int param_2)
{
  Obj_82A40A10 *sub = (Obj_82A40A10 *)(param_1 + 0x70);
  Node_82A40A10 *n;
  Node_82A40A10 *t;
  Obj_82A40A10 *o;

  ((void (*)(Obj_82A40A10 *))sub->vt[2])(sub);
  n = *(Node_82A40A10 **)(param_1 + 0x22c);
  for (;;) {
    t = n;
    if (t != 0) { n = t->next; o = t->obj; } else { o = 0; }
    if (o == 0) break;
    ((void (*)(Obj_82A40A10 *, int))o->vt[2])(o, param_2);
  }
  ((void (*)(Obj_82A40A10 *))sub->vt[5])(sub);
}
