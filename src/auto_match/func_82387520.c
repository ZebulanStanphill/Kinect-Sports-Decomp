void fn_82387520(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x224);
  iVar3 = 0;
  iVar6 = 0;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 1) {
    iVar6 = 0x4b;
  }
  else if (uVar1 < 3) {
    iVar6 = 0x19;
  }
  else if (uVar1 == 3) {
    iVar6 = 0x32;
  }
  uVar4 = iVar6 + 0x2e2;
  iVar6 = 0;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 1) {
    iVar6 = 0x4b;
  }
  else if (uVar1 < 3) {
    iVar6 = 0x19;
  }
  else if (uVar1 == 3) {
    iVar6 = 0x32;
  }
  if (uVar4 <= iVar6 + 0x2faU) {
    iVar5 = ((iVar6 + 0x2faU) - uVar4) + 1;
    iVar6 = uVar4 * 4;
    do {
      iVar2 = *(int *)(((param_3 * 2 + param_4) * 0x22 + iVar3 + 1) * 4 + param_1);
      if (*(int *)(*(int *)(param_2 + 0x100) + iVar6) != iVar2) {
        *(int *)(*(int *)(param_2 + 0x100) + iVar6) = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1 = (param_3 * 2 + param_4) * 0x88 + param_1;
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb50) != *(int *)(param_1 + 0x6c)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb50) = *(int *)(param_1 + 0x6c);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb54) != *(int *)(param_1 + 0x7c)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb54) = *(int *)(param_1 + 0x7c);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb58) != *(int *)(param_1 + 0x80)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb58) = *(int *)(param_1 + 0x80);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb5c) != *(int *)(param_1 + 0x74)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb5c) = *(int *)(param_1 + 0x74);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb60) != *(int *)(param_1 + 0x70)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb60) = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb64) != *(int *)(param_1 + 0x84)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb64) = *(int *)(param_1 + 0x84);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb68) != *(int *)(param_1 + 0x88)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb68) = *(int *)(param_1 + 0x88);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0xb6c) != *(int *)(param_1 + 0x70)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0xb6c) = *(int *)(param_1 + 0x70);
  }
  return;
}

