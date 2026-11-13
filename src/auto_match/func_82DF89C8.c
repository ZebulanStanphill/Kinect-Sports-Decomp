void fn_82DF89C8(int param_1)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  
  uVar1 = *(unsigned char *)(param_1 + 4);
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_1 + 7);
  *(unsigned char *)(param_1 + 7) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 5);
  lVar3 = 4;
  puVar2 = (unsigned char *)(param_1 + 0xe);
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_1 + 6);
  *(unsigned char *)(param_1 + 6) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 8);
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 0xb);
  *(unsigned char *)(param_1 + 0xb) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 9);
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 10);
  *(unsigned char *)(param_1 + 10) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0xc);
  *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)(param_1 + 0xf);
  *(unsigned char *)(param_1 + 0xf) = uVar1;
  uVar1 = *(unsigned char *)(param_1 + 0xd);
  *(unsigned char *)(param_1 + 0xd) = *(unsigned char *)(param_1 + 0xe);
  *(unsigned char *)(param_1 + 0xe) = uVar1;
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

