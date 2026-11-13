extern int fn_822ABA88();
extern int fn_8242C6A0();
extern int fn_8243E578();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193AD8;
extern unsigned int ltcg_pool_0_0f;


void fn_8243B6E8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  __int64 lVar7;
  unsigned char *puVar8;
  unsigned __int64 uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
  if ((*(int *)(iVar1 + 0xa0) != 0) && (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) == 1)) {
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                      *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
    }
    puVar8 = &lbl_82193AD8;
    lVar7 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x40) + 0x120;
    dVar10 = (double)ltcg_pool_0_0f;
    if (*(int *)(*(unsigned int *)(iVar5 + 0x40) + 0xf8) != 0) {
      dVar10 = (double)lbl_82192734;
    }
    dVar11 = (double)lbl_82192734;
    if (*(int *)(*(int *)(iVar5 + 0x40) + 0xf8) == 0) {
      dVar11 = (double)ltcg_pool_0_0f;
    }
    iVar5 = fn_8243E578(dVar10,lVar7,0);
    iVar6 = fn_8243E578(lVar7,1);
    dVar10 = extraout_f1;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x4c) == 1)) {
      dVar10 = (double)((float)(__int64)*(int *)(iVar5 + 0x48) * *(float *)(puVar8 + 0x18));
    }
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x4c) == 1)) {
      dVar11 = (double)((float)(__int64)*(int *)(iVar6 + 0x48) * *(float *)(puVar8 + 0x18));
    }
    uVar4 = fn_822ABA88(dVar10,*(unsigned int *)
                                 ((*(int **)**(unsigned int **)(iVar1 + 8))[4] * 4 +
                                 **(int **)**(unsigned int **)(iVar1 + 8)),0);
    fn_8242C6A0(iVar1,uVar4);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8);
    uVar9 = (unsigned __int64)uVar2;
    piVar3 = *(int **)(**(int **)(uVar2 + 8) + 4);
    uVar4 = fn_822ABA88(dVar11,*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
    fn_8242C6A0(uVar9,uVar4);
  }
  return;
}

