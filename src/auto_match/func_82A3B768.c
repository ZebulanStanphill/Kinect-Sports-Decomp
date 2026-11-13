void fn_82A3B768(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  
  uVar2 = 0;
  iVar3 = param_1 + 0x2530;
  lVar4 = 0x100;
  do {
    if (*(char *)(iVar3 + uVar2) == '\0') {
      *(unsigned char *)(iVar3 + uVar2) = 0xb;
    }
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  for (; uVar2 < (unsigned int)((*(int *)(param_1 + 0x868) + 0x20) * 8); uVar2 = uVar2 + 1) {
    if (*(char *)(iVar3 + uVar2) == '\0') {
      *(unsigned char *)(iVar3 + uVar2) = 0xc;
    }
  }
  iVar3 = 0;
  lVar4 = 0xf9;
  do {
    if (*(char *)(param_1 + 0x27ed + iVar3) == '\0') {
      *(unsigned char *)(param_1 + 0x27ed + iVar3) = 8;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = *(unsigned char *)(param_1 + 0x554) + 0x12;
  if (uVar2 < *(unsigned int *)(param_1 + 0x868)) {
    puVar1 = (unsigned char *)((*(unsigned char *)(param_1 + 0x554) + 0x4d7) * 8 + param_1);
    do {
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
      *puVar1 = 100;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x868));
    return;
  }
  return;
}

