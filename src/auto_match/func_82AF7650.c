#define true 1


void fn_82AF7650(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  while( true ) {
    puVar4 = (unsigned int *)(-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4));
    puVar3 = (unsigned int *)((unsigned int)puVar4 & 0xfffffffe);
    uVar1 = puVar3[1];
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (uVar1 == 0) break;
    *(unsigned int *)(uVar1 & 0xfffffffe) = *puVar3;
    *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
    iVar2 = *(int *)(param_1 & 0xfffff000);
    *puVar4 = *(unsigned int *)(iVar2 + 0x2c);
    *(unsigned int **)(iVar2 + 0x2c) = puVar4;
  }
  return;
}

