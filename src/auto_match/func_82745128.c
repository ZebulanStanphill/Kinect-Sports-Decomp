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
extern int fn_826A79D8();


extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];
void fn_82745128(longlong param_1,undefined8 param_2,longlong param_3)

{
  param_1 = param_1 + 0x10;
  fn_826A79D8(param_1,param_2,"x",param_3);
  fn_826A79D8(param_1,param_2,"y",param_3 + 0x10);
  fn_826A79D8(param_1,param_2,lbl_8200EAF0,param_3 + 0x20);
  fn_826A79D8(param_1,param_2,lbl_8200EAE8,param_3 + 0x30);
  return;
}

