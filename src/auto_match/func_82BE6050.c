
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
extern int fn_82BE5240();
extern unsigned int (*lbl_831751D0)(unsigned int);


undefined8 fn_82BE6050(int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = (int)param_2;
  if (iVar2 <= 0) {
    uVar3 = "Can't allocate buffer of 0 or negative size.";
  }
  else if (((unsigned int)param_1[7] == 0) || (param_1[10] <= 0)) {
    if ((param_1[6] == 1) && (iVar1 = (*(code *)(*param_1 + 0xc))(param_1), iVar2 > (int)iVar1)) {
      uVar3 = "Requested buffer size will exceed request maximum.";
    }
    else {
      iVar1 = lbl_831751D0(param_2);
      param_1[7] = iVar1;
      param_1[8] = 0;
      param_1[9] = 0;
      if (iVar1 != 0) {
        param_1[10] = iVar2;
        return 1;
      }
      param_1[7] = 0;
      param_1[10] = 0;
      uVar3 = "Could not allocate raw request buffer";
    }
  }
  else {
    uVar3 = "Buffer already exists.  Can't allocate new, use ReAllocateDataBuffer.";
  }
  fn_82BE5240(param_1,0x65,uVar3);
  return 0;
}

