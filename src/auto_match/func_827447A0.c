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
typedef struct V2_827447A0 { double x, y; } V2_827447A0;
typedef struct Ctx_827447A0 { char pad[0x78]; char sub[8]; int pad2[0x288 / 4 - 0x1f]; } Ctx_827447A0;
typedef struct Self_827447A0 { int pad0; void *f4; int pad1[4]; Ctx_827447A0 *ctx; int count; } Self_827447A0;
extern void *fn_8267B890(void *, int, int);
extern void *fn_82744378(void *, void *);
extern void *fn_826957D0(void *, int);
extern void *fn_82696958(void *, void *);
extern void fn_82695DA0(void *, void *);
extern void fn_82743C08(void *, void *, V2_827447A0 *);
extern double fn_826972E0(void *, void *);
extern void fn_82743888(void *, void *, V2_827447A0 *);
extern void fn_82696330(void *);
extern void fn_82743808(void *, void *, void *);
extern void fn_82696BC8(void *, void *);
extern void fn_826824B0(void *);
extern char lbl_831F12E8[];

void fn_827447A0(Self_827447A0 *self)
{
  void *obj;
  void *p0, *p1;
  bool done;
  V2_827447A0 a, b;
  char tmp[0x10];
  double t;
  void *o;

  o = fn_8267B890(*(void **)(*(int *)((char *)self->ctx + 0x78) + 0x288), 0x30, 0);
  if (o != 0) obj = fn_82744378(o, self->ctx);
  else obj = 0;
  done = 0;
  if (self->count > 2) {
    p0 = fn_82696958(fn_826957D0(self, 0), self->ctx);
    p1 = fn_82696958(fn_826957D0(self, 1), self->ctx);
    fn_82695DA0(tmp, fn_826957D0(self, 2));
    if (p0 != 0 && p1 != 0) {
      fn_82743C08(self->ctx, p0, &b);
      fn_82743C08(self->ctx, p1, &a);
      t = fn_826972E0(tmp, self->ctx);
      a.x = (b.x - a.x) * t + a.x;
      a.y = (b.y - a.y) * t + a.y;
      fn_82743888(obj, self->ctx, &a);
      done = 1;
    }
    fn_82696330(tmp);
  }
  if (!done) {
    fn_82743808(obj, (char *)self->ctx + 0x78, lbl_831F12E8);
  }
  fn_82696BC8(self->f4, obj);
  if (obj != 0) fn_826824B0(obj);
}
