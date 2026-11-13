void fn_82C564E8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (*(int *)(param_1 + 0x1c8) == 1) {
    uVar2 = *(unsigned int *)(param_1 + 0xc4c);
    uVar1 = *(unsigned int *)(param_1 + 0xc50);
  }
  else {
    if (*(int *)(param_1 + 0xf74) == 0) goto LAB_82c56534;
    if (*(int *)(param_1 + 0xf78) != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0xc38);
      uVar1 = *(unsigned int *)(param_1 + 0xc34);
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0xc40);
      uVar1 = *(unsigned int *)(param_1 + 0xc3c);
    }
  }
  *(unsigned int *)(param_1 + 0xc30) = uVar2;
  *(unsigned int *)(param_1 + 0xc2c) = uVar1;
LAB_82c56534:
  if (*(int *)(param_1 + 0xf74) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xf78) != 0) {
    *(unsigned int *)(param_1 + 0xc44) = *(unsigned int *)(param_1 + 0xc38);
    *(unsigned int *)(param_1 + 0xc48) = *(unsigned int *)(param_1 + 0xc34);
    return;
  }
  *(unsigned int *)(param_1 + 0xc44) = *(unsigned int *)(param_1 + 0xc40);
  *(unsigned int *)(param_1 + 0xc48) = *(unsigned int *)(param_1 + 0xc3c);
  return;
}

