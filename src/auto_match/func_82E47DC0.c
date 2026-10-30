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
extern int fn_82E474A0();
extern int fn_82E4FE40();
extern int fn_82E50BE8();


int fn_82E47DC0(uint param_1,uint param_2,int param_3)

{
  int lVar1;
  int lVar2;
  
  if ((param_1 + param_2 & 0xffffffff) < param_1) {
    lVar2 = -0x7fffbffb;
  }
  else {
    lVar1 = fn_82E50BE8(param_1 + param_2,0,0,0,0);
    if (lVar1 == 0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      lVar2 = fn_82E474A0(param_1,lVar1,lVar1 + param_2 & ~param_2,param_3);
      if (lVar2 < 0) {
        fn_82E4FE40(lVar1);
      }
    }
  }
  return lVar2;
}

