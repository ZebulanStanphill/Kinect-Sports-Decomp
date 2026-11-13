typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_8288A398();
extern int fn_8288F730();
extern int fn_828B5580();
extern int fn_828B57E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CBBE0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar4;
  int iVar5;
  __int64 lVar2;
  unsigned int uVar6;
  unsigned __int64 uVar3;
  int *piVar7;
  unsigned char auStack_30 [48];
  
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = fn_828E9FF8(param_2,1);
  }
  *(bool *)(param_1 + 0x8c) = lVar2 != 0;
  fn_828B57E8(param_1 + 0x80,*(unsigned int *)(param_1 + 0x6c),param_2);
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 8) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_828E9FF8(param_2,8);
  }
  *(unsigned int *)(param_1 + 0x88) = uVar6;
  if (*(char *)(param_1 + 0x8c) == '\0') {
    piVar7 = (int *)fn_8288A398();
    uVar3 = (**(int (***)())(*piVar7 + 8))();
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < (int)uVar3) {
      *(unsigned int *)(param_1 + 0xa0) = 0;
    }
    else {
      uVar6 = fn_828E9FF8(param_2,uVar3);
      *(unsigned int *)(param_1 + 0xa0) = uVar6;
    }
  }
  else {
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_828E9FF8(param_2,1);
    }
    *(bool *)(param_1 + 0x8d) = iVar4 == 1;
    if (iVar4 != 1) {
      uVar6 = *(unsigned int *)(param_1 + 0x18);
      uVar1 = *(unsigned int *)(param_1 + 0x6c);
      uVar3 = fn_828B5580(auStack_30,param_1 + 0x80);
      fn_8288F730(uVar1,uVar3,uVar6,param_2,param_1 + 0x90);
    }
  }
  return;
}

