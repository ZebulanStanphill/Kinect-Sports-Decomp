extern int fn_82515798();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_825156F8(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int **ppuVar4;
  unsigned int uStack0000001c;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  puStack_10 = puVar1;
  puVar3 = (unsigned int *)puVar1[1];
  while (*(char *)((int)puVar3 + 0x49) == '\0') {
    if ((unsigned int)puVar3[3] < param_2) {
      puVar3 = (unsigned int *)puVar3[2];
    }
    else {
      puStack_10 = puVar3;
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  if ((puStack_10 == *(unsigned int **)(param_1 + 4)) || (param_2 < (unsigned int)puStack_10[3])) {
    ppuVar4 = apuStack_c;
    apuStack_c[0] = *(unsigned int **)(param_1 + 4);
  }
  else {
    ppuVar4 = &puStack_10;
  }
  if (*ppuVar4 == puVar1) {
    uVar2 = 0;
  }
  else {
    uStack0000001c = param_2;
    uVar2 = fn_82515798(param_1,&stack0x0000001c);
  }
  return uVar2;
}

