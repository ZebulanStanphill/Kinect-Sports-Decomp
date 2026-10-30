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
typedef struct Fn_828E7BA8 { unsigned int m; int pad; char buf[0x18]; } Fn_828E7BA8;
typedef void (*Mgr_828E7BA8)(void *, void *, int);
extern void fn_828E6358(Fn_828E7BA8 *);
extern void fn_828E6658(Fn_828E7BA8 *, Fn_828E7BA8 *);
extern void fn_828E68F8(Fn_828E7BA8 *);

Fn_828E7BA8 *fn_828E7BA8(Fn_828E7BA8 *param_1)
{
  Fn_828E7BA8 a;
  Fn_828E7BA8 b;
  a.m = 0;
  fn_828E68F8(&a);
  if (param_1 != &a) {
    b.m = 0;
    fn_828E6658(&b, &a);
    fn_828E6658(&a, param_1);
    fn_828E6658(param_1, &b);
    fn_828E6358(&b);
  }
  if (a.m != 0 && (a.m & 1) == 0) {
    Mgr_828E7BA8 f = *(Mgr_828E7BA8 *)(a.m & 0xfffffffe);
    if (f != 0) {
      f(a.buf, a.buf, 2);
    }
  }
  return param_1;
}
