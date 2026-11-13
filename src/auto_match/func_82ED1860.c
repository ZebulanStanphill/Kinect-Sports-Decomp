void fn_82ED1860(unsigned __int64 param_1,unsigned int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = param_4 + param_5;
  iVar4 = iVar3 + param_5;
  piVar2 = (int *)(param_4 * 4 + param_3);
  piVar1 = (int *)(iVar3 * 4 + param_3);
  param_5 = iVar4 + param_5;
  piVar5 = (int *)(param_5 * 4 + param_3);
  *param_2 = (unsigned int)(*(int *)((param_5 + 3) * 4 + param_3) + *(int *)((param_5 + 2) * 4 + param_3) +
                    piVar5[1] +
                    *(int *)((iVar4 + 3) * 4 + param_3) + *(int *)((iVar4 + 2) * 4 + param_3) +
                    *(int *)(iVar4 * 4 + param_3 + 4) +
                    *(int *)((iVar3 + 3) * 4 + param_3) + *(int *)((iVar3 + 2) * 4 + param_3) +
                    piVar1[1] +
                    *(int *)((param_4 + 3) * 4 + param_3) + *(int *)((param_4 + 2) * 4 + param_3) +
                    piVar2[1] + *piVar2 + *piVar1 + *(int *)(iVar4 * 4 + param_3) + *piVar5) >> 4;
  return;
}

