extern int fn_822ABA88();
extern int fn_822CEE40();


unsigned int fn_82381B20(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = **(int **)(*(int *)(param_1 + 4) + 8);
  piVar2 = *(int **)(param_2 * 4 + iVar4);
  piVar5 = *(int **)(((unsigned int)((unsigned __int64)LZCOUNT(param_2) >> 3) & 4) + iVar4);
  uVar3 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),param_3);
  if ((*(int *)((int)uVar3 + 0x2a4) == *(int *)(iVar4 + 0x2a4)) &&
     (iVar4 = fn_822CEE40(uVar3), iVar4 != 0)) {
    uVar1 = *(unsigned int *)(iVar4 + 0x28);
  }
  else {
    uVar1 = *(unsigned int *)((int)uVar3 + 0x28);
  }
  return uVar1;
}

