extern int fn_8267B890();


void fn_82693D18(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  iVar1 = fn_8267B890(*(unsigned int *)(param_1 + 4),0x7f0,0);
  puVar2 = (unsigned int *)(iVar1 + 7U & 0xfffffff8);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[0x1f9] = iVar1;
    puVar2[0x1f8] = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int **)(param_1 + 0x14) = puVar2;
    lVar3 = 0xa8;
    do {
      *puVar2 = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int **)(param_1 + 0x10) = puVar2;
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

