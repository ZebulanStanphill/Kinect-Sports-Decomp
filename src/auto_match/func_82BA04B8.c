typedef struct { unsigned pad:22; unsigned partial:1; unsigned low:9; } WriteFlags;
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


void fn_82BA04B8(int param_1)

{
  if ((unsigned char)((WriteFlags *)(param_1 + 0xe4))->partial == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","HasPartialWriteInput()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp",0x775);
  }
  *(undefined4 *)((*(int *)(param_1 + 0x14) + 0x3a) * 4 + param_1) = 0;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfffffdff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}

