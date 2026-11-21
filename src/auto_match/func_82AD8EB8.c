#define true 1

void fn_82AD8EB8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  if ((*(unsigned int *)(param_1 + 0x28) & 0xffff00) == 0 && (*(unsigned int *)(param_1 + 0x28) & 0x800100) == 0) {
    return;
  }
  uVar1 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      fn_82AD84B0();
      return;
    }
    if ((*(unsigned int *)(uVar1 + 0x14) & 1) == 0) {
      uVar4 = *(unsigned int *)(uVar1 + 0x14);
      iVar3 = uVar1 + 0x10;
    }
    else if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
      uVar4 = *(unsigned int *)(uVar1 + 0x1c);
      iVar3 = uVar1 + 0x18;
    }
    else {
      uVar4 = *(unsigned int *)(uVar1 + 0x24);
      iVar3 = uVar1 + 0x20;
    }
    uVar4 = -(unsigned int)((uVar4 & 1) == 0) & uVar4;
    do {
      if (uVar4 == 0) break;
      do {
        *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) & 0xe7ffffff;
        uVar4 = *(unsigned int *)((uVar4 & 0xfffffffe) + 0x28);
        if ((uVar4 & 1) != 0) break;
      } while (uVar4 != 0);
      iVar2 = uVar1 + 0x20;
      if (iVar3 == iVar2) break;
      if ((iVar3 == uVar1 + 0x18) || ((*(unsigned int *)(uVar1 + 0x1c) & 1) != 0)) {
        uVar4 = *(unsigned int *)(uVar1 + 0x24);
      }
      else {
        uVar4 = *(unsigned int *)(uVar1 + 0x1c);
        iVar2 = uVar1 + 0x18;
      }
      iVar3 = iVar2;
    } while ((uVar4 & 1) == 0);
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}
