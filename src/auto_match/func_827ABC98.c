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
typedef struct Rc_827ABC98 { int a; int b; int refs; int c; int d; } Rc_827ABC98;
typedef struct Dst_827ABC98 { unsigned char kind; char pad[3]; unsigned char val; } Dst_827ABC98;
typedef struct Obj_827ABC98 { int pad0; Dst_827ABC98 *dst; unsigned int f8; char pad1[0x18 - 0xc]; int f18; int f1c; } Obj_827ABC98;
typedef struct Loc_827ABC98 { Rc_827ABC98 *rc; int pad[3]; char tmp[24]; } Loc_827ABC98;
extern unsigned char fn_82695468(Obj_827ABC98 *, int);
extern void fn_826954C0(Obj_827ABC98 *, const char *, int, int);
extern void fn_826959C8(Dst_827ABC98 *);
extern int fn_826957D0(Obj_827ABC98 *, int);
extern void fn_82695DA0(void *, int);
extern void fn_82696D38(Rc_827ABC98 **, void *, int, int, int);
extern unsigned char fn_827A7D90(unsigned int, int, int);
extern void fn_826944C8(Rc_827ABC98 *);
extern void fn_82696330(void *);

void fn_827ABC98(Obj_827ABC98 *o)
{
  unsigned int n;
  Dst_827ABC98 *d;
  Loc_827ABC98 loc;
  unsigned char v;
  int r;
  Rc_827ABC98 *rc;

  if (fn_82695468(o, 0x1f) == 0) {
    fn_826954C0(o, "StyleSheet", 0, 0);
    return;
  }
  n = o->f8 != 0 ? o->f8 - 0x10 : 0;
  if (n != 0) {
    if (o->f1c < 1) {
      d = o->dst;
      fn_826959C8(d);
      d->kind = 2;
      d->val = 0;
    }
    else {
      fn_82695DA0(loc.tmp, fn_826957D0(o, 0));
      fn_82696D38(&loc.rc, loc.tmp, o->f18, -1, 0);
      v = fn_827A7D90(n + 0x30, ((int *)loc.rc)[0], ((int *)loc.rc)[4]);
      d = o->dst;
      fn_826959C8(d);
      d->val = v;
      d->kind = 2;
      rc = loc.rc;
      r = rc->refs - 1;
      rc->refs = r;
      if (r == 0) {
        fn_826944C8(rc);
      }
      fn_82696330(loc.tmp);
    }
  }
}
