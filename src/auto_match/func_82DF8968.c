void fn_82DF8968(int param_1)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  
  uVar1 = *(unsigned char *)(param_1 + 0x18);
  puVar2 = (unsigned char *)(param_1 + 0x1e);
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x1b);
  lVar3 = 4;
  *(unsigned char *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0x19);
  *(unsigned char *)(param_1 + 0x19) = *(unsigned char *)(param_1 + 0x1a);
  *(unsigned char *)(param_1 + 0x1a) = uVar1;
  do {
    uVar1 = puVar2[2];
    puVar2[2] = puVar2[5];
    puVar2[5] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[4];
    puVar2 = puVar2 + 4;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

