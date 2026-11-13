extern int fn_822ABA88();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_822D13D0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  double extraout_f1;
  
  iVar4 = *(int *)(param_1 + 0x14);
  piVar5 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + (1 - *(int *)(iVar4 + 0x2c)) * 4);
  uVar1 = *(unsigned int *)(piVar5[4] * 4 + *piVar5);
  if (*(int *)(*(int *)(piVar5[4] * 4 + *piVar5) + 8) == 1) {
    uVar2 = fn_822ABA88(uVar1,0);
  }
  else {
    uVar2 = fn_822ABA88(uVar1,0);
    uVar3 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),1);
    uVar6 = uVar3;
    if (*(int *)((int)uVar2 + 0x2a4) == 0) {
      uVar6 = uVar2;
      uVar2 = uVar3;
    }
    if (extraout_f1 == (double)ltcg_pool_0_0f) {
      if (*(int *)(iVar4 + 0x2a4) != 0) {
        uVar2 = uVar6;
      }
    }
    else if (extraout_f1 < (double)ltcg_pool_0_0f) {
      return uVar6;
    }
  }
  return uVar2;
}

