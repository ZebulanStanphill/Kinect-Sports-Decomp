extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82897B28();


void fn_8288B1D8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar4 = *(unsigned int *)(param_1 + 0xc);
  if (uVar4 <= *(unsigned int *)(param_1 + 8)) {
    uVar5 = (uVar4 >> 2) + uVar4 + 8;
    uVar4 = uVar5 & 0x3fffffff;
    if (0x3fffffff < uVar5) {
      uVar4 = 0xffffffff;
    }
    iVar1 = fn_8265CA60(uVar4);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        uVar4 = uVar4 + 1;
        *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(*(int *)(param_1 + 0x10) + iVar2);
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(unsigned int *)(param_1 + 0xc));
    }
    if (uVar4 < uVar5) {
      puVar3 = (unsigned int *)(uVar4 * 4 + iVar1 + -4);
      for (iVar2 = uVar5 - uVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
      }
    }
    fn_8265CAA0(*(unsigned int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = iVar1;
    *(unsigned int *)(param_1 + 0xc) = uVar5;
  }
  uVar4 = *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 8) = uVar4 + 1;
  if (uVar4 < *(unsigned int *)(param_1 + 0xc)) {
    *(int *)(uVar4 * 4 + *(int *)(param_1 + 0x10)) = param_2;
    *(int *)(param_2 + 0x2c) = param_1;
  }
  fn_82897B28(param_2,*(unsigned int *)(param_1 + 4));
  return;
}

