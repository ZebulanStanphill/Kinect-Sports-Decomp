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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824CD610();
extern int fn_82897B40();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_824D4BF0(int param_1)

{
  undefined4 uVar1;
  int *a;
  int *b;
  undefined1 auStack_70 [28];
  undefined1 auStack_50 [28];
  
  fn_824CD610(param_1);
  fn_82230110(auStack_70,"Player Id");
  a=(int *)(param_1+0x99c);
  *(undefined4 *)(a + 3) = 0;
  *(undefined4 *)(a + 24) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  *(undefined4 *)(a + 23) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(undefined4 *)(param_1 + 0xa00) = uVar1;
  fn_82897DF8(a,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897B40(a);
  fn_82230110(auStack_50,"Team Id");
  b=(int *)(param_1+0xa04);
  *(undefined4 *)(b + 24) = 0xffffffff;
  *(undefined4 *)(b + 3) = 0;
  *(undefined1 *)(param_1 + 0xa5c) = 1;
  *(undefined4 *)(b + 23) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(undefined4 *)(param_1 + 0xa68) = uVar1;
  fn_82897DF8(b,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82897B40(b);
  return;
}

