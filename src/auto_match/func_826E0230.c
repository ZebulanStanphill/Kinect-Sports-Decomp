typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826F4898();
extern int fn_8276A370();
extern int fn_8276A430();
extern int fn_8276AEB0();
extern int fn_8276BB80();
extern int fn_8276DE20();
extern int fn_8276E5F0();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


void fn_826E0230(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar2;
  bool bVar5;
  unsigned int uVar6;
  unsigned int auStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  uVar3 = fn_826A6A38();
  fn_826A9280(param_1 + 0x14,0xffffffff8200ca80,uVar3 & 0xffff);
  iVar4 = *(int *)(param_1 + 0x20);
  bVar5 = false;
  uVar6 = -(unsigned int)(*(int *)(iVar4 + 0x4c) != 0) & iVar4 + 0x4cU;
  if ((uVar6 != 0) && ((*(unsigned int *)(uVar6 + 0x10) & 0x10) != 0)) {
    bVar5 = true;
  }
  iVar1 = *param_2;
  if (iVar1 == 0x3ed) {
    iVar4 = fn_8267B890(*(unsigned int *)(iVar4 + 0x1c),100,0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8276A370();
    }
    fn_8276A430(uVar2,param_1,param_2);
  }
  else if ((((iVar1 != 0x30) && (iVar1 != 0x4b)) || (bVar5)) ||
          (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 0x24) == 0)) {
    iVar4 = fn_8267B890(*(unsigned int *)(iVar4 + 0x1c),0x40,0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8276DE20();
    }
    fn_8276E5F0(uVar2,param_1,param_2);
  }
  else {
    iVar4 = fn_8267B890(*(unsigned int *)(iVar4 + 0x1c),0x6c,0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8276AEB0();
    }
    fn_8276BB80(uVar2,param_1,param_2);
  }
  auStack_30[0] = uVar3 & 0xffff;
  fn_826F4898(&iStack_28,param_1,auStack_30,uVar2);
  if ((iStack_28 == 0) && (iStack_24 != 0)) {
    fn_82687270();
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  return;
}

