void fn_823A0BD0(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c4);
  iVar3 = 0;
  iVar6 = 0;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 1) {
    iVar6 = 0x66;
  }
  else if (uVar1 < 3) {
    iVar6 = 0x22;
  }
  else if (uVar1 == 3) {
    iVar6 = 0x44;
  }
  uVar4 = iVar6 + 0x24c;
  iVar6 = 0;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 1) {
    iVar6 = 0x66;
  }
  else if (uVar1 < 3) {
    iVar6 = 0x22;
  }
  else if (uVar1 == 3) {
    iVar6 = 0x44;
  }
  if (uVar4 <= iVar6 + 0x26dU) {
    iVar5 = ((iVar6 + 0x26dU) - uVar4) + 1;
    iVar6 = uVar4 * 4;
    do {
      iVar2 = *(int *)(((param_3 * 2 + param_4) * 0x2c + iVar3 + 1) * 4 + param_1);
      if (*(int *)(*(int *)(param_2 + 0x100) + iVar6) != iVar2) {
        *(int *)(*(int *)(param_2 + 0x100) + iVar6) = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1 = (param_3 * 2 + param_4) * 0xb0 + param_1;
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x90c) != *(int *)(param_1 + 0x90)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x90c) = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x910) != *(int *)(param_1 + 0x94)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x910) = *(int *)(param_1 + 0x94);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x914) != *(int *)(param_1 + 0x98)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x914) = *(int *)(param_1 + 0x98);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x918) != *(int *)(param_1 + 0x9c)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x918) = *(int *)(param_1 + 0x9c);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x91c) != *(int *)(param_1 + 0xa0)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x91c) = *(int *)(param_1 + 0xa0);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x920) != *(int *)(param_1 + 0xa4)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x920) = *(int *)(param_1 + 0xa4);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x924) != *(int *)(param_1 + 0xa8)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x924) = *(int *)(param_1 + 0xa8);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x928) != *(int *)(param_1 + 0xac)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x928) = *(int *)(param_1 + 0xac);
  }
  if (*(int *)(*(int *)(param_2 + 0x100) + 0x92c) != *(int *)(param_1 + 0xb0)) {
    *(int *)(*(int *)(param_2 + 0x100) + 0x92c) = *(int *)(param_1 + 0xb0);
  }
  return;
}

