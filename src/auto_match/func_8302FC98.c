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
extern int fn_82FAB9C0();
extern int fn_83011240();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;






extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_8302FC98(int param_1,void *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int uVar2;
  struct {unsigned first, second, f8, fc, f10; unsigned char f14, f15, f16; char pad[17];} args;
  uVar2 = 1;
  piVar1 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,param_2);
  if (piVar1 != (int *)0x0) {
    fn_83011240(lbl_832642E4,param_2,param_4);
    if ((*(byte *)(param_3 + 2) & 0xe0) == 0x20) {
      args.second = (undefined4)param_4;
      args.fc = *param_3;
      args.f14 = 0;
      args.f16 = 0;
      args.f10 = 4;
      args.first = 0;
      args.f8 = 0;
      args.f15 = 0;
      uVar2 = (*(code *)(*piVar1 + 0x1c))(piVar1,&args.first);
    }
    else {
      (*(code *)(*piVar1 + 0x28))(piVar1,param_4,*(undefined4 *)(param_1 + 0xc),0);
    }
    (*(code *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

