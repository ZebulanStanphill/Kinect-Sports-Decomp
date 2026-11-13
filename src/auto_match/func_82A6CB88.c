void fn_82A6CB88(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  iVar2 = **(int **)(param_1 + 8);
  if (*(int *)(iVar2 + 0x3c) < 3) {
    if (*(int *)(iVar2 + 0xd4) == 0) {
      uVar5 = 0;
      goto LAB_82a6cbf8;
    }
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) + 0xb;
  }
  else if (*(int *)(iVar2 + 0x25c) == 0) {
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) + 6;
  }
  else {
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) + 0x11;
  }
  uVar5 = uVar5 & 0xff;
LAB_82a6cbf8:
  iVar2 = (int)(uVar5 >> 3);
  puVar3 = (unsigned char *)(*(int *)(param_1 + 0x14) + iVar2);
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned char **)(param_1 + 0x1c) = puVar3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) - iVar2;
  uVar1 = *puVar3;
  *(unsigned char **)(param_1 + 0x1c) = puVar3 + 1;
  uVar6 = (int)uVar5 + ((int)uVar5 >> 3) * -8;
  uVar4 = (**(int (***)())(param_1 + 0x54))(uVar1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  *(unsigned int *)(param_1 + 0x24) = ((uVar4 & 0xff) << (uVar6 & 0x3f) & 0xff) >> (uVar6 & 0x3f);
  *(unsigned int *)(param_1 + 0x28) = 8 - uVar6;
  return;
}

