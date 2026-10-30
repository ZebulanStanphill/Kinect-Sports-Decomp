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
extern void fn_82243568(int, int, int, int);
extern void fn_8224F2B8(int, int, int);
extern int fn_8236D750(int);
extern void fn_82897600(int, int, int);
extern int fn_82897B18(int);
extern void fn_82898220(int, int, int, int);

void fn_822487B0(int param_1)
{
  int uVar1;
  int lVar2;
  int lVar3;
  int iVar4;
  int uVar5;
  int lVar6;
  int sub;
  int *p118 = (int *)(param_1 + 0x118);
  int *p268 = (int *)(param_1 + 0x268);

  uVar5 = *(int *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x9c, param_1, uVar5 + 0x9c);
  fn_8224F2B8(param_1 + 0x48, param_1, uVar5 + 0x34);
  lVar3 = uVar5 + 0x104;
  sub = param_1 + 0xf0;
  uVar1 = fn_82897B18(lVar3);
  fn_82897600(param_1, sub, uVar1);
  *p118 = *(int *)(param_1 + 0xc);
  fn_82898220(sub, param_1, lVar3, *(int *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar3);
  fn_82243568(sub + 4, 0, uVar1, 0);
  fn_8224F2B8(param_1 + 0x144, param_1, uVar5 + 0x164);
  fn_8224F2B8(param_1 + 0x198, param_1, uVar5 + 0x1bc);
  fn_8224F2B8(param_1 + 0x1ec, param_1, uVar5 + 0x214);
  lVar3 = uVar5 + 0x26c;
  sub = param_1 + 0x240;
  uVar1 = fn_82897B18(lVar3);
  fn_82897600(param_1, sub, uVar1);
  *p268 = *(int *)(param_1 + 0xc);
  fn_82898220(sub, param_1, lVar3, *(int *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar3);
  fn_82243568(sub + 4, 0, uVar1, 0);
  lVar3 = uVar5 + 0x8e4;
  iVar4 = param_1 + 0x780;
  lVar2 = uVar5 + 0x2cc;
  lVar6 = 0xf;
  do {
    fn_8224F2B8(iVar4 - 0x4ec, param_1, lVar2);
    fn_8224F2B8(iVar4, param_1, lVar3);
    lVar6 = lVar6 - 1;
    lVar2 = lVar2 + 0x68;
    lVar3 = lVar3 + 0x58;
    iVar4 = iVar4 + 0x54;
  } while (lVar6 != 0);
}
