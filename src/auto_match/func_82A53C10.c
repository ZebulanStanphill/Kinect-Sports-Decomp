extern int fn_82A6B560();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82A53C10(int *param_1,__int64 param_2,unsigned short *param_3,__int64 param_4)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned short uVar9;
  int iVar8;
  unsigned int uVar10;
  int iVar11;
  __int64 lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int aiStack_a0 [2];
  __int64 lStack_98;
  __int64 lStack_90;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x5a];
  uVar1 = *param_3;
  iVar4 = param_1[0x6b];
  uVar6 = 0;
  uVar10 = (unsigned int)*(unsigned short *)(iVar2 + 0x22);
  iVar11 = 0;
  iVar8 = 0;
  uVar9 = 0;
  if (param_1[0x58] == 0) {
    uVar6 = 0;
  }
  else {
    if (param_1[0x6a] != 0) {
      uVar10 = 6;
    }
    iVar7 = 0;
    if (uVar1 != 0) {
      dVar15 = (double)lbl_82002C5C;
      dVar14 = (double)lbl_821AAD20;
      do {
        lVar12 = 0;
        if (uVar10 != 0) {
          do {
            iVar5 = (**(int (***)())(iVar2 + 0x20c))
                              (param_2,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),
                               lVar12);
            lStack_98 = (__int64)iVar5;
            iVar5 = (int)lVar12;
            lVar12 = lVar12 + 1;
            *(float *)((iVar5 * param_1[0x6c] + iVar11) * 4 + *(int *)(iVar4 + 0x94)) =
                 (float)lStack_98;
          } while ((int)lVar12 < (int)uVar10);
        }
        iVar11 = iVar11 + 1;
        param_2 = (__int64)*(int *)(iVar2 + 0x58) * (__int64)(int)uVar10 + param_2;
        if ((iVar11 == param_1[0x6c]) || (iVar7 == uVar1 - 1)) {
          uVar6 = fn_82A6B560(param_1[0x6b],iVar11,aiStack_a0);
          if (iVar11 < aiStack_a0[0]) {
            return 0xffffffff80004005;
          }
          iVar5 = 0;
          iVar11 = aiStack_a0[0];
          if (0 < aiStack_a0[0]) {
            do {
              lVar12 = 0;
              if (0 < iVar3) {
                do {
                  dVar13 = (double)*(float *)(((int)lVar12 * param_1[0x6c] + iVar5) * 4 +
                                             *(int *)(iVar4 + 0x94));
                  if (dVar14 <= dVar13) {
                    dVar13 = dVar13 + dVar15;
                  }
                  else {
                    dVar13 = dVar13 - dVar15;
                  }
                  lStack_90 = (__int64)(int)dVar13;
                  (**(int (***)())(iVar2 + 0x208))((int)dVar13,param_4,iVar2,lVar12);
                  lVar12 = lVar12 + 1;
                  iVar11 = aiStack_a0[0];
                } while ((int)lVar12 < iVar3);
              }
              iVar5 = iVar5 + 1;
              param_4 = (__int64)*(int *)(iVar2 + 0x58) * (__int64)iVar3 + param_4;
            } while (iVar5 < iVar11);
          }
          iVar8 = iVar11 + iVar8;
          iVar11 = 0;
        }
        uVar9 = (unsigned short)iVar8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(unsigned int)uVar1);
    }
    *param_3 = uVar9;
  }
  return uVar6;
}

