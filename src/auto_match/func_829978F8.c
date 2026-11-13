extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


__int64 fn_829978F8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar5;
  __int64 lVar4;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar8 = 0;
    uVar12 = lbl_82005710;
    do {
      puVar2 = *(unsigned int **)(iVar8 + *(int *)(param_1 + 0x234));
      if (puVar2 != (unsigned int *)0x0) {
        uVar1 = *puVar2;
        if (((uVar1 & 0xfff00000) != 0x72100000) && ((uVar1 & 0xfff00000) != 0)) {
          uVar3 = uVar1 & 0xfffff;
          iVar10 = (-(unsigned int)((uVar1 & 0xfff00000) != 0x11000000) & uVar3) * 4;
          if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(puVar2[2] + iVar10) * 4 +
                                                   *(int *)(param_1 + 0x14)) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x200) != 0) {
            iVar5 = fn_82963998(0x74);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_829632A0();
            }
            if (iVar5 == 0) {
              return -0x7ff8fff2;
            }
            lVar4 = fn_82963A30(iVar5,uVar3 | 0x10000000,uVar3,uVar3,0);
            if (lVar4 < 0) {
              fn_82BA02A8(iVar5);
              fn_829639F0(iVar5);
              return lVar4;
            }
            lVar4 = fn_829632F0(iVar5,*(unsigned int *)(iVar8 + *(int *)(param_1 + 0x234)));
            if ((int)lVar4 < 0) {
LAB_82997b0c:
              fn_82BA02A8(iVar5);
              fn_829639F0(iVar5);
              return lVar4;
            }
            uVar9 = 0;
            if ((uVar1 & 0xfffff) != 0) {
              iVar11 = 0;
              do {
                iVar6 = fn_82964628(uVar12,param_1,*(unsigned int *)(param_1 + 0x88),0,uVar9);
                uVar9 = uVar9 + 1;
                *(unsigned int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) = 0;
                *(int *)(*(int *)(iVar5 + 0x10) + iVar11) = iVar6;
                *(unsigned int *)(*(int *)(iVar5 + 8) + iVar11) =
                     *(unsigned int *)
                      (*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x234)) + 8) + iVar10);
                iVar11 = iVar11 + 4;
                *(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x234)) + 8) + iVar10) = iVar6
                ;
                iVar10 = iVar10 + 4;
              } while (uVar9 < uVar3);
            }
            if (0x1ff < *(unsigned int *)(param_1 + 0x224)) {
              lVar4 = -0x7ff8fff2;
              goto LAB_82997b0c;
            }
            *(int *)(*(unsigned int *)(param_1 + 0x224) * 4 + *(int *)(param_1 + 0x230)) = iVar5;
            *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
            lVar4 = fn_829644B8(param_1,iVar5);
            if ((int)lVar4 < 0) goto LAB_82997b0c;
          }
        }
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < *(unsigned int *)(param_1 + 0x4c));
  }
  return 0;
}

