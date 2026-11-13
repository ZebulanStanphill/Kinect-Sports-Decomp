void fn_82CD37A8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  if (4 < *(unsigned int *)(param_1 + 0x38e0)) {
    *(unsigned int *)(param_1 + 0x38e0) = 4;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38e0);
  uVar1 = *(unsigned int *)(param_1 + 0x3894);
  trapWord(6,uVar2,0);
  uVar3 = (unsigned int)(uVar1 / uVar2) & 0xfffffffe;
  *(unsigned int *)(param_1 + 0x54) = uVar3;
  if ((uVar1 / uVar2 & 2) != 0) {
    *(unsigned int *)(param_1 + 0x54) = uVar3 - 2;
  }
  if (uVar2 == 1) {
    *(unsigned int *)(param_1 + 0x54) = uVar1;
  }
  uVar3 = uVar1;
  if (uVar2 != 2) {
    uVar3 = *(int *)(param_1 + 0x54) << 1;
  }
  *(unsigned int *)(param_1 + 0x58) = uVar3;
  if (uVar2 == 4) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) * 3;
    return;
  }
  *(unsigned int *)(param_1 + 0x5c) = uVar1;
  return;
}

