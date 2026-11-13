extern int fn_82CE4118();


void fn_82DF1220(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar2 = 0;
    do {
      fn_82CE4118(*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x20)));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  return;
}

