extern unsigned int lbl_82002AE0;


unsigned __int64 fn_829E5618(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  
  if (param_3 == *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    uVar5 = 0;
    fVar3 = lbl_82002AE0 / (float)(unsigned int)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18));
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar8 = 0;
      lVar11 = 5;
      do {
        iVar9 = uVar5 + iVar8;
        iVar2 = *(int *)(param_1 + 0x14);
        iVar6 = *(int *)(param_1 + 0xc) + 1;
        iVar7 = iVar2 * iVar8 + iVar6 * iVar10 * iVar1;
        iVar6 = iVar6 * *(int *)(param_1 + 0x18) + iVar7;
        iVar8 = iVar8 + 1;
        *(float *)(iVar9 * 4 + *(int *)(param_1 + 4)) =
             (((*(float *)((iVar2 + iVar6) * 8 + param_2) - *(float *)(iVar6 * 8 + param_2)) -
              *(float *)((iVar2 + iVar7) * 8 + param_2)) + *(float *)(iVar7 * 8 + param_2)) * fVar3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar5 = uVar5 + 5;
      iVar10 = iVar10 + 1;
    } while (uVar5 < 0x19);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}

