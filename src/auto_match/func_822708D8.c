extern int fn_82270B70();


void fn_822708D8(double param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int **ppuVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int *puStack_50;
  unsigned int *apuStack_4c [1];
  
  iVar2 = fn_82270B70();
  puVar1 = (unsigned int *)(*(unsigned int **)(iVar2 + 0xe8))[1];
  puStack_50 = *(unsigned int **)(iVar2 + 0xe8);
  while (puVar3 = puVar1, *(char *)((int)puVar3 + 0x61) == '\0') {
    if ((unsigned int)puVar3[4] < param_2) {
      puVar1 = (unsigned int *)puVar3[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar3;
      puStack_50 = puVar3;
    }
  }
  if ((puStack_50 == *(unsigned int **)(iVar2 + 0xe8)) || (param_2 < (unsigned int)puStack_50[4])) {
    apuStack_4c[0] = *(unsigned int **)(iVar2 + 0xe8);
    ppuVar4 = apuStack_4c;
  }
  else {
    ppuVar4 = &puStack_50;
  }
  puVar1 = *ppuVar4;
  if (puVar1 != *(unsigned int **)(iVar2 + 0xe8)) {
    puVar1[0x14] = (float)param_1;
    puVar1[0x15] = param_4;
    puVar3 = (unsigned int *)((unsigned int)(puVar1 + 0xc) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar1 = (unsigned int *)((unsigned int)(puVar1 + 0x10) & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
  }
  return;
}

