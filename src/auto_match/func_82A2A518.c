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
extern int fn_82A2B760();


int fn_82A2A518(undefined4 param_1,uint param_2,uint param_3)

{
  int uVar1;
  
  if (((param_3 & 0x8000) == 0) || (param_2 == 0)) {
    uVar1 = NtFreeVirtualMemory(&param_1,&param_2,param_3,0);
    if (uVar1 >= 0) {
      return 1;
    }
  }
  else {
    uVar1 = 0xc000000d;
  }
  fn_82A2B760(uVar1);
  return 0;
}

