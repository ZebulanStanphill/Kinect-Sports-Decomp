extern int fn_82645110();


void fn_826529C8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x5568) == 2) {
    if (*(int *)(param_1 + 0x5570) == 3) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5570) + 1;
    }
    if (iVar2 != *(int *)(param_1 + 0x556c)) {
      iVar2 = iVar2 * 2;
      if (param_2 == 0) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
        uVar1 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar1 + 4) = 0xc0025800;
      *(unsigned int *)(uVar1 + 8) = 0x80000003;
      uVar3 = *(int *)(param_1 + 0x5564) + iVar2 * 4;
      *(unsigned int *)(uVar1 + 0xc) = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
      *(unsigned int *)(uVar1 + 0x10) = 0xdeadbeef;
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x10);
    }
  }
  return;
}

