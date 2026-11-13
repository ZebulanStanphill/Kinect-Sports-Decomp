extern int fn_826BD928();
extern unsigned int lbl_82021544;


double fn_826C52C8(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(int **)(param_1 + 0x1b4) == (int *)0x0) {
    iVar2 = 100;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x1b4);
  }
  dVar3 = (double)lbl_82021544;
  dVar4 = (double)(float)((double)(__int64)iVar2 * dVar3);
  for (iVar2 = *(int *)(param_1 + 0x20); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    iVar1 = (**(int (***)())(*(int *)(iVar2 + 0x68) + 8))(iVar2 + 0x68);
    if (iVar1 == 2) {
      iVar1 = fn_826BD928(iVar2 + 0x68);
      if (*(int **)(iVar1 + 0x1b4) == (int *)0x0) {
        iVar1 = 100;
      }
      else {
        iVar1 = **(int **)(iVar1 + 0x1b4);
      }
      dVar4 = (double)(float)((double)(float)((double)(__int64)iVar1 * dVar4) * dVar3);
    }
  }
  return dVar4;
}

