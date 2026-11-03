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
extern void fn_82522ED8(void *);
extern void fn_82622BD8(void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197010;
extern unsigned int lbl_821CAD7C;

typedef struct Obj_82622B68 { void *vt; int pad4[5]; void *f18; void *f1c; int pad20; void *items[3]; } Obj_82622B68;

void fn_82622B68(Obj_82622B68 *o)
{
  void **p;
  void *x;
  int n;

  o->vt = &lbl_821CAD7C;
  fn_82522ED8(o->f18);
  fn_8265CA20(o->f1c);
  p = o->items;
  n = 3;
  do {
    x = *p;
    if (x != 0) {
      fn_82622BD8(x);
      *p = 0;
    }
    n--;
    p++;
  } while (n != 0);
  o->vt = &lbl_82197010;
}
