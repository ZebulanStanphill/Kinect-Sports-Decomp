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
struct O_8257CED8;
typedef struct VT_8257CED8 { void *pad[3]; void (*f3)(struct O_8257CED8 *, void *); } VT_8257CED8;
typedef struct O_8257CED8 { VT_8257CED8 *vt; int pad4; int state; } O_8257CED8;
typedef struct L1_8257CED8 { char pad[4]; struct L1_8257CED8 *next; } L1_8257CED8;
typedef struct L2_8257CED8 { struct L2_8257CED8 *next; int pad; O_8257CED8 *obj; } L2_8257CED8;
typedef struct { int a, b; } Pr_8257CED8;
typedef struct { char pad[0x1c]; int list1; char pad2[8]; L2_8257CED8 *list2; } S_8257CED8;

void fn_8257CED8(S_8257CED8 *s)
{
  L1_8257CED8 *n1;
  int iv;
  L2_8257CED8 *n2;
  O_8257CED8 *o;
  Pr_8257CED8 pr;
  iv = s->list1;
  if (iv != 0) {
    n1 = (L1_8257CED8 *)iv;
    pr.a = 0x45;
    pr.b = 8;
    do {
      O_8257CED8 *it = (O_8257CED8 *)((char *)n1 - 0x40);
      it->vt->f3(it, &pr);
      n1 = n1->next;
    } while (n1 != 0);
  }
  for (n2 = s->list2->next; n2 != s->list2; n2 = n2->next) {
    o = n2->obj;
    if (o->state == 1) {
      o->state = 2;
      ((void (*)(O_8257CED8 *))o->vt->f3)(o);
    }
  }
}
