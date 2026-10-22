extern char lbl_82141900[];
extern char lbl_8323E170[];
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
extern int fn_82CFF8D0();
extern int fn_82D9A4A8();


void fn_82DA2A28(int param_1,int *param_2)

{
  int uVar1;
  
  fn_82D9A4A8(param_1,param_2,lbl_8323E170);
  if ((*(int *)(param_1 + 0x168) & (int)0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x160),*(uint *)(param_1 + 0x168) << 2);
    (*(code *)(*param_2 + 0x14))
              (param_2,3,"OverlapPtr",*(undefined4 *)(param_1 + 0x160),
               *(int *)(param_1 + 0x164) << 2,uVar1);
  }
  return;
}

