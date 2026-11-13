void fn_8277BB20(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_2 + 0x14);
  uVar2 = *(unsigned int *)(param_2 + 0x18);
  if (uVar1 != 0) {
    if (uVar1 < *(unsigned int *)(param_1 + 0xd8)) {
      *(unsigned int *)(param_1 + 0xd8) = uVar1;
    }
    if (uVar1 > *(unsigned int *)(param_1 + 0xdc)) {
      *(unsigned int *)(param_1 + 0xdc) = uVar1;
    }
  }
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 < *(unsigned int *)(param_1 + 0xd8)) {
    *(unsigned int *)(param_1 + 0xd8) = uVar2;
  }
  if (uVar2 <= *(unsigned int *)(param_1 + 0xdc)) {
    return;
  }
  *(unsigned int *)(param_1 + 0xdc) = uVar2;
  return;
}

