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
typedef struct Vt_82476E30 { void *s0; void *s1; void (*f8)(void *, int, int); } Vt_82476E30;
typedef struct Item_82476E30 { char pad[0x1b0]; struct Eff_82476E30 *f1b0; } Item_82476E30;
typedef struct Eff_82476E30 { Vt_82476E30 *vt; } Eff_82476E30;
typedef struct A_82476E30 { char pad[0x3e4]; struct B_82476E30 *f3e4; char pad2[0x93c - 0x3e8]; int f93c; } A_82476E30;
typedef struct B_82476E30 { char pad[0x8c0]; char *f8c0; } B_82476E30;
typedef struct Obj_82476E30 { char pad[0x15c]; A_82476E30 *f15c; } Obj_82476E30;
extern int fn_82F63F40(char *, const char *, int);
extern Item_82476E30 *fn_82573530(void *, char *);
extern Item_82476E30 *fn_825764F0(void *, char *, Item_82476E30 *);

void fn_82476E30(Obj_82476E30 *o, int a, int b)
{
  char buf[20];
  B_82476E30 *bb = o->f15c->f3e4;
  char *coll;
  Item_82476E30 *it;
  int i;
  if (bb != 0 && (coll = bb->f8c0, o->f15c->f93c != 0) && coll != 0) {
    coll = coll + 0x128;
    for (i = 1; i <= 3; i++) {
      fn_82F63F40(buf, "effectLocator%d", i);
      for (it = fn_82573530(coll, buf); it != 0; it = fn_825764F0(coll, buf, it)) {
        it->f1b0->vt->f8(it->f1b0, 0, a);
      }
    }
    for (i = 100; i <= 102; i++) {
      fn_82F63F40(buf, "effectLocator%d", i);
      for (it = fn_82573530(coll, buf); it != 0; it = fn_825764F0(coll, buf, it)) {
        it->f1b0->vt->f8(it->f1b0, 0, b);
      }
    }
  }
}
