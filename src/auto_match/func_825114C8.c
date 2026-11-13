extern int fn_82825AD0();


void fn_825114C8(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int **ppuVar2;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [1];
  
  puStack_10 = *(unsigned int **)(param_1 + 4);
  puVar1 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  while (*(char *)((int)puVar1 + 0x15) == '\0') {
    if ((unsigned int)puVar1[3] < param_2) {
      puVar1 = (unsigned int *)puVar1[2];
    }
    else {
      puStack_10 = puVar1;
      puVar1 = (unsigned int *)*puVar1;
    }
  }
  if ((puStack_10 == *(unsigned int **)(param_1 + 4)) || (param_2 < (unsigned int)puStack_10[3])) {
    ppuVar2 = apuStack_c;
    apuStack_c[0] = *(unsigned int **)(param_1 + 4);
  }
  else {
    ppuVar2 = &puStack_10;
  }
  fn_82825AD0(apuStack_c,param_1,*ppuVar2);
  return;
}

