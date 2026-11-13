void fn_82DF8A78(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    puVar3 = (unsigned char *)(param_1 + -1);
    do {
      iVar2 = iVar2 + 1;
      uVar1 = puVar3[3];
      puVar3[3] = puVar3[4];
      puVar3 = puVar3 + 4;
      *puVar3 = uVar1;
    } while (iVar2 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x21));
  }
  puVar3 = (unsigned char *)(param_1 + 0x2e);
  lVar4 = 4;
  do {
    uVar1 = puVar3[2];
    puVar3[2] = puVar3[5];
    puVar3[5] = uVar1;
    uVar1 = puVar3[3];
    puVar3[3] = puVar3[4];
    puVar3 = puVar3 + 4;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar1 = *(unsigned char *)(param_1 + 0x24);
  *(unsigned char *)(param_1 + 0x24) = *(unsigned char *)(param_1 + 0x27);
  *(unsigned char *)(param_1 + 0x27) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0x25);
  *(unsigned char *)(param_1 + 0x25) = *(unsigned char *)(param_1 + 0x26);
  *(unsigned char *)(param_1 + 0x26) = uVar1;
  return;
}

