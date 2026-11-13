#define true 1


void fn_82B83718(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar1 = 1;
  if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
    uVar4 = *(unsigned int *)(param_2 + 0x14);
    iVar3 = param_2 + 0x10;
  }
  else if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
    uVar4 = *(unsigned int *)(param_2 + 0x1c);
    iVar3 = param_2 + 0x18;
  }
  else {
    uVar4 = *(unsigned int *)(param_2 + 0x24);
    iVar3 = param_2 + 0x20;
  }
  uVar4 = -(unsigned int)((uVar4 & 1) == 0) & uVar4;
  while( true ) {
    if (uVar4 == 0) {
      return;
    }
    do {
      *(unsigned int *)(uVar4 + 0x14) = uVar1 << 3 | *(unsigned int *)(uVar4 + 0x14) & 7;
      *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) | 0x40000000;
      if (uVar1 < 0x1fffffff) {
        uVar1 = uVar1 + 1;
      }
      uVar4 = *(unsigned int *)((uVar4 & 0xfffffffe) + 0x28);
    } while (((uVar4 & 1) == 0) && (uVar4 != 0));
    iVar2 = param_2 + 0x20;
    if (iVar3 == iVar2) break;
    if ((iVar3 == param_2 + 0x18) || ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) {
      uVar4 = *(unsigned int *)(param_2 + 0x24);
    }
    else {
      uVar4 = *(unsigned int *)(param_2 + 0x1c);
      iVar2 = param_2 + 0x18;
    }
    iVar3 = iVar2;
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  return;
}

