extern int fn_82518120();


unsigned __int64 fn_825151B0(unsigned __int64 param_1,unsigned int param_2)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned int **ppuVar6;
  unsigned int *puStack_20;
  unsigned int *apuStack_1c [1];
  
  iVar4 = fn_82518120();
  puVar2 = (unsigned int *)(*(unsigned int **)(iVar4 + 0x14))[1];
  puStack_20 = *(unsigned int **)(iVar4 + 0x14);
  while (puVar5 = puVar2, *(char *)((int)puVar5 + 0x15) == '\0') {
    if ((unsigned int)puVar5[3] < param_2) {
      puVar2 = (unsigned int *)puVar5[2];
    }
    else {
      puVar2 = (unsigned int *)*puVar5;
      puStack_20 = puVar5;
    }
  }
  if ((puStack_20 == *(unsigned int **)(iVar4 + 0x14)) || (param_2 < (unsigned int)puStack_20[3])) {
    apuStack_1c[0] = *(unsigned int **)(iVar4 + 0x14);
    ppuVar6 = apuStack_1c;
  }
  else {
    ppuVar6 = &puStack_20;
  }
  if ((*ppuVar6 == *(unsigned int **)(iVar4 + 0x14)) ||
     (pcVar1 = (int (**)())(*ppuVar6)[4], pcVar1 == (int (**)())0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*pcVar1)();
  }
  return uVar3;
}

