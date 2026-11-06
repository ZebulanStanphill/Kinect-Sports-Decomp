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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82686228();
extern int fn_826D8EE0();
extern unsigned int lbl_831E7E64;
extern char lbl_83155AB8[];

int fn_826D90B0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;

  uVar1 = fn_8267B890(lbl_831E7E64,0x20,0);
  if (uVar1 != 0) {
    uVar2 = fn_826D8EE0(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = 0;
  }
  fn_82686228(param_1,lbl_83155AB8,uVar2);
  if (uVar2 != 0) {
    fn_8267C4F0(uVar2);
  }
  return param_1;
}
