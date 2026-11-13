extern int fn_827A9810();


void fn_826827F8(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char *puVar3;
  
  if ((unsigned int)param_1[5] < 2) {
    puVar3 = (unsigned char *)(*param_1 + 0x10);
    *param_1 = (int)puVar3;
    if (puVar3 != (unsigned char *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1[5] * 4 + param_1[4] + -4);
    *(int *)(iVar2 + 0x200) = param_1[7];
    param_1[7] = iVar2;
    fn_827A9810(param_1 + 4,(unsigned __int64)(unsigned int)param_1[5] - 1);
    uVar1 = param_1[5];
    iVar2 = *(int *)(uVar1 * 4 + param_1[4] + -4);
    param_1[2] = iVar2 + 0x200;
    param_1[1] = iVar2;
    *param_1 = iVar2 + 0x1f0;
    if (uVar1 < 2) {
      iVar2 = param_1[1];
    }
    else {
      iVar2 = *(int *)((uVar1 - 2) * 4 + param_1[4]) + 0x1f0;
    }
    param_1[3] = iVar2;
  }
  return;
}

