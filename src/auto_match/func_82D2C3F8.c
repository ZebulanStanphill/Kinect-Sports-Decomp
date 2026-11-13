extern unsigned int *auStack_270;
extern unsigned int *auStack_290;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int iStack_27c;
extern unsigned int *lbl_8323B464;
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6cc;
extern unsigned int uRam8323b6d0;
extern unsigned int uStack_274;


unsigned int * fn_82D2C3F8(unsigned int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 in_r0;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned char bVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int *piVar15;
  __int64 lVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned int auStack_290 [4];
  int *piStack_280;
  int iStack_27c;
  int *piStack_278;
  unsigned int uStack_274;
  unsigned char auStack_270 [496];
  
  piVar15 = *(int **)(((param_4 >> 0xb) * 0x10 + (param_3 >> 0xb) + 0x97) * 4 + param_2);
  if (piVar15 == (int *)0x0) {
    piVar15 = *(int **)(param_2 + 0x34);
  }
  if (*(int **)(param_2 + 0x34) != (int *)0x0) {
    piVar1 = *(int **)(param_2 + 0x34);
    do {
      uVar13 = 0;
      iVar7 = *(int *)(piVar15[2] + 0xc);
      iVar2 = *(int *)(piVar15[2] + 8);
      lVar16 = (__int64)(*(int *)(piVar15[3] + 8) - iVar2) * (__int64)(param_4 - iVar7) -
               (__int64)(*(int *)(piVar15[3] + 0xc) - iVar7) * (__int64)(param_3 - iVar2);
      while (lVar16 < 0) {
        uVar18 = (unsigned __int64)(unsigned int)piVar15[(int)uVar13 + 5] & 3;
        piVar15 = (int *)(piVar15[(int)uVar13 + 5] & 0xfffffffc);
        uVar13 = -(unsigned __int64)(uVar18 != 2) & uVar18 + 1;
        iVar7 = *(int *)(piVar15[(int)uVar13 + 2] + 0xc);
        iVar2 = *(int *)(piVar15[(int)uVar13 + 2] + 8);
        lVar16 = (__int64)
                 (*(int *)(piVar15[(-(unsigned int)(uVar13 != 2) & (int)uVar13 + 1U) + 2] + 8) - iVar2) *
                 (__int64)(param_4 - iVar7) -
                 (__int64)
                 (*(int *)(piVar15[(-(unsigned int)(uVar13 != 2) & (int)uVar13 + 1U) + 2] + 0xc) - iVar7) *
                 (__int64)(param_3 - iVar2);
      }
      uVar18 = (unsigned __int64)*(unsigned int *)(param_2 + 0x38);
      if (0 < (int)*(unsigned int *)(param_2 + 0x38)) {
        do {
          piStack_280 = piVar15;
          lVar14 = 2;
          uVar8 = -(unsigned __int64)(uVar13 != 2) & uVar13 + 1;
          iStack_27c = (int)uVar8;
          if (uVar13 != 0) {
            lVar14 = uVar13 - 1;
          }
          uStack_274 = (unsigned int)lVar14;
          iVar5 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + (int)piStack_280);
          iVar7 = *(int *)(piStack_280[iStack_27c + 2] + 0xc);
          iVar6 = *(int *)((int)(((-(unsigned __int64)(lVar14 != 2) & lVar14 + 1U) + 2 & 0xffffffff) << 2)
                          + (int)piStack_280);
          iVar2 = *(int *)(piStack_280[iStack_27c + 2] + 8);
          iVar3 = *(int *)(iVar5 + 0xc);
          iVar5 = *(int *)(iVar5 + 8);
          uVar11 = (__int64)
                   (*(int *)(piStack_280[(-(unsigned int)(uVar8 != 2) & iStack_27c + 1U) + 2] + 8) - iVar2)
                   * (__int64)(param_4 - iVar7) -
                   (__int64)
                   (*(int *)(piStack_280[(-(unsigned int)(uVar8 != 2) & iStack_27c + 1U) + 2] + 0xc) - iVar7
                   ) * (__int64)(param_3 - iVar2);
          uVar9 = (__int64)(*(int *)(iVar6 + 8) - iVar5) * (__int64)(param_4 - iVar3) -
                  (__int64)(*(int *)(iVar6 + 0xc) - iVar3) * (__int64)(param_3 - iVar5);
          auStack_290[0] = (unsigned int)uVar11;
          auStack_290[1] = (unsigned int)uVar9;
          uVar8 = ((uVar9 & 0xffffffff) >> 0x1f) + (__int64)((int)auStack_290[0] >> 0x1f) +
                  (unsigned __int64)(uVar9 <= uVar11);
          iVar7 = (int)((uVar8 & 0xffffffff) << 3);
          uVar10 = *(unsigned int *)((int)auStack_290 + (int)((uVar8 & 0xffffffff) << 2));
          if (-1 < (int)uVar10) {
            bVar12 = (-(uVar9 == 0) & 4U) + (-(uVar11 == 0) & 2U) + ((int)lVar16 == 0);
            if (bVar12 < 7) {
              uVar17 = (unsigned int)uVar13;
              if (bVar12 == 1) {
                *param_1 = 1;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 2) {
                *param_1 = 1;
                param_1[2] = iStack_27c;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 3) {
                *param_1 = 2;
                param_1[2] = iStack_27c;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 4) {
                *param_1 = 1;
                param_1[2] = uStack_274;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 5) {
                *param_1 = 2;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 0) {
                *param_1 = 0;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else {
                *param_1 = 2;
                param_1[2] = uStack_274;
                param_1[1] = piStack_280;
              }
            }
            else {
              uVar10 = uRam8323b6d0 & 1;
              if ((uRam8323b6d0 & 1) == 0) {
                uRam8323b6d0 = uRam8323b6d0 | 1;
                uRam8323b6cc = 0;
                uRam8323b6c8 = uVar10;
              }
              *param_1 = 3;
              uVar10 = uRam8323b6c8;
              param_1[2] = uRam8323b6cc;
              param_1[1] = uVar10;
            }
            return param_1;
          }
          lVar16 = -(unsigned __int64)uVar10;
          uVar10 = *(unsigned int *)((*(int *)((int)&iStack_27c + iVar7) + 5) * 4 +
                            *(int *)((int)&piStack_280 + iVar7));
          uVar13 = (unsigned __int64)uVar10 & 3;
          uVar18 = uVar18 - 1;
          piVar15 = (int *)(uVar10 & 0xfffffffc);
          piStack_278 = piStack_280;
        } while (uVar18 != 0);
      }
      piVar4 = (int *)*piVar1;
      piVar15 = piVar1;
      piVar1 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  fn_82CEE578(auStack_290,auStack_270,0x200);
  fn_82CEDB38(auStack_290,0xffffffff821349d8);
  iVar7 = (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0xffffffffb8c66b5f,auStack_270,0xffffffff82134970,0x32c);
  if (iVar7 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_290);
}

