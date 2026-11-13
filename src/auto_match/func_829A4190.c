typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265C990();
extern int fn_82975B00();
extern int fn_8299FC30();
extern int fn_829A0220();
extern unsigned int uStack_58;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_829A4190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  bool bVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  __int64 lVar13;
  int aiStack_70 [6];
  unsigned __int64 uStack_58;
  
  bVar6 = false;
  if (*(int *)(param_1 + 0x4c) == 4) {
    lVar13 = 0;
    uVar8 = 0;
    iVar11 = 0;
    piVar12 = aiStack_70 + 3;
    aiStack_70[2] = 0;
    aiStack_70[3] = 0;
    uStack_58 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x234);
      puVar4 = *(unsigned int **)(iVar11 + iVar1);
      if ((puVar4 != (unsigned int *)0x0) && (*puVar4 != 0)) {
        if ((**(unsigned int **)(iVar11 + iVar1) & 0xfff00000) == 0x72100000) {
          iVar10 = *(int *)(iVar11 + iVar1);
          *(unsigned int *)(iVar11 + iVar1) = 0;
        }
        else {
          uVar9 = 0;
          if ((*puVar4 & 0xfff00000) != 0x11000000) {
            uVar9 = **(unsigned int **)(iVar11 + iVar1) & 0xfffff;
          }
          iVar2 = *(int *)(param_1 + 0x88);
          iVar3 = *(int *)(*(int *)(*(int *)(puVar4[2] + uVar9 * 4) * 4 + *(int *)(param_1 + 0x14))
                          + 4);
          iVar10 = *(int *)(iVar11 + iVar1);
          *(unsigned int *)(iVar11 + iVar1) = 0;
          if (iVar3 == iVar2) {
            lVar13 = lVar13 + 1;
            piVar12 = piVar12 + 1;
            *piVar12 = iVar10;
            goto LAB_829a4288;
          }
        }
        *(int *)((int)aiStack_70 + iVar11) = iVar10;
      }
LAB_829a4288:
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar8 < *(unsigned int *)(param_1 + 0x4c));
    uVar8 = 0;
    if (*(unsigned int *)(param_1 + 0x4c) != 0) {
      iVar11 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x230);
        if (((*(unsigned int **)(iVar11 + iVar1) != (unsigned int *)0x0) &&
            (uVar9 = **(unsigned int **)(iVar11 + iVar1), uVar9 != 0)) &&
           ((uVar9 & 0xfff00000) != 0x72100000)) {
          if (*(int *)((int)aiStack_70 + iVar11) != 0) {
            lVar7 = -0x7fffbffb;
            goto LAB_829a4458;
          }
          uVar5 = *(unsigned int *)(iVar11 + iVar1);
          *(unsigned int *)(iVar11 + iVar1) = 0;
          *(unsigned int *)((int)aiStack_70 + iVar11) = uVar5;
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar8 < *(unsigned int *)(param_1 + 0x4c));
    }
    if (((*(unsigned short *)(param_1 + 0xca) < 0x102) ||
        (lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,1), -1 < lVar7)) &&
       ((lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,2), -1 < lVar7 &&
        ((lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,3), -1 < lVar7 &&
         (lVar7 = fn_8299FC30(param_1,aiStack_70 + 4,lVar13,aiStack_70), -1 < lVar7)))))) {
      uVar8 = 0;
      bVar6 = false;
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar12 = aiStack_70 + 4;
        do {
          if (*piVar12 != 0) {
            fn_82975B00(param_1,*(unsigned int *)(*piVar12 + 0x3c),0x11ab,0xffffffff82051a38,
                              *(unsigned char *)(param_1 + 0xcb));
            bVar6 = true;
            lVar7 = -0x7fffbffb;
          }
          uVar8 = uVar8 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar8 < *(unsigned int *)(param_1 + 0x4c));
      }
      if ((int)lVar7 != -0x7fffbffb) {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x4c) != 0) {
          iVar11 = 0;
          do {
            uVar8 = uVar8 + 1;
            *(unsigned int *)(iVar11 + *(int *)(param_1 + 0x234)) =
                 *(unsigned int *)((int)aiStack_70 + iVar11);
            iVar11 = iVar11 + 4;
          } while (uVar8 < *(unsigned int *)(param_1 + 0x4c));
        }
        fn_8265C990(*(unsigned int *)(param_1 + 0x230),0x24810000);
        *(unsigned int *)(param_1 + 0x230) = 0;
        lVar7 = 0;
        *(unsigned int *)(param_1 + 0x224) = 0;
      }
      if (-1 < (int)lVar7) {
        return lVar7;
      }
    }
LAB_829a4458:
    uVar8 = 0;
    if (*(unsigned int *)(param_1 + 0x4c) != 0) {
      do {
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(unsigned int *)(param_1 + 0x4c));
    }
    if (!bVar6) {
      fn_82975B00(param_1,0,0x11ab,0xffffffff820519b8,*(unsigned char *)(param_1 + 0xcb));
    }
  }
  else {
    lVar7 = -0x7fffbffb;
  }
  return lVar7;
}

