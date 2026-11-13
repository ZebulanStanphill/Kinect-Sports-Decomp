extern int fn_82AC68F0();


void fn_82B1F1B0(int param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  uVar3 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  do {
    if (uVar3 == 0) {
      return;
    }
    if (*(int *)(uVar3 + 0x2c) == param_3) {
      uVar1 = fn_82AC68F0(param_1);
      *(unsigned int *)(uVar1 + 0x50) = uVar3;
      *(unsigned int *)(uVar3 + 0x50) = uVar1;
      puVar2 = (unsigned int *)(uVar1 & 0xfffffffe);
      *puVar2 = *param_2;
      *(unsigned int **)(*param_2 & 0xfffffffe) = puVar2;
      puVar2[1] = (unsigned int)param_2 | 1;
      *param_2 = (unsigned int)(puVar2 + 1);
    }
    uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 4);
  } while ((uVar3 & 1) == 0);
  return;
}

