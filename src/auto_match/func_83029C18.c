void fn_83029C18(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return;
  }
  uVar2 = 0;
  if (*(short *)(param_1 + 0x16) == 0) {
    return;
  }
  puVar1 = (unsigned char *)(*(int *)(param_1 + 0xc) + -1);
  do {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (uVar2 < *(unsigned short *)(param_1 + 0x16));
  return;
}

