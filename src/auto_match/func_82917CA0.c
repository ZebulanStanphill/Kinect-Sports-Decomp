unsigned __int64 fn_82917CA0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff8876086c;
  }
  if (((0x1b < *(unsigned int *)(param_1 + 0xc)) && (puVar1 = *(unsigned int **)(param_1 + 8), 0x1b < *puVar1)) &&
     (puVar1[1] < *(unsigned int *)(param_1 + 0xc))) {
    iVar2 = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if (puVar1[1] != 0) {
      iVar2 = *(int *)(param_1 + 8) + puVar1[1];
    }
    *param_2 = iVar2;
    param_2[1] = puVar1[2];
    param_2[2] = puVar1[3];
    return 0;
  }
  return 0xffffffff88760b59;
}

