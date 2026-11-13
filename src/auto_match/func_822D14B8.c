extern int fn_822ABA88();
extern int fn_822CFA38();
extern unsigned int lbl_83265A28;


void fn_822D14B8(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar4;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  uVar5 = 0;
  uVar2 = (unsigned int)((unsigned __int64)LZCOUNT(*(unsigned int *)(*(unsigned int *)(param_1 + 0x14) + 0x2c)) >> 3) & 4;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + uVar2);
  uVar8 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (unsigned __int64)uVar8;
  if (*(int *)(uVar8 + 8) != 1) {
    iVar4 = fn_822ABA88(uVar7,0);
    uVar8 = (unsigned int)(*(int *)(iVar4 + 0x24) != 0);
    iVar4 = fn_822ABA88(uVar7,1);
    if (uVar8 == (*(int *)(iVar4 + 0x24) != 0)) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar5 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
    }
    else if (uVar8 == 0) {
      lVar3 = fn_822CFA38(uVar6,7);
      uVar5 = (unsigned int)(lVar3 != 0);
    }
    else {
      iVar4 = fn_822CFA38(uVar6,7);
      uVar5 = (unsigned int)(iVar4 == 0);
    }
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + uVar2);
  }
  fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar5);
  return;
}

