extern int fn_82526608();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_825184D8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int **ppuVar3;
  unsigned int uStack0000001c;
  unsigned int *puStack_20;
  unsigned int *apuStack_1c [1];
  
  puVar1 = *(unsigned int **)(param_1 + 0x14);
  puStack_20 = puVar1;
  puVar2 = (unsigned int *)puVar1[1];
  while (*(char *)((int)puVar2 + 0x15) == '\0') {
    if ((unsigned int)puVar2[3] < param_2) {
      puVar2 = (unsigned int *)puVar2[2];
    }
    else {
      puStack_20 = puVar2;
      puVar2 = (unsigned int *)*puVar2;
    }
  }
  if ((puStack_20 == *(unsigned int **)(param_1 + 0x14)) || (param_2 < (unsigned int)puStack_20[3])) {
    ppuVar3 = apuStack_1c;
    apuStack_1c[0] = *(unsigned int **)(param_1 + 0x14);
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 == puVar1) {
    uStack0000001c = param_2;
    puVar1 = (unsigned int *)fn_82526608(param_1 + 0x10,&stack0x0000001c);
    *puVar1 = param_3;
  }
  return;
}

