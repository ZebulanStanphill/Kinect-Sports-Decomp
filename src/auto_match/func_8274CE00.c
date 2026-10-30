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
extern void fn_82687270(void *);
extern void fn_826C1AD8(void *);
extern unsigned int lbl_82013530;
extern unsigned int lbl_82013584;

void fn_8274CE00(void **param_1)
{
  *param_1 = &lbl_82013584;
  param_1[4] = &lbl_82013530;
  { void **p = param_1 + 0xd; if (*p != 0) fn_82687270(*p); }
  { void **p = param_1 + 0xc; if (*p != 0) fn_82687270(*p); }
  fn_826C1AD8(param_1);
}
