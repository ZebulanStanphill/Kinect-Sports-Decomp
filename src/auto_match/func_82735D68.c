typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8268ACE8();
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A79D8();
extern int fn_82726AB8();
extern int fn_8278C028();
extern unsigned int iStack_120;
extern unsigned int stack0x00000000;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82735D68(__int64 param_1,unsigned int *param_2,int param_3)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  int iStack_120;
  
  uVar2 = ZEXT48(&stack0x00000000);
  fn_82726AB8(param_1 + 0x30,param_3);
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 4 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x120,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0xb0;
  }
  param_1 = param_1 + 0x10;
  fn_826A79D8(param_1,param_2,0xffffffff8201178c,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x120);
  }
  else {
    fn_82696330(uVar2 - 0xb0);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 5 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x120,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0x60;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011774,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x120);
  }
  else {
    fn_82696330(uVar2 - 0x60);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 6 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x120,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0xd0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff8201173c,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x120);
  }
  else {
    fn_82696330(uVar2 - 0xd0);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 3 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x120,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0x90;
    iStack_120 = 0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011754,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x120);
  }
  else {
    fn_82696330(uVar2 - 0x90);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 2 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
  }
  else {
    uVar3 = fn_8278C028(param_3);
    fn_8269A190(uVar2 - 0x120,(unsigned __int64)*param_2 + 0x254,uVar3);
    lVar5 = uVar2 - 0xf0;
    *(int *)(iStack_120 + 8) = *(int *)(iStack_120 + 8) + 1;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82001394,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x100);
  }
  else {
    fn_82696330(uVar2 - 0xf0);
    lVar5 = (unsigned __int64)*(unsigned int *)(iStack_120 + 8) - 1;
    *(int *)(iStack_120 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_120);
    }
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0x70;
    iStack_120 = 0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff821cdae4,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x100);
  }
  else {
    fn_82696330(uVar2 - 0x70);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 1 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
  }
  else {
    iStack_120 = (int)(*(short *)(param_3 + 0x24) >> 0xf);
    lVar5 = uVar2 - 0xe0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011728,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x100);
  }
  else {
    fn_82696330(uVar2 - 0xe0);
  }
  bVar1 = (*(unsigned short *)(param_3 + 0x2a) >> 7 & 1) == 0;
  if (bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
  }
  else {
    lVar5 = uVar2 - 0xc0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011720,lVar5);
  if (bVar1) {
    fn_82696330(uVar2 - 0x100);
  }
  else {
    fn_82696330(uVar2 - 0xc0);
  }
  if ((*(unsigned short *)(param_3 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_3 + 0x10);
    bVar1 = true;
    if (iVar4 != 0) goto LAB_82736234;
  }
  bVar1 = false;
LAB_82736234:
  if (!bVar1) {
    lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
  }
  else {
    fn_8269A190(uVar2 - 0x120,(unsigned __int64)*param_2 + 0x254,param_3 + 0x10);
    lVar5 = uVar2 - 0xa0;
    *(int *)(iStack_120 + 8) = *(int *)(iStack_120 + 8) + 1;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011738,lVar5);
  if (!bVar1) {
    fn_82696330(uVar2 - 0x100);
  }
  else {
    fn_82696330(uVar2 - 0xa0);
    lVar5 = (unsigned __int64)*(unsigned int *)(iStack_120 + 8) - 1;
    *(int *)(iStack_120 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_120);
    }
  }
  if (*(char *)(*param_2 + 0x2a4) == '\x01') {
    bVar1 = (*(unsigned short *)(param_3 + 0x2a) & 1) == 0;
    if (bVar1) {
      lVar5 = fn_82695DA0(uVar2 - 0x100,uVar2 - 0x110);
    }
    else {
      lVar5 = uVar2 - 0x80;
    }
    fn_826A79D8(param_1,param_2,0xffffffff821c81ec,lVar5);
    if (bVar1) {
      fn_82696330(uVar2 - 0x100);
    }
    else {
      fn_82696330(uVar2 - 0x80);
    }
  }
  fn_82696330(uVar2 - 0x110);
  return;
}

