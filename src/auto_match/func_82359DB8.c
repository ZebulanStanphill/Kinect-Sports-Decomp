extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8265C9E0();
extern unsigned int lbl_82196E94;


unsigned int * fn_82359DB8(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned int *puVar3;
  unsigned int **ppuVar5;
  unsigned int *puStack_30;
  unsigned int *apuStack_2c [11];
  
  puVar1 = (unsigned int *)(*(unsigned int **)(param_2 + 8))[1];
  puStack_30 = *(unsigned int **)(param_2 + 8);
  while (puVar3 = puVar1, *(char *)((int)puVar3 + 0x19) == '\0') {
    if ((unsigned int)puVar3[3] < param_3) {
      puVar1 = (unsigned int *)puVar3[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar3;
      puStack_30 = puVar3;
    }
  }
  if ((puStack_30 == *(unsigned int **)(param_2 + 8)) || (param_3 < (unsigned int)puStack_30[3])) {
    apuStack_2c[0] = *(unsigned int **)(param_2 + 8);
    ppuVar5 = apuStack_2c;
  }
  else {
    ppuVar5 = &puStack_30;
  }
  puVar1 = *ppuVar5;
  puVar3 = *(unsigned int **)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar1 == puVar3) {
    puVar3 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[3] = 0;
      puVar3[1] = 1;
      *puVar3 = &lbl_82196E94;
      puVar3[2] = 1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    *param_1 = 0;
  }
  else {
    puVar3 = (unsigned int *)puVar1[5];
    uVar2 = puVar1[4];
    if (puVar3 == (unsigned int *)0x0) {
      return param_1;
    }
    cVar4 = fn_8223AAC0(puVar3);
    if (cVar4 == '\0') {
      return param_1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    *param_1 = uVar2;
  }
  param_1[1] = puVar3;
  return param_1;
}

