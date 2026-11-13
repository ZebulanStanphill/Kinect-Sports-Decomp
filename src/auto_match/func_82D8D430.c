extern int fn_82D8D988();


void fn_82D8D430(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd4)) {
    piVar1 = *(int **)(param_1 + 0xd0);
    do {
      if (*piVar1 == param_2) goto LAB_82d8d47c;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd4));
  }
  iVar3 = -1;
LAB_82d8d47c:
  fn_82D8D988(param_1,param_2,(unsigned char)((unsigned int)iVar3 >> 0x1f) ^ 1);
  if (-1 < iVar3) {
    iVar2 = *(int *)(param_1 + 0xd4) + -1;
    *(int *)(param_1 + 0xd4) = iVar2;
    if (iVar2 != iVar3) {
      *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0xd0)) =
           *(unsigned int *)(iVar2 * 4 + *(int *)(param_1 + 0xd0));
    }
    *(unsigned char *)(param_1 + 0xdc) = 1;
  }
  return;
}

