extern int fn_827F1D18();


void fn_827F1DB0(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_2 == iVar1) {
    if (iVar1 == *(int *)(param_1 + 8)) {
      fn_827F1D18();
    }
    puVar2 = *(unsigned int **)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x14) = puVar2[2];
    if (puVar2 == (unsigned int *)0x0) {
      return;
    }
  }
  else {
    if (iVar1 == *(int *)(param_1 + 8)) {
      fn_827F1D18(param_1);
    }
    puVar2 = *(unsigned int **)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x14) = puVar2[2];
    *(unsigned int *)(puVar2[1] + 8) = puVar2[2];
    *(unsigned int *)(puVar2[2] + 4) = puVar2[1];
    iVar1 = *(int *)(param_2 + 4);
    puVar2[1] = iVar1;
    *(unsigned int **)(iVar1 + 8) = puVar2;
    puVar2[2] = param_2;
    *(unsigned int **)(param_2 + 4) = puVar2;
  }
  *puVar2 = *param_3;
  return;
}

