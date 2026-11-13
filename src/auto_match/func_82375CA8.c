extern int fn_822ABA88();
extern int fn_822CF1C0();
extern int fn_82375D78();


__int64 fn_82375CA8(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  lVar5 = 0;
  piVar1 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) == 2) {
    piVar3 = *(int **)(*(int *)(iVar2 + 0x10) * 4 + **(int **)(param_1 + 8));
    uVar4 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
    lVar5 = fn_822CF1C0(uVar4,param_3);
    if (lVar5 != 0) {
      piVar1 = *(int **)(*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) * 4 +
                        **(int **)(param_1 + 8));
      uVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),1);
      fn_822CF1C0(uVar4,param_3);
    }
  }
  fn_82375D78(param_1);
  return lVar5;
}

