int fn_82392C68(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = (unsigned int *)param_2[4];
  if (puVar1 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else if (puVar1 == param_2) {
    uVar2 = (*(int (**)())*puVar1)(puVar1,param_1);
    *(unsigned int *)(param_1 + 0x10) = uVar2;
  }
  else {
    *(unsigned int **)(param_1 + 0x10) = puVar1;
    param_2[4] = 0;
  }
  return param_1;
}

