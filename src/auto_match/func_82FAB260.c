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
typedef struct Inner { void (**vt)(struct Inner *, int); int pad[10]; int cnt; int pad30; unsigned char flags; } Inner;
typedef struct { int pad[2]; Inner *in; } Outer;
extern void fn_82FA9208(Inner *);
extern void fn_82FAA228(Outer *);
extern void fn_82FAAE50(void);
extern void fn_82FAB1D8(Outer *);

void fn_82FAB260(Outer *o)
{
  Inner *p = o->in;
  p->cnt = p->cnt + 1;
  if ((o->in->flags & 0x80) != 0) {
    if ((o->in->flags & 0x40) == 0) {
      fn_82FAAE50();
      fn_82FAA228(o);
      o->in->vt[4](o->in, 0x400);
    }
  } else {
    fn_82FAB1D8(o);
  }
  fn_82FA9208(o->in);
}
