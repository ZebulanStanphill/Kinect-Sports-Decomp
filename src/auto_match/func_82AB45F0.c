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
extern unsigned int *auStack_20;
extern int fn_823AAD80();
extern int fn_82AB15D0();
extern int fn_82AB95F8();


unsigned int  fn_82AB45F0(unsigned int param_1,undefined8 param_2)

{
  unsigned int uVar1;
  undefined1 auStack_20 [16];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,"Assertion failed: %s (%s:%u)","hSSMDevice","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp",0x187);
    uVar1 = 0;
  }
  else {
    uVar1 = fn_823AAD80();
    uVar1 = fn_82AB95F8(uVar1,param_2,auStack_20);
  }
  return uVar1;
}

