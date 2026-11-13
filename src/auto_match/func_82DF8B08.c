void fn_82DF8B08(int param_1)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  puVar2 = (unsigned char *)(param_1 + -1);
  puVar3 = (unsigned char *)(param_1 + 6);
  lVar4 = 3;
  do {
    uVar1 = puVar2[1];
    puVar2[1] = puVar2[2];
    puVar2 = puVar2 + 2;
    *puVar2 = uVar1;
    uVar1 = puVar3[2];
    puVar3[2] = puVar3[5];
    puVar3[5] = uVar1;
    uVar1 = puVar3[3];
    puVar3[3] = puVar3[4];
    puVar3 = puVar3 + 4;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar1 = *(unsigned char *)(param_1 + 0x14);
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_1 + 0x17);
  *(unsigned char *)(param_1 + 0x17) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0x15);
  *(unsigned char *)(param_1 + 0x15) = *(unsigned char *)(param_1 + 0x16);
  *(unsigned char *)(param_1 + 0x16) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0x18);
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x1b);
  *(unsigned char *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0x19);
  *(unsigned char *)(param_1 + 0x19) = *(unsigned char *)(param_1 + 0x1a);
  *(unsigned char *)(param_1 + 0x1a) = uVar1;
  return;
}

