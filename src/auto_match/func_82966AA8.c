#define true 1
extern unsigned int *auStack_90;
extern int fn_829632F0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82F68CC0();
extern unsigned int iStack_a0;
extern unsigned int lbl_82005710;


unsigned __int64 fn_82966AA8(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar13;
  __int64 lVar12;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  __int64 lVar17;
  unsigned int *puVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned __int64 uVar22;
  int iStack_a0;
  int aiStack_9c [3];
  unsigned char auStack_90 [144];
  
  iVar6 = (int)((param_2 & 0xffffffff) << 2);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar21 = *param_3;
  uVar19 = 0xffffffff;
  iVar3 = *(int *)(**(int **)(*(int *)(iVar6 + *(int *)(param_1 + 0x18)) + 0x10) * 4 + iVar1);
  iVar2 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar13 = iVar21;
  do {
    iVar4 = *(int *)(iVar13 * 4 + iVar1);
    if ((*(int *)(iVar4 + 0x10) == 0) &&
       ((*(unsigned int *)(iVar4 + 0x48) == 0xffffffff ||
        ((unsigned __int64)*(unsigned int *)(iVar4 + 0x48) < (param_2 & 0xffffffff))))) {
      iVar14 = iVar3;
      iVar9 = iVar2;
      if (iVar3 != -1) {
        do {
          if (iVar14 == *(int *)(iVar4 + 0x14)) break;
          iVar9 = *(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14));
          iVar14 = *(int *)(iVar9 + 0x14);
          iVar9 = *(int *)(iVar9 + 0x18);
        } while (iVar14 != -1);
      }
      if ((iVar14 == *(int *)(iVar4 + 0x14)) && (iVar9 == *(int *)(iVar4 + 0x18))) {
        uVar8 = 1;
        if (1 < (param_4 & 0xffffffff)) {
          piVar11 = param_3;
LAB_82966b9c:
          piVar11 = piVar11 + 1;
          iVar14 = *piVar11;
          do {
            iVar9 = *(int *)(iVar14 * 4 + iVar1);
            if (((unsigned __int64)*(unsigned int *)(iVar9 + 0x10) == (uVar8 & 0xffffffff)) &&
               ((((*(unsigned int *)(iVar9 + 0x48) == 0xffffffff ||
                  ((unsigned __int64)*(unsigned int *)(iVar9 + 0x48) < (param_2 & 0xffffffff))) &&
                 (*(int *)(iVar9 + 4) == *(int *)(iVar4 + 4))) &&
                ((*(int *)(iVar9 + 0xc) == *(int *)(iVar4 + 0xc) &&
                 (*(int *)(iVar9 + 8) == *(int *)(iVar4 + 8))))))) {
              iVar15 = iVar3;
              iVar10 = iVar2;
              if (iVar3 != -1) {
                do {
                  if (iVar15 == *(int *)(iVar9 + 0x14)) break;
                  iVar10 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                  iVar15 = *(int *)(iVar10 + 0x14);
                  iVar10 = *(int *)(iVar10 + 0x18);
                } while (iVar15 != -1);
              }
              if ((iVar15 == *(int *)(iVar9 + 0x14)) && (iVar10 == *(int *)(iVar9 + 0x18)))
              goto LAB_82966c5c;
            }
            iVar14 = *(int *)(iVar9 + 0x34);
            if (iVar14 == *piVar11) break;
          } while( true );
        }
LAB_82966c70:
        iStack_a0 = iVar13;
        if ((uVar8 & 0xffffffff) == (param_4 & 0xffffffff)) {
          uVar16 = 0;
          if ((param_4 & 0xffffffff) != 0) {
            piVar11 = &iStack_a0;
            uVar8 = param_4;
            do {
              if (*(int *)(*(int *)(iVar1 + *piVar11 * 4) + 0x48) != 0) {
                iVar13 = (int)param_2 -
                         *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar11 * 4) + 0x48);
                uVar16 = iVar13 * iVar13 + uVar16;
              }
              piVar11 = piVar11 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (uVar16 < uVar19) {
            fn_82F68CC0(auStack_90,&iStack_a0,(param_4 & 0x3fffffff) << 2);
            uVar19 = uVar16;
          }
        }
      }
    }
    iVar13 = *(int *)(iVar4 + 0x34);
    if (iVar13 == iVar21) {
      if (uVar19 == 0xffffffff) {
        uVar8 = fn_829646C8(param_1,param_4 & 0xffffffff000fffff | 0x10000000,0xffffffffffffffff,
                              0xffffffffffffffff);
        if ((int)uVar8 == -1) {
          return 0xffffffff8007000e;
        }
        lVar17 = (uVar8 & 0x3fffffff) << 2;
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + (int)lVar17);
        fn_829632F0(iVar1,*(unsigned int *)(*(int *)(param_1 + 0x18) + iVar6));
        uVar20 = 0;
        if ((param_4 & 0xffffffff) != 0) {
          iVar21 = 0;
          uVar22 = lbl_82005710;
          do {
            puVar18 = (unsigned int *)(iVar21 + (int)param_3);
            *(unsigned int *)(*(int *)(iVar1 + 8) + iVar21) = *(unsigned int *)(iVar21 + (int)param_3);
            uVar7 = fn_82964628(uVar22,param_1,*(unsigned int *)(param_1 + 0x88),*param_5,uVar20);
            *(unsigned int *)(*(int *)(iVar1 + 0x10) + iVar21) = uVar7;
            if (*(int *)(*(int *)(iVar1 + 0x10) + iVar21) == -1) {
              return 0xffffffff8007000e;
            }
            uVar20 = uVar20 + 1;
            *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + iVar21) * 4 +
                             *(int *)(param_1 + 0x14)) + 0x18) = iVar2;
            *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + iVar21) * 4 +
                             *(int *)(param_1 + 0x14)) + 0x14) = iVar3;
            **(unsigned int **)
              (*(int *)(*(int *)(iVar1 + 0x10) + iVar21) * 4 + *(int *)(param_1 + 0x14)) =
                 **(unsigned int **)
                   (*(int *)(*(int *)(iVar1 + 8) + iVar21) * 4 + *(int *)(param_1 + 0x14));
            *(unsigned int *)
             (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + iVar21) * 4 + *(int *)(param_1 + 0x14)) +
             0x34) = *(unsigned int *)
                      (*(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar21) * 4 +
                               *(int *)(param_1 + 0x14)) + 0x34);
            *(unsigned int *)
             (*(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar21) * 4 + *(int *)(param_1 + 0x14)) + 0x34
             ) = *(unsigned int *)(*(int *)(iVar1 + 0x10) + iVar21);
            puVar5 = (unsigned int *)(*(int *)(iVar1 + 0x10) + iVar21);
            iVar21 = iVar21 + 4;
            *puVar18 = *puVar5;
          } while ((uVar20 & 0xffffffff) < (param_4 & 0xffffffff));
        }
        if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          lVar12 = uVar8 - param_2;
          do {
            uVar8 = uVar8 - 1;
            puVar18 = (unsigned int *)(*(int *)(param_1 + 0x18) + (int)lVar17);
            lVar17 = lVar17 + -4;
            *puVar18 = puVar18[-1];
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        *(int *)((int)((uVar8 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18)) = iVar1;
        *param_5 = *param_5 + 1;
      }
      else {
        fn_82F68CC0(param_3,auStack_90,(param_4 & 0x3fffffff) << 2);
      }
      return 0;
    }
  } while( true );
LAB_82966c5c:
  uVar8 = uVar8 + 1;
  *(int *)((int)aiStack_9c + (-4 - (int)param_3) + (int)piVar11) = iVar14;
  if ((param_4 & 0xffffffff) <= (uVar8 & 0xffffffff)) goto LAB_82966c70;
  goto LAB_82966b9c;
}

