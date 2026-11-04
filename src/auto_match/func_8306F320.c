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
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
extern unsigned char fn_8306F250(__vector4, float);
extern double lbl_82021544;
extern unsigned char lbl_831BCB98;


undefined4 fn_8306F320(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned char cVar2;
  
  iVar1 = (param_3 + 0x58) * 4;
  if (((*(int *)(iVar1 + param_2) == 2) && (*(int *)(&lbl_831BCB98 + param_3 * 0xc) != 0)) &&
     (cVar2 = fn_8306F250(*(__vector4 *)(param_2+(param_3+2)*16),0.01f), cVar2 != '\0')) {
    return 1;
  }
  return *(undefined4 *)(iVar1 + param_2);
}

