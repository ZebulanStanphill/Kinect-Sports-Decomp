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
//BODY
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern void fn_822315A0(void *);
extern void fn_82252678(void *, int, void *);
extern void fn_822D79D8(void *, int);
extern int fn_822D7FE0(void *);
extern void *fn_8265C9E0(int);
extern void fn_828E2B28(void *, void *);
extern void fn_828E9D40(int);
extern void fn_828E9D90(int);

typedef struct I_823F2698 { void (**vt)(struct I_823F2698 *, int, void *); } I_823F2698;
typedef struct Obj_823F2698 {
  char pad[0x38];
  char f38[0x10];
  unsigned int f48;
  char pad2[0x68 - 0x4c];
  I_823F2698 *i68; int q68;
  I_823F2698 *i70; int q70;
  I_823F2698 *i78; int q78;
  I_823F2698 *i80; int q80;
  I_823F2698 *i88; int q88;
  I_823F2698 *i90; int q90;
  I_823F2698 *i98;
} Obj_823F2698;

void fn_823F2698(Obj_823F2698 *o, __vector4 v, int a, int b, int c, int d, int e, int f)
{
  void *mem;
  int h;
  struct { int first; unsigned int second; } pr;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    h = fn_822D7FE0(mem);
  } else {
    h = 0;
  }
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, h);
  o->i68->vt[4](o->i68, pr.first, &v);
  o->i70->vt[4](o->i70, pr.first, (void *)a);
  o->i78->vt[4](o->i78, pr.first, &b);
  o->i80->vt[4](o->i80, pr.first, (void *)c);
  o->i88->vt[4](o->i88, pr.first, (void *)d);
  o->i90->vt[4](o->i90, pr.first, (void *)e);
  o->i98->vt[4](o->i98, pr.first, &f);
  if (o->f48 != 0) {
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    fn_82252678(o, pr.first, o->f38);
  }
  fn_828E2B28(o, &pr);
  if (pr.second != 0) {
    fn_822315A0((void *)pr.second);
  }
}
