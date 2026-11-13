void fn_83035298(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((double)*(float *)(param_2 + 0x28) == param_1) {
    return;
  }
  *(float *)(param_2 + 0x28) = (float)param_1;
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != *(int *)(param_2 + 0x14)) {
    do {
      piVar1 = *(int **)(iVar2 + 8);
      if ((piVar1 != (int *)0x0) && (*(short *)(piVar1 + 6) != 0)) {
        (**(int (***)())(*piVar1 + 0x50))();
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_2 + 0x14));
  }
  return;
}

