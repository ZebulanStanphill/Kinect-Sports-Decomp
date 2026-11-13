extern int fn_82318F38();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82318788(int param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int **ppuVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uStack0000001c;
  unsigned int *puStack_20;
  unsigned int *apuStack_1c [1];
  
  puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  puStack_20 = *(unsigned int **)(param_1 + 4);
  while (puVar2 = puVar4, *(char *)((int)puVar2 + 0x25) == '\0') {
    if ((unsigned int)puVar2[3] < param_2) {
      puVar4 = (unsigned int *)puVar2[2];
    }
    else {
      puVar4 = (unsigned int *)*puVar2;
      puStack_20 = puVar2;
    }
  }
  puVar4 = *(unsigned int **)(param_1 + 4);
  if ((puStack_20 == puVar4) || (param_2 < (unsigned int)puStack_20[3])) {
    ppuVar3 = apuStack_1c;
    apuStack_1c[0] = puVar4;
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 == puVar4) {
    uStack0000001c = param_2;
    iVar1 = fn_82318F38(param_1,&stack0x0000001c);
    puVar2 = (unsigned int *)(iVar1 + -4);
    puVar4 = (unsigned int *)(param_3 + -4);
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

