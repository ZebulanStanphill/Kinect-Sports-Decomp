extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82AD6090();
extern int fn_82B8D5B0();


void fn_82B8E0B8(unsigned __int64 param_1,int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  
  uVar1 = param_2[2];
  uVar2 = uVar1 >> 7 & 0x7f;
  piVar5 = (int *)0x0;
  if (uVar2 == 0x54) {
    iVar4 = fn_82ABDD90(param_1,0x54,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
    uVar2 = *(unsigned int *)(*(unsigned int *)((int)param_2 + iVar4 + -0x10) & 0xfffffffe);
    if ((uVar2 & 1) == 0) {
      lVar6 = ((unsigned __int64)uVar2 & 0xfffffffe) - 4;
    }
    else {
      lVar6 = 0;
    }
    piVar5 = (int *)fn_82AD2020(param_1,lVar6);
  }
  else if (uVar2 == 0x55) {
    iVar4 = fn_82ABDD90(param_1,0x55,0,0);
    piVar5 = *(int **)((int)param_2 + iVar4 + -0x14);
  }
  param_2[2] = uVar1 | 0x4000000;
  if (param_3 == (unsigned int *)0x0) {
    for (iVar4 = *param_2; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      fn_82B8D5B0(param_1,iVar4,0);
    }
  }
  else {
    if ((param_3[1] & 1) == 0) {
      uVar1 = *param_3 & 0xfffffffe;
      iVar4 = uVar1 - 4;
      if ((iVar4 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U)) goto LAB_82b8e190;
    }
    else {
LAB_82b8e190:
      iVar4 = fn_82AD6090(param_3,1);
    }
    iVar3 = *(int *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = iVar3 + 1;
    *(int **)((iVar3 + 4) * 4 + iVar4) = param_2;
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (((unsigned int)piVar5[2] >> 0x1a & 1) != 0) {
    return;
  }
  piVar5[2] = piVar5[2] | 0x4000000;
  if (param_3 == (unsigned int *)0x0) {
    for (iVar4 = *piVar5; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      fn_82B8D5B0(param_1,iVar4,0);
    }
    return;
  }
  if ((param_3[1] & 1) == 0) {
    uVar1 = *param_3 & 0xfffffffe;
    iVar4 = uVar1 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar1 + 4) + 1U <= *(unsigned int *)(uVar1 + 8))) goto LAB_82b8e214;
  }
  iVar4 = fn_82AD6090(param_3,1);
LAB_82b8e214:
  iVar3 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar3 + 1;
  *(int **)((iVar3 + 4) * 4 + iVar4) = piVar5;
  return;
}

