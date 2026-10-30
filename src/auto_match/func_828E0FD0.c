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

extern void fn_828ACA08(void *, unsigned __int64);
extern unsigned fn_828D47D0(void *, int, int);
extern void fn_828E0EE0(void *, int, int, int);

void fn_828E0FD0(void *o, int a, int b, int c, unsigned *o5, unsigned char *o6, void *o7, unsigned char *o8,
                 unsigned char *o9, unsigned *o10, unsigned char *o11, unsigned char *o12)
{
  fn_828E0EE0(o, 0, a, 0x24);
  fn_828E0EE0(o, 1, b, 8);
  fn_828E0EE0(o, 2, c, 0x10);
  *o5 = fn_828D47D0(o, 5, 0);
  *o6 = fn_828D47D0(o, 6, 0) != 0;
  fn_828ACA08(o7, fn_828D47D0(o, 7, 0));
  *o8 = fn_828D47D0(o, 8, 0);
  *o9 = fn_828D47D0(o, 9, 0) != 0;
  *o10 = fn_828D47D0(o, 10, 0);
  *o11 = fn_828D47D0(o, 11, 0) != 0;
  *o12 = fn_828D47D0(o, 12, 0) != 0;
}
