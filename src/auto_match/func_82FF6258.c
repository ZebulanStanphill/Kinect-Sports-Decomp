#define true 1


void fn_82FF6258(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  unsigned int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != *(int *)(param_1 + 8)) {
    while( true ) {
      iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0xc);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_2)) break;
      iVar3 = iVar3 + 8;
      if (iVar3 == *(int *)(param_1 + 8)) {
        return;
      }
    }
    for (puVar2 = *(unsigned int **)(*(int *)(iVar3 + 4) + 0x1c); puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      (*(int (**)())(*(int *)puVar2[1] + 0xdc))(puVar2[1]);
    }
  }
  return;
}

