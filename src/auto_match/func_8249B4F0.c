unsigned __int64 fn_8249B4F0(double param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  *(unsigned int *)(**(int **)(param_2 + 0x1c) + 0x10) = 1;
  if (*(int *)(param_2 + 0x70) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x70) + 0xd54);
    iVar2 = *(int *)(iVar1 + 0x14);
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
      piVar3 = *(int **)(iVar2 + 0x18);
      if (piVar3 != (int *)0x0) {
        (**(int (***)())(*piVar3 + 0x80))();
      }
    }
  }
  if (((double)*(float *)(param_2 + 0x28) == param_1) || (param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    *(float *)(param_2 + 0x28) = (float)param_1;
    uVar4 = 1;
    *(unsigned int *)(param_2 + 0x24) = 1;
  }
  return uVar4;
}

