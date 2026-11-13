extern int fn_82250A18();
extern int fn_822922E8();
extern int fn_8229A000();
extern int fn_8229F5A8();
extern int fn_8229F758();
extern int fn_822ABA88();
extern int fn_82337B90();
extern int fn_82337BE0();
extern int fn_82450238();
extern int fn_824CD030();
extern int fn_82560708();
extern unsigned int lbl_82005748;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


void fn_8244DF78(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  
  iVar4 = **(int **)(param_1 + 0x40);
  uVar7 = (*(int **)(param_1 + 0x40))[0x81];
  if ((int)uVar7 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc)) {
    iVar6 = uVar7 * 0x18;
    dVar9 = (double)ltcg_pool_0_0f;
    dVar10 = (double)lbl_82005748;
    iVar5 = uVar7 << 2;
    do {
      piVar8 = *(int **)(**(int **)(iVar4 + 8) + iVar5);
      iVar3 = fn_822ABA88(*(unsigned int *)(piVar8[4] * 4 + *piVar8),0);
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      if (((*(char *)(iVar4 + 4) == '\0') && (iVar4 = fn_82337B90(iVar3), iVar4 == 0)) &&
         (iVar4 = fn_82337BE0(iVar3), iVar4 == 0)) break;
      piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x44) + 0xb8) + iVar6);
      if ((*(int *)(iVar3 + 0x24) != 0) && (*piVar8 == 0)) {
        piVar8[5] = (int)((double)*(float *)(param_1 + 0x38) * dVar10);
        iVar4 = fn_824CD030(*(unsigned int *)(iVar3 + 0x24));
        if (iVar4 != 0) {
          iVar4 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar4 = fn_82250A18();
          }
          if (*(char *)(iVar4 + 4) == '\0') {
            iVar4 = uVar7 + (((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0) &
                            0x7fffffff) * -2;
          }
          else {
            iVar4 = 0;
          }
          fn_8229F758(dVar9,(double)(__int64)(piVar8[5] / 100),
                            (double)(__int64)(piVar8[5] % 100),
                            *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
          uVar2 = fn_82450238(param_1,iVar3);
          fn_822922E8(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4),iVar4,uVar2);
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x18;
      iVar4 = **(int **)(param_1 + 0x40);
    } while ((int)uVar7 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc));
  }
  iVar4 = *(int *)(param_1 + 0x44);
  if ((*(float *)(iVar4 + 0x28) < *(float *)(param_1 + 0x38)) && (*(char *)(iVar4 + 5) != '\0')) {
    *(unsigned char *)(iVar4 + 5) = 0;
    iVar4 = fn_82560708();
    if (iVar4 == 0) {
      uVar1 = *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68);
    }
    else {
      iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(unsigned int *)(iVar4 + 0x50));
      fn_8229A000(*(unsigned int *)(iVar4 + 0x5c));
      iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(unsigned int *)(iVar4 + 0x54));
      uVar1 = *(unsigned int *)(iVar4 + 0x60);
    }
    fn_8229A000(uVar1);
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = fn_82560708();
    iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    if (iVar5 == 0) {
      uVar1 = *(unsigned int *)(iVar4 + 0x68);
    }
    else {
      fn_8229A000(*(unsigned int *)(iVar4 + 0x6c));
      uVar1 = *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70);
    }
    fn_8229A000(uVar1);
    fn_8229F5A8(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
  }
  return;
}

