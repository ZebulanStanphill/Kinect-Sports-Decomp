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
extern void *fn_8265C9E0(unsigned);
extern void fn_828E6590(void *, void *);
extern void *fn_828E8BE8(void *, void *);
extern void fn_828E9528(void *);
extern void fn_82BA02A8(void *, void *, void *);

void *fn_828E95E8(void **param_1, void *param_2, void *param_3)
{
  void *mem;
  void *o;
  fn_828E9528(param_2);
  mem = fn_8265C9E0(0x70);
  o = mem ? fn_828E8BE8(mem, param_3) : 0;
  *param_1 = o;
  fn_828E6590(param_1 + 1, o);
  fn_82BA02A8(param_1, o, o);
  return param_1;
}
