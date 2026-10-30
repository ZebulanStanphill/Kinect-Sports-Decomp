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
typedef struct Src_824F5A20 { int f0; } Src_824F5A20;
typedef struct Obj_824F5A20 {
  void *vt; Src_824F5A20 *src; int f8; int fc; int f10; int f14;
  unsigned char f18; unsigned char f19; float f1c; float f20;
} Obj_824F5A20;
extern char lbl_821C1E80[];
extern float lbl_821CC160;
extern void fn_82520158(const char *, int *, int);
extern void *fn_8251F720(int *, int);
extern void fn_8251FA58(void *);
extern int fn_82631830();
extern int fn_82631488();
extern void *fn_82631BF8(const char *);
extern void fn_826438C0(int, int, void *, int *, int);
extern void fn_8262FEC8(void *);
extern char lbl_831C31B8[];

Obj_824F5A20 *fn_824F5A20(Obj_824F5A20 *o, Src_824F5A20 *src)
{
  struct { int a; int b; } l;
  float t;
  void *h;
  void *g;

  o->src = src;
  o->vt = lbl_821C1E80;
  if (src != 0) {
    o->f8 = src->f0;
  } else {
    o->f8 = 0;
  }
  o->f18 = 0;
  o->f19 = 0;
  t = lbl_821CC160;
  o->f1c = t;
  o->f20 = t;
  fn_82520158("fxCrossFadeVertexShader", &l.a, 0);
  fn_82520158("fxCrossFadePixelShader", &l.b, 0);
  h = fn_8251F720(&l.a, 0);
  o->fc = fn_82631830();
  fn_8251FA58(h);
  h = fn_8251F720(&l.b, 0);
  o->f10 = fn_82631488();
  fn_8251FA58(h);
  g = fn_82631BF8(lbl_831C31B8);
  l.b = 8;
  fn_826438C0(o->fc, 0, g, &l.b, 0);
  fn_8262FEC8(g);
  o->f14 = 0;
  return o;
}
