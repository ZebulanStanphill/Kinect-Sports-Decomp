unsigned __int64 fn_82C48040(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0x3c04) == 0)) &&
     (*(int *)(iVar1 + 0x3c48) == 0)) {
    return 0xfffffffffffffffc;
  }
  if (*(int *)(iVar1 + 0x3cb0) < 7) {
    if (*(int *)(iVar1 + 0x3a28) != 0) {
      uVar2 = *(unsigned int *)(iVar1 + 0x3a40);
      uVar3 = *(unsigned int *)(iVar1 + 0x3a44);
      goto code_r0x82c480dc;
    }
  }
  else if (((*(int *)(iVar1 + 0x5580) == 1) && (0 < *(int *)(iVar1 + 0x39f4))) &&
          (1 < *(__int64 *)(iVar1 + 0xe30))) {
    uVar2 = *(unsigned int *)(iVar1 + 0x5644);
    uVar3 = *(unsigned int *)(iVar1 + 0x5648);
    goto code_r0x82c480dc;
  }
  uVar2 = *(unsigned int *)(iVar1 + 0x9c);
  uVar3 = *(unsigned int *)(iVar1 + 0xa0);
code_r0x82c480dc:
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = uVar3;
  }
  return 0;
}

