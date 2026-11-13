unsigned int fn_8249B598(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(*(int *)(((int)param_2 + 5) * 4 + param_1) + 0x20);
  if ((int)uVar2 < 0) {
    iVar1 = *(int *)(*(int *)((((int)param_2 == 0) + 5) * 4 + param_1) + 0x20);
    if (iVar1 < 0) {
      uVar2 = (unsigned int)(param_2 != 0);
    }
    else {
      uVar2 = (unsigned int)(iVar1 == 0);
    }
  }
  return uVar2;
}

