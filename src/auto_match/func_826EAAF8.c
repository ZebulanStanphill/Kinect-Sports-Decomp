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
extern int fn_8267BED0();
extern int fn_826EA6F8();


int fn_826EAAF8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int auStack_20 [2];

  auStack_20[0] = 2;
  uVar1 = fn_8267BED0(param_1,0x310,auStack_20);
  if (uVar1 != 0) {
    return fn_826EA6F8(uVar1,0,param_2,param_3);
  }
  return 0;
}
