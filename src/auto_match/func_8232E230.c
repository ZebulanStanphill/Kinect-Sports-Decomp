extern int fn_82825AD0();


void fn_8232E230(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int **ppuVar3;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 0x118);
  puStack_10 = *(unsigned int **)(iVar1 + 0x18);
  puVar2 = (unsigned int *)(*(unsigned int **)(iVar1 + 0x18))[1];
  while (*(char *)((int)puVar2 + 0x15) == '\0') {
    if ((unsigned int)puVar2[3] < 0x14) {
      puVar2 = (unsigned int *)puVar2[2];
    }
    else {
      puStack_10 = puVar2;
      puVar2 = (unsigned int *)*puVar2;
    }
  }
  if ((puStack_10 == *(unsigned int **)(iVar1 + 0x18)) || (0x14 < (unsigned int)puStack_10[3])) {
    ppuVar3 = apuStack_c;
    apuStack_c[0] = *(unsigned int **)(iVar1 + 0x18);
  }
  else {
    ppuVar3 = &puStack_10;
  }
  fn_82825AD0(apuStack_c,iVar1 + 0x14,*ppuVar3);
  return;
}

