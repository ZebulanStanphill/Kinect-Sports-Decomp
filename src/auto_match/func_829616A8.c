extern int fn_829632F0();
extern int fn_82963318();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;


unsigned __int64 fn_829616A8(int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  int aiStack_80;
  
  iVar11 = 0;
  uVar6 = 0xffffffff;
  iVar4 = -1;
  uVar13 = 0;
  if (param_1[3] != 0) {
    iVar5 = 0;
    uVar17 = lbl_82005710;
    do {
      param_1[0x40] = uVar13;
      puVar1 = *(unsigned int **)(param_1[6] + iVar5);
      param_1[0x41] = (int)puVar1;
      if ((*puVar1 & 0xfff00000) != 0) {
        uVar14 = 0;
        uVar12 = (unsigned __int64)puVar1[1] / ((unsigned __int64)*puVar1 & 0xfffff);
        trapWord(6,(unsigned __int64)*puVar1 & 0xfffff,0);
        if ((int)uVar12 != 0) {
          do {
            uVar2 = fn_82963318(param_1[0x41],uVar14,&aiStack_80);
            uVar15 = 0;
            if (uVar2 != 0) {
              iVar16 = 0;
              do {
                iVar3 = *(int *)(*(int *)(iVar16 + aiStack_80) * 4 + param_1[5]);
                uVar8 = *(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + param_1[4]) + 4);
                if (((((uVar8 & 0x10) == 0) || ((uVar8 & 0x200) != 0)) ||
                    (iVar3 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(iVar3 + 0x6c)),
                    iVar3 != 0x11)) ||
                   (((uVar14 & 0xffffffff) == 0 &&
                    ((*(unsigned int *)param_1[0x41] & 0xfff00000) == 0x30000000)))) break;
                if (iVar4 == -1) {
                  uVar7 = 0;
                  uVar8 = 0;
                  if (param_1[2] != 0) {
                    iVar11 = 0;
                    do {
                      if ((param_1[0x22] == *(int *)(*(int *)(iVar11 + param_1[5]) + 4)) &&
                         (uVar9 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar11 + param_1[5]) + 0xc),
                         (uVar7 & 0xffffffff) <= uVar9)) {
                        uVar7 = uVar9 + 1;
                      }
                      uVar8 = uVar8 + 1;
                      iVar11 = iVar11 + 4;
                    } while (uVar8 < (unsigned int)param_1[2]);
                  }
                  iVar4 = fn_82964628(uVar17,param_1,param_1[0x22],uVar7,0);
                  if (iVar4 == -1) {
                    return 0xffffffff8007000e;
                  }
                  fn_829640A0(*(unsigned int *)(iVar4 * 4 + param_1[5]),
                               *(unsigned int *)(*(int *)(iVar16 + aiStack_80) * 4 + param_1[5]));
                  *(unsigned int *)(*(int *)(iVar4 * 4 + param_1[5]) + 0x6c) = 0xffffffff;
                  iVar11 = param_1[0x41];
                  uVar6 = *(unsigned int *)(iVar16 + aiStack_80);
                }
                uVar15 = uVar15 + 1;
                *(int *)(iVar16 + aiStack_80) = iVar4;
                iVar16 = iVar16 + 4;
              } while ((uVar15 & 0xffffffff) < (uVar2 & 0xffffffff));
            }
            uVar14 = uVar14 + 1;
          } while ((uVar14 & 0xffffffff) < uVar12);
        }
      }
      uVar13 = uVar13 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar13 < (unsigned int)param_1[3]);
    if (iVar4 != -1) {
      iVar5 = fn_829646C8(param_1,0x30000001,3,1);
      if (iVar5 != -1) {
        iVar5 = *(int *)(iVar5 * 4 + param_1[6]);
        fn_829632F0(iVar5,iVar11);
        uVar17 = lbl_82005758;
        **(int **)(iVar5 + 0x10) = iVar4;
        **(unsigned int **)(iVar5 + 8) = uVar6;
        uVar6 = fn_82964628(uVar17,param_1,param_1[0x1e],0,0);
        *(unsigned int *)(*(int *)(iVar5 + 8) + 4) = uVar6;
        uVar6 = fn_82964628(lbl_8200E890,param_1,param_1[0x1e],0,0);
        *(unsigned int *)(*(int *)(iVar5 + 8) + 8) = uVar6;
        if ((*(int *)(*(int *)(iVar5 + 8) + 4) != -1) && (*(int *)(*(int *)(iVar5 + 8) + 8) != -1))
        {
          uVar13 = param_1[3];
          if (1 < (unsigned __int64)uVar13) {
            lVar10 = (unsigned __int64)uVar13 - 1;
            iVar11 = uVar13 << 2;
            do {
              iVar11 = iVar11 + -4;
              *(unsigned int *)(param_1[6] + iVar11) = ((unsigned int *)(param_1[6] + iVar11))[-1];
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          *(int *)param_1[6] = iVar5;
          return 0;
        }
      }
      return 0xffffffff8007000e;
    }
  }
  return 0;
}

