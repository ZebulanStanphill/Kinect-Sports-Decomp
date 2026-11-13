unsigned int fn_8307E188(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  puVar2 = (unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  puVar3 = puVar2;
  if ((*(unsigned int *)(param_1 + 4) & 0x20000) == 0) {
    puVar3 = (unsigned int *)puVar2[0x10];
  }
  if ((puVar3[1] & 0x80000000) == 0) {
    uVar4 = *puVar3 >> 0x16 & 0x1f;
  }
  else {
    uVar4 = *puVar3 >> 0x1b;
    uVar1 = puVar3[9] & 0x1f;
    if (uVar4 < uVar1) {
      uVar4 = ((*puVar3 >> 0x16 & 0x1f) - uVar1) + uVar4;
    }
    else {
      uVar4 = uVar4 - uVar1;
    }
  }
  return uVar4 * 0x100 - (unsigned int)*(unsigned short *)((int)puVar2 + 0x52) >> (puVar3[1] >> 0x1d & 1) + 1;
}

