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
typedef unsigned __int64 undefined8;
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
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82EE9568();
extern int fn_82EE9F80();


int fn_82EE9680(int param_1,undefined4 *param_2)

{
  int uVar1;
  int uVar2;
  undefined4 uVar3;
  uint auStack_20 [2];
  
  auStack_20[0] = 0;
  uVar2 = fn_82A28568(fn_82A2A360(),0,0x10b0);
  if ((unsigned int)uVar2 == 0) {
    uVar2 = 0x8007000e;
  }
  else {
    uVar3 = fn_82EE9568(uVar2,param_1,auStack_20);
    if ((int)auStack_20[0] < 0) {
      fn_82EE9F80();
      uVar2 = (int)auStack_20[0];
    }
    else {
      *param_2 = uVar3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

