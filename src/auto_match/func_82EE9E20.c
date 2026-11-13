unsigned int fn_82EE9E20(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)0;
  if (param_2 != 0) {
    iVar3 = ((int)(param_2 % 0x1f5) + 0x20d) * 4;
    puVar4 = *(unsigned int **)(iVar3 + param_1);
    while (puVar2 = puVar4, puVar2 != (unsigned int *)0x0) {
      if (*(unsigned __int64 *)(puVar2 + 8) == param_2) {
        if (puVar5 == (unsigned int *)0x0) {
          *(unsigned int *)(iVar3 + param_1) = puVar2[10];
        }
        else {
          puVar5[10] = puVar2[10];
        }
        uVar1 = *puVar2;
        *puVar2 = 0;
        puVar2[10] = 0;
        puVar2[7] = 0;
        return uVar1;
      }
      puVar5 = puVar2;
      puVar4 = (unsigned int *)puVar2[10];
    }
  }
  return 0;
}

