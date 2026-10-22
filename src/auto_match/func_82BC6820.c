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
extern unsigned int lbl_820E4F08[];


undefined4 fn_82BC6820(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 + -0x30;
  if (1 < iVar2) {
    if (iVar1 == 0x5f) {
      iVar2 = 2;
      goto LAB_82bc6888;
    }
    iVar2 = iVar1 + -0x74;
  }
  if ((iVar2 < 0) || (6 < iVar2)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i >= 0 && i <= 6","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\expansion.cpp",0x3f7);
  }
LAB_82bc6888:
  return lbl_820E4F08[iVar2];
}

