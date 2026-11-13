extern int fn_829BCB40();
extern int fn_829BCCA8();
extern int fn_829BD4C0();
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int lbl_820548B8;
extern unsigned int lbl_820550C8;
extern unsigned int lbl_82055108;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_829BD7B8(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar9;
  unsigned __int64 uVar7;
  int iVar10;
  unsigned __int64 uVar8;
  int iVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  int iVar17;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  unsigned int uStack_84;
  int iStack_80;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  iVar11 = *(int *)(param_1 + 0x198);
  uVar2 = *(unsigned int *)(param_1 + 0x1a0);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar9 = fn_829BD4C0(), iVar9 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        uVar15 = *(unsigned int *)(param_1 + 0x194);
        uVar14 = (unsigned __int64)uVar15;
        iVar9 = *param_2;
        uStack_90 = **(unsigned int **)(param_1 + 0x18);
        uStack_8c = (*(unsigned int **)(param_1 + 0x18))[1];
        iVar10 = *(int *)(iVar1 + 0xc);
        uVar12 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10);
        iVar3 = *(int *)(iVar1 + 0x3c);
        iVar13 = 0;
        iStack_80 = param_1;
        while ((int)uVar15 <= iVar11) {
          if ((int)uVar12 < 8) {
            iVar10 = fn_829BCB40(&uStack_90,iVar10,uVar12,0);
            if (iVar10 == 0) goto LAB_829bd7fc;
            uVar12 = (unsigned __int64)uStack_84;
            iVar10 = iStack_88;
            if (7 < (int)uStack_84) goto LAB_829bd8a4;
            uVar7 = 1;
LAB_829bd8d8:
            uVar8 = fn_829BCCA8(&uStack_90,iVar10,uVar12,iVar3,uVar7);
            if ((int)uVar8 < 0) goto LAB_829bd7fc;
            uVar12 = (unsigned __int64)uStack_84;
            iVar10 = iStack_88;
          }
          else {
LAB_829bd8a4:
            uVar5 = iVar10 >> ((int)uVar12 - 8U & 0x3f) & 0xff;
            uVar15 = *(unsigned int *)((uVar5 + 0x24) * 4 + iVar3);
            if (uVar15 == 0) {
              uVar7 = 9;
              goto LAB_829bd8d8;
            }
            uVar12 = uVar12 - uVar15;
            uVar8 = (unsigned __int64)*(unsigned char *)(uVar5 + iVar3 + 0x490);
          }
          uVar6 = uVar8 & 0xf;
          uVar15 = (int)uVar8 >> 4;
          lVar16 = (__int64)(int)uVar15;
          iVar17 = (int)uVar6;
          if (iVar17 == 0) {
            if (uVar15 != 0xf) {
              iVar13 = 1 << (uVar15 & 0x3f);
              if (uVar15 != 0) {
                if ((int)uVar12 < (int)uVar15) {
                  iVar11 = fn_829BCB40(&uStack_90,iVar10,uVar12,lVar16);
                  if (iVar11 == 0) goto LAB_829bd7fc;
                  uVar12 = (unsigned __int64)uStack_84;
                  iVar10 = iStack_88;
                }
                uVar12 = uVar12 - lVar16;
                iVar13 = (iVar10 >> ((unsigned int)uVar12 & 0x3f) & iVar13 - 1U) + iVar13;
              }
              iVar13 = iVar13 + -1;
              break;
            }
            uVar14 = uVar14 + 0xf;
          }
          else {
            uVar14 = lVar16 + uVar14;
            if ((int)uVar12 < iVar17) {
              iVar10 = fn_829BCB40(&uStack_90,iVar10,uVar12,uVar6);
              if (iVar10 == 0) goto LAB_829bd7fc;
              uVar12 = (unsigned __int64)uStack_84;
              iVar10 = iStack_88;
            }
            uVar12 = uVar12 - uVar6;
            iVar4 = (int)((uVar8 & 0xf) << 2);
            uVar15 = (1 << iVar17) - 1U & iVar10 >> ((unsigned int)uVar12 & 0x3f);
            if ((int)uVar15 < *(int *)(&lbl_820550C8 + iVar4)) {
              uVar15 = *(int *)(&lbl_82055108 + iVar4) + uVar15;
            }
            *(short *)(*(int *)(&lbl_820548B8 + (int)((uVar14 & 0xffffffff) << 2)) * 2 + iVar9) =
                 (short)(uVar15 << (uVar2 & 0x3f));
          }
          uVar14 = uVar14 + 1;
          uVar15 = (unsigned int)uVar14;
        }
        **(unsigned int **)(param_1 + 0x18) = uStack_90;
        *(unsigned int *)(*(int *)(param_1 + 0x18) + 4) = uStack_8c;
        *(int *)(iVar1 + 0xc) = iVar10;
        *(int *)(iVar1 + 0x10) = (int)uVar12;
      }
      else {
        iVar13 = *(int *)(iVar1 + 0x14) + -1;
      }
      *(int *)(iVar1 + 0x14) = iVar13;
    }
    uVar7 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
LAB_829bd7fc:
    uVar7 = 0;
  }
  return uVar7;
}

