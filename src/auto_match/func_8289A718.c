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
extern void fn_828BDDA0(void *);
extern void fn_82899030(void *, int, int);
extern void fn_828B5580(void *, void *);
extern char lbl_82023ABC[];
extern char lbl_82023AC0[];
extern char lbl_82023C3C[];

typedef struct Mid { int a; char str[8]; } Mid;
typedef struct It { int f0; Mid mid; int f10; } It;
typedef struct S98 { void *vt; Mid mid; int f8; unsigned char flag; } S98;
typedef struct Q { char pad[0x14]; It *it; int f18; } Q;
typedef struct P {
  void *vt;
  char pad[0x50 - 4];
  void *f50;
  char pad2[0x80 - 0x54];
  int f80, f84;
  char f88[0x10];
  S98 s;
  int f_b0;
} P;

P *fn_8289A718(P *p, Q *q, int p3, int p4, unsigned char p5, int p6)
{
  S98 *s;
  It *it;
  Mid *m;
  Mid *im;
  fn_828BDDA0(p);
  p->vt = lbl_82023AC0;
  p->f50 = lbl_82023ABC;
  p->f80 = q->f18;
  p->f84 = (int)q;
  fn_82899030(p->f88, p3, p4);
  it = q->it;
  s = &p->s;
  s->vt = lbl_82023C3C;
  m = &s->mid;
  im = &it->mid;
  m->a = im->a;
  fn_828B5580(m->str, im->str);
  s->f8 = it->f10;
  p->s.flag = p5;
  p->f_b0 = p6;
  return p;
}
