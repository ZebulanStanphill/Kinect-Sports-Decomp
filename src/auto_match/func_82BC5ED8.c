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
extern int fn_82AB15D0();
extern int fn_82BC0088();


void fn_82BC5ED8(unsigned int param_1,unsigned int param_2)

{
  int *piVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","(from != 0) && (to != 0)","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\block.cpp",0x28);
  }
  piVar1 = (int *)fn_82BC0088(*(int *)(param_1 + 0x38),
                                    *(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  *piVar1 = param_2;
  piVar1 = (int *)fn_82BC0088(*(int *)(param_2 + 0x3c),
                                    *(undefined4 *)(*(int *)(param_2 + 0x3c) + 4));
  *piVar1 = param_1;
  return;
}

