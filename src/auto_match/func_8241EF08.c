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
typedef struct { int a; int b; double d; } Val_8241EF08;
typedef struct { int p; int *rc; } Ref_8241EF08;
extern void fn_8241EFC8(int *);
extern void fn_82273CD8(Val_8241EF08 *, int);
extern void fn_82273C88(Val_8241EF08 *);
extern int *fn_8229AE10(Ref_8241EF08 *, int);
extern void fn_82672C20(int, const char *, Val_8241EF08 *, int);
extern void fn_822315A0(int *);

void fn_8241EF08(int *param_1)
{
  int n;
  int h;
  Val_8241EF08 v;
  Ref_8241EF08 r;

  fn_8241EFC8(param_1);
  n = *(int *)(param_1[6] * 0x1ac + param_1[2] + 0xc);
  if (n >= 0) {
    h = *(int *)(*param_1 + 0xd4);
    v.a = 0;
    v.b = 0;
    fn_82273CD8(&v, 3);
    v.d = (double)n;
    fn_82672C20(*fn_8229AE10(&r, h), "_root.scorecardCtrl.setActiveTeam", &v, 1);
    if (r.rc != 0) {
      fn_822315A0(r.rc);
    }
    fn_82273C88(&v);
  }
}
