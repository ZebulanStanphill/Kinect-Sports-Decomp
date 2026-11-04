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
extern int fn_82B7BD28();
extern int fn_82BBFD90();
extern int fn_82BC24F0();
extern int fn_82BC5758();
extern int fn_82BC5ED8();
extern char lbl_820E4D54[];
extern char lbl_820E4D90[];
extern char lbl_820E4E4C[];
unsigned *fn_82BC6450(unsigned *param_1, unsigned param_2, unsigned param_3, int param_4)
{
  unsigned uVar1;
  unsigned *puVar2;
  int iVar3;
  unsigned *puVar4;
  unsigned *v;
  fn_82BC5758(param_1, param_4);
  param_1[0x25] = param_3;
  param_1[0x22] = param_2;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *param_1 = (unsigned)lbl_820E4E4C;
  *(unsigned char *)((int)param_1 + 0x8d) = 0;
  uVar1 = *(unsigned *)(param_4 + 0x5ac);
  puVar2 = (unsigned *)fn_82B7BD28(uVar1, 0x90);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 != 0) {
    fn_82BC5758(puVar4, param_4);
    puVar4[0x22] = (unsigned)param_1;
    *puVar4 = (unsigned)lbl_820E4D54;
    v = puVar4;
  } else {
    v = 0;
  }
  param_1[0x26] = (unsigned)v;
  uVar1 = *(unsigned *)(param_4 + 0x5ac);
  puVar2 = (unsigned *)fn_82B7BD28(uVar1, 0x90);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 != 0) {
    fn_82BC5758(puVar4, param_4);
    puVar4[0x22] = (unsigned)param_1;
    *puVar4 = (unsigned)lbl_820E4D90;
    v = puVar4;
  } else {
    v = 0;
  }
  param_1[0x27] = (unsigned)v;
  fn_82BC5ED8(param_1[0x26], param_1);
  iVar3 = fn_82BC24F0(0x7d, param_4);
  uVar1 = param_1[0x22];
  param_1[0x24] = iVar3;
  *(unsigned *)(iVar3 + 0x50) = 0x27;
  *(unsigned *)(iVar3 + 0x38) = uVar1;
  iVar3 = param_1[0x24];
  fn_82BBFD90(iVar3, param_1[0x1d]);
  *(unsigned **)(iVar3 + 0x3b4) = param_1;
  return param_1;
}
