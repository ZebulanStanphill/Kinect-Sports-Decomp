extern unsigned int lbl_82192F34;
extern float lbl_82193CC0;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_824E0760(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  unsigned short uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  unsigned short *puVar7;
  int iVar8;
  int iVar9;
  unsigned short *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = param_2[1];
  if ((iVar11 < 0) || (0xef < *(int *)(param_3 + 4))) {
LAB_824e08f0:
    uVar5 = 0;
  }
  else {
    iVar2 = *param_2;
    param_4 = iVar11 * param_5 * 2 + param_4;
    uVar6 = param_1 + 1;
    uVar1 = *(unsigned short *)(iVar2 * 2 + param_4);
    fVar4 = ltcg_pool_0_0f;
    if ((uVar1 & 7) == uVar6) {
      fVar4 = (float)(uVar1 >> 3) * lbl_82193CC0;
    }
    for (; iVar11 < *(int *)(param_3 + 4); iVar11 = iVar11 + 1) {
      puVar10 = (unsigned short *)(iVar2 * 2 + param_4);
      if ((((*puVar10 & 7) != uVar6) ||
          (fVar3 = (float)(*puVar10 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34)) ||
         (iVar12 = iVar2, fVar4 + lbl_82192F34 < fVar3)) {
        iVar9 = 0;
        iVar8 = iVar2;
        puVar7 = puVar10;
        while ((((iVar8 < 1 || ((*puVar10 & 7) != uVar6)) ||
                ((fVar3 = (float)(*puVar10 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34 ||
                 (iVar12 = iVar8, fVar4 + lbl_82192F34 < fVar3)))) &&
               (((iVar12 = iVar9 + iVar2, 0x13f < iVar12 || ((*puVar7 & 7) != uVar6)) ||
                ((fVar3 = (float)(*puVar7 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34 ||
                 (fVar4 + lbl_82192F34 < fVar3))))))) {
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + -1;
          puVar10 = puVar10 + -1;
          puVar7 = puVar7 + 1;
          if (4 < iVar9) goto LAB_824e08f0;
        }
        if (iVar12 == iVar2) goto LAB_824e08f0;
      }
      param_4 = param_5 * 2 + param_4;
      iVar2 = iVar12;
    }
    uVar5 = 1;
  }
  return uVar5;
}

