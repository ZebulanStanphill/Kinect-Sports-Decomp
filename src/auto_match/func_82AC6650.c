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
extern int fn_82AA65B0();
extern unsigned char fn_82ABDAA0(unsigned);
extern int fn_82AC65F0();
typedef struct { unsigned :14; unsigned flag:1; unsigned :17; } Flags_82AC6650;
typedef struct { unsigned :23; unsigned low:9; } LowFlags_82AC6650;


unsigned char fn_82AC6650(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  unsigned iVar3;
  unsigned char cVar4;
  int uVar5;
  unsigned char uVar6;
  uint uVar7;
  
  iVar3 = 0;
  if ((unsigned char)((Flags_82AC6650 *)(param_2 + 8))->flag != 0) {
    iVar3 = fn_82AC65F0(param_2);
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  uVar1 = *(uint *)(param_3 + 8);
  uVar6 = 1;
  if (((uVar1 & 3) != 0) ||
     (((uVar5 = uVar1 >> 2 & 0xf, uVar5 != 1 && (uVar5 != 8)) && (uVar5 != 9)))) goto LAB_82ac6730;
  uVar7 = (~uVar1 >> 7) & 1;
  if ((uVar7 == 0) && ((unsigned char)(uVar1 >> 8 & 1) == 0)) goto LAB_82ac6730;
if (iVar3 != 0 && (fn_82ABDAA0(iVar3) == 0 || ((bVar2 = (unsigned char)((*(uint *)(iVar3+8) >> 7 & 0x7f) >= 0x15 && (*(uint *)(iVar3+8) >> 7 & 0x7f) <= 0x18)) != 0))) { uVar6 = 0; } else { if ((unsigned char)uVar7 != 0) fn_82AA65B0(param_1, 0xe17);
  ((LowFlags_82AC6650 *)(param_3 + 8))->low = 3 << 6; }
LAB_82ac6730:
  *param_4 = iVar3;
  return uVar6;
}

