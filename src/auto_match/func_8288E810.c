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
extern undefined4 *fn_828BDDA0(undefined4 *);
extern int fn_828E9D28();
extern unsigned int lbl_820236C8;
extern unsigned int lbl_820236D0;

undefined4 * fn_8288E810(undefined4 *param_1,undefined4 param_2)
{
  int *sub;
  fn_828BDDA0(param_1);
  param_1[0x123] = param_2;
  param_1[0x120] = 0;
  *param_1 = &lbl_820236D0;
  param_1[0x14] = &lbl_820236C8;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  sub = param_1 + 0x125;
  sub[6] = 0;
  sub[7] = 0;
  sub[8] = 0;
  param_1[0x129] = param_1 + 0x20;
  param_1[0x12a] = 0x400;
  fn_828E9D28(param_1 + 0x125,param_1 + 0x20,0x400);
  return param_1;
}
