void fn_827F2A90(int param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  bVar1 = *(unsigned char *)(param_1 + 0x54);
  if ((*(unsigned char *)((unsigned int)(bVar1 >> 3) + param_1 + 0x51) >> (bVar1 & 7) & 1) != 0) {
    puVar2 = *(unsigned int **)((bVar1 + 8) * 4 + param_1);
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(unsigned int **)((*(unsigned char *)(param_1 + 0x54) + 0xc) * 4 + param_1);
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  *(unsigned int *)((*(unsigned char *)(param_1 + 0x54) + 8) * 4 + param_1) = 0;
  *(unsigned int *)((*(unsigned char *)(param_1 + 0x54) + 0xc) * 4 + param_1) = 0;
  uVar3 = (unsigned int)(*(unsigned char *)(param_1 + 0x54) >> 3);
  *(unsigned char *)(uVar3 + param_1 + 0x51) =
       *(unsigned char *)(uVar3 + param_1 + 0x51) & ~(unsigned char)(1 << (*(unsigned char *)(param_1 + 0x54) & 7));
  uVar3 = (unsigned int)(*(unsigned char *)(param_1 + 0x54) >> 3);
  *(unsigned char *)(uVar3 + param_1 + 0x52) =
       *(unsigned char *)(uVar3 + param_1 + 0x52) & ~(unsigned char)(1 << (*(unsigned char *)(param_1 + 0x54) & 7));
  *(unsigned char *)(param_1 + 0x50) = 1;
  return;
}

