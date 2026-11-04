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
#define ZEXT48(x) ((U64)((U32)(x)))
typedef struct { int *vt; int pad4; long count; } Rc_82F51E28;
typedef struct { int pad0; Rc_82F51E28 *rep; } It_82F51E28;
typedef struct { int px; int *rep; } SP_82F51E28;
typedef struct { int pad0; int p4; } In_82F51E28;
typedef struct { int pad0; In_82F51E28 *in; } Obj_82F51E28;
extern long _InterlockedDecrement(long *);
extern int *fn_82F57198(It_82F51E28 *, int);
extern void fn_82517978(SP_82F51E28 *, int, int, int);
extern int fn_828EA5F8(int);
extern void fn_822315A0(int *);

int fn_82F51E28(Obj_82F51E28 *o)
{
  It_82F51E28 it;
  SP_82F51E28 sp;
  int *r;
  int res;
  r = fn_82F57198(&it, o->in->p4);
  sp.px = 0;
  sp.rep = 0;
  fn_82517978(&sp, r[0], r[1], 0);
  res = fn_828EA5F8(sp.px);
  if (sp.rep != 0) {
    fn_822315A0(sp.rep);
  }
  if (it.rep != 0) {
    Rc_82F51E28 *c = it.rep;
    if (_InterlockedDecrement(&c->count) == 0) {
      ((void (*)(Rc_82F51E28 *))(c->vt[1]))(c);
    }
  }
  return res;
}
