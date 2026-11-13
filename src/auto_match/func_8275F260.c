extern int fn_8275D158();


void fn_8275F260(int param_1,int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_3 * 3;
  uVar2 = iVar6 + param_2 + 1;
  uVar3 = uVar2;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar5 = 0;
    if (iVar1 != 0) {
      uVar4 = (*(int *)(iVar1 + 4) - (unsigned int)*(unsigned short *)(param_1 + 8)) + iVar1 + 9;
      uVar3 = param_3 - 1 & uVar4;
      iVar5 = ((uVar3 + param_3) - 1 & ~(param_3 - 1)) - uVar3;
      uVar3 = iVar6 + uVar4 + iVar5 & param_4 - 1U;
      iVar5 = (((uVar3 + param_4) - 1 & ~(param_4 - 1U)) - uVar3) + iVar5;
    }
    uVar3 = iVar5 + uVar2;
    if ((iVar1 == 0) || (*(unsigned short *)(param_1 + 8) < uVar3)) {
      iVar5 = ((((param_3 & ~(param_3 - 1)) + iVar6 + param_4) - 1 & ~(param_4 - 1U)) - uVar2) +
              param_2;
    }
    uVar2 = iVar5 + uVar2;
  }
  fn_8275D158(param_1,uVar3,uVar2);
  return;
}

