typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_520;
extern unsigned int *auStack_9a0;
extern int fn_82C75948();
extern int fn_82C8B9D8();
extern int fn_82C9B1F8();
extern int fn_82CC46D0();
extern int fn_830B9FA0();
extern int fn_830BA0B0();
extern int fn_830D95E8();
extern int fn_830D96C8();
extern int fn_830DBB28();
extern int fn_830E2088();
extern int fn_830E2148();
extern unsigned int iStack00000014;
extern unsigned int iStack_9c8;
extern unsigned int iStack_9d0;
extern unsigned int iStack_9d4;
extern unsigned int iStack_9dc;
extern unsigned int iStack_9e4;
extern unsigned int uStack_9b0;
extern unsigned int uStack_9b4;
extern unsigned int uStack_9b8;
extern unsigned int uStack_9d8;
extern unsigned int uStack_9e8;
extern unsigned int uStack_9ec;


unsigned __int64 fn_830B90E8(int param_1,int param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  short sVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned short uVar10;
  bool bVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned int uVar19;
  unsigned __int64 *puVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int *puVar23;
  __int64 lVar24;
  int iVar27;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned int uVar28;
  __int64 lVar29;
  int iVar32;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  short *psVar33;
  unsigned short *puVar34;
  unsigned int uVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned int uVar38;
  unsigned __int64 uVar39;
  int *piVar40;
  __int64 lVar41;
  int iStack00000014;
  unsigned int uStack_9ec;
  unsigned int uStack_9e8;
  int iStack_9e4;
  int iStack_9dc;
  unsigned int uStack_9d8;
  int iStack_9d4;
  int iStack_9d0;
  short *psStack_9cc;
  int iStack_9c8;
  unsigned __int64 *puStack_9c4;
  unsigned int uStack_9b8;
  unsigned int uStack_9b4;
  unsigned int uStack_9b0;
  unsigned char auStack_9a0 [1152];
  unsigned char auStack_520 [1312];
  
  puStack_9c4 = *(unsigned __int64 **)(param_2 + 0x520);
  bVar11 = true;
  if ((((*(int *)(param_1 + 0xecc) == 0) || (*(int *)(param_1 + 0xed0) == 0)) ||
      (*(int *)(param_1 + 0xed4) == 0)) ||
     (psStack_9cc = *(short **)(param_1 + 0xc10), psStack_9cc == (short *)0x0)) {
    uVar12 = 1;
  }
  else {
    iStack_9d0 = 0;
    iStack_9c8 = 0;
    iStack_9d4 = 0;
    param_3[5] = *(int *)(param_1 + 0x56f8);
    param_3[6] = *(int *)(param_1 + 0x5704);
    param_3[9] = *(int *)(param_2 + 0x268);
    param_3[10] = *(int *)(param_2 + 0x1ac);
    param_3[0xb] = *(int *)(param_2 + 0x48c);
    *param_3 = 0;
    param_3[1] = 0;
    *(unsigned short *)(param_3 + 4) = 0;
    *(unsigned short *)((int)param_3 + 0x12) = 0;
    uVar2 = *(unsigned short *)(param_2 + 0x4a);
    uStack_9b0 = (unsigned int)(*(unsigned short *)(param_2 + 0x34) >> 1);
    uVar7 = (unsigned int)(*(unsigned short *)(param_2 + 0x32) >> 1);
    iStack_9dc = 0;
    uVar22 = (unsigned int)uVar2;
    iStack00000014 = param_1;
    if (uStack_9b0 != 0) {
      do {
        *(unsigned short *)((int)param_3 + 0x12) = 0;
        param_3[2] = iStack_9d0;
        param_3[3] = iStack_9c8;
        if ((*(int *)(iStack00000014 + 0x55b4) != 0) &&
           (*(int *)(*(int *)(param_2 + 0x518) + iStack_9dc * 4) != 0)) {
          bVar11 = true;
        }
        uStack_9d8 = 0;
        if (uVar7 != 0) {
          do {
            puVar20 = puStack_9c4 + 1;
            uVar37 = *puStack_9c4;
            uVar16 = uVar37 >> 0x36 & 3 | uVar37 >> 0x3d & 4;
            lVar17 = ((unsigned __int64)CONCAT24(uVar2,uVar22) & 0x7fffffff) * 2;
            iVar9 = (int)uVar16;
            lVar41 = 2;
            lVar24 = ((__int64)*(short *)(((uStack_9d8 & 7) + 0x24c) * 2 + param_2) & 0x3ffffffU) *
                     0x40;
            puVar23 = (unsigned int *)(param_2 + 0x1d8);
            uVar39 = (unsigned __int64)*(unsigned char *)(iVar9 + param_2 + 0x6d7);
            lVar18 = ((__int64)*(short *)(((uStack_9d8 & 0xf) + 0x254) * 2 + param_2) & 0x3ffffffU)
                     * 0x40;
            do {
              if ((uVar39 & 1) != 0) {
                lVar29 = (unsigned __int64)(unsigned int)param_3[2] + (unsigned __int64)puVar23[-2];
                dataCacheBlockTouch(lVar24 + lVar29);
                dataCacheBlockTouch(lVar24 + (unsigned __int64)uVar22 + lVar29);
                dataCacheBlockTouch(lVar24 + lVar17 + lVar29);
                dataCacheBlockTouch(lVar24 + lVar17 + (unsigned __int64)uVar22 + lVar29);
                dataCacheBlockTouch(lVar18 + (unsigned __int64)(unsigned int)param_3[3] + (unsigned __int64)*puVar23);
                dataCacheBlockTouch(lVar18 + (unsigned __int64)(unsigned int)param_3[3] + (unsigned __int64)puVar23[2]);
              }
              puVar23 = puVar23 + 1;
              uVar39 = uVar39 >> 1;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
            iVar15 = iStack_9d4 * 4;
            uVar13 = *(unsigned int *)(iVar15 + *(int *)(param_2 + 0x6f8));
            if (uVar13 != 0x4000) {
              uVar14 = *(unsigned int *)(iVar15 + *(int *)(param_2 + 0x6fc));
              if (*(char *)(param_2 + 0x1e) != '\0') {
                uVar13 = (uVar13 & 0xffff7fff) << 1;
                uVar14 = (uVar14 & 0xffff7fff) << 1;
              }
              sVar3 = *psStack_9cc;
              iVar32 = (int)psStack_9cc[1] * *(int *)(param_2 + 0x63c);
              iVar27 = (int)sVar3 * *(int *)(param_2 + 0x63c);
              iVar8 = iVar32 + ((int)psStack_9cc[1] & 0xffffffU) * -0x100;
              if (*(int *)(param_2 + 0x88c) == 0) {
                uStack_9ec = CONCAT22((short)((unsigned int)(iVar27 + 0x80) >> 8),
                                      (short)((unsigned int)(iVar32 + 0x80) >> 8));
                uStack_9e8 = CONCAT22((short)((unsigned int)(iVar27 + sVar3 * -0x100 + 0x80) >> 8),
                                      (short)((unsigned int)(iVar8 + 0x80) >> 8));
              }
              else {
                uStack_9ec = CONCAT22((short)(iVar27 + 0xff >> 9) << 1,
                                      (short)(iVar32 + 0xff >> 9) << 1);
                uStack_9e8 = CONCAT22((short)(iVar27 + sVar3 * -0x100 + 0xff >> 9) << 1,
                                      (short)(iVar8 + 0xff >> 9) << 1);
              }
              uVar28 = param_3[4];
              iVar8 = *(int *)(param_2 + 0x6e4);
              iVar27 = *(int *)(param_2 + 0x6f0);
              if ((((iVar27 + (uVar28 & 0x7ffffff) * -0x20) - uStack_9ec |
                   iVar8 + (uStack_9ec & 0x8000) * -2 + uVar28 * 0x20 + uStack_9ec) & 0x80008000) !=
                  0) {
                uStack_9ec = fn_82C9B1F8(param_2,2,uStack_9ec,param_3);
              }
              if ((((iVar27 + (uVar28 & 0x7ffffff) * -0x20) - uStack_9e8 |
                   iVar8 + (uStack_9e8 & 0x8000) * -2 + uVar28 * 0x20 + uStack_9e8) & 0x80008000) !=
                  0) {
                uStack_9e8 = fn_82C9B1F8(param_2,2,uStack_9e8,param_3);
              }
              piVar40 = (int *)(param_2 + 0x6f8);
              **(unsigned int **)(param_2 + 4) = uVar13;
              *(unsigned int *)(*(int *)(param_2 + 4) + 4) = uVar14;
              *(unsigned int *)(iVar15 + *(int *)(param_2 + 0x6f8)) = uStack_9ec;
              *(unsigned int *)(iVar15 + *(int *)(param_2 + 0x6fc)) = uStack_9e8;
              if (uVar16 == 1) {
                **(unsigned int **)(param_2 + 4) = uStack_9ec;
                *(unsigned int *)(*(int *)(param_2 + 4) + 4) = uStack_9e8;
              }
              else {
                uVar39 = 5 - uVar16;
                if (uVar16 == 2) {
                  uStack_9b4 = uVar13;
                  uStack_9b8 = uVar14;
                }
                else {
                  uStack_9b8 = uVar13;
                  uStack_9b4 = uVar14;
                }
                psVar33 = (short *)&uStack_9b8;
                lVar17 = 2;
                do {
                  if ((uVar39 & 1) != 0) {
                    iVar8 = *piVar40;
                    *(int *)(param_2 + 0x6f4) = iVar8;
                    if (bVar11) {
                      uVar13 = 0;
                      if (*(short *)((int)param_3 + 0x12) != 0) {
                        uVar14 = *(unsigned int *)((param_3[1] + -1) * 4 + iVar8);
                        uVar30 = (unsigned __int64)uVar14;
                        if (uVar14 != 0x4000) {
                          uVar25 = (unsigned __int64)*(unsigned int *)(param_2 + 0x890);
                          lVar18 = uVar25 + 1;
                          uVar26 = (unsigned __int64)(unsigned int)(param_3[4] << (5 - ((unsigned int)lVar18 & 1) & 0x3f));
                          uVar13 = uVar14;
                          if ((((*(unsigned int *)((int)((uVar25 + 0x1bb & 0xffffffff) << 2) + param_2) -
                                uVar30) - uVar26 |
                               (unsigned __int64)
                               *(unsigned int *)((int)((uVar25 + 0x1b8 & 0xffffffff) << 2) + param_2) +
                               ((unsigned __int64)uVar14 & 0x8000) * -2 + uVar30 + uVar26) & 0x80008000) !=
                              0) {
                            if (((unsigned int)lVar18 != 0) || (*(int *)(param_2 + 0x490) != 7))
                            goto LAB_830b97a4;
                            uVar13 = fn_830D95E8(param_2,uVar30,param_3);
                          }
                        }
                      }
                    }
                    else {
                      uVar4 = *(unsigned short *)((int)param_3 + 0x12) >> 1;
                      uVar25 = (unsigned __int64)(*(unsigned short *)(param_2 + 0x32) >> 1);
                      uVar26 = uVar25 - 1;
                      uVar25 = (unsigned int)param_3[1] - uVar25;
                      uVar13 = *(unsigned int *)((int)((uVar25 & 0xffffffff) << 2) + iVar8);
                      uVar30 = (unsigned __int64)uVar13;
                      uVar31 = (unsigned __int64)*(unsigned int *)(param_3[1] * 4 + iVar8 + -4) &
                               (__int64)((int)-(unsigned int)uVar4 >> 0x1f);
                      uVar14 = *(unsigned int *)((int)(((((((~uVar26 & 0xffffffff) >> 0x1f) +
                                                  (unsigned __int64)(uVar26 <= uVar4)) * 2 & 2) + uVar25) -
                                                1 & 0xffffffff) << 2) + iVar8);
                      uVar25 = (unsigned __int64)uVar14;
                      lVar18 = ((unsigned __int64)(uVar14 >> 1 ^ uVar14) & 0x4000) +
                               ((unsigned __int64)(uVar13 >> 1 ^ uVar13) & 0x4000) +
                               ((uVar31 >> 1 ^ uVar31) & 0x4000);
                      if (lVar18 != 0) {
                        if ((int)lVar18 != 0x4000) {
                          uVar13 = 0;
                          goto LAB_830b97b0;
                        }
                        if (uVar30 == 0x4000) {
                          uVar30 = 0;
                        }
                        else if (uVar25 == 0x4000) {
                          uVar25 = 0;
                        }
                        else if (uVar31 == 0x4000) {
                          uVar31 = 0;
                        }
                      }
                      uVar14 = (unsigned int)uVar31;
                      uVar13 = (unsigned int)uVar25;
                      uVar26 = (unsigned __int64)*(unsigned int *)(param_2 + 0x890);
                      uVar38 = (unsigned int)uVar30;
                      uVar36 = (uVar25 & 0xffff) << 0x10;
                      uVar25 = (uVar31 & 0xffff) << 0x10;
                      uVar30 = (uVar30 & 0xffff) << 0x10;
                      uVar21 = uVar13 - uVar14 ^ uVar13 - uVar38;
                      uVar19 = uVar14 - uVar38 ^ uVar13 - uVar38;
                      iVar27 = (int)uVar25;
                      iVar8 = (int)uVar36;
                      iVar32 = (int)uVar30;
                      uVar28 = iVar8 - iVar32;
                      uVar35 = iVar8 - iVar27 ^ uVar28;
                      uVar28 = iVar27 - iVar32 ^ uVar28;
                      lVar18 = uVar26 + 1;
                      uVar25 = ((__int64)((int)uVar28 >> 0x1f) & uVar30 |
                                (__int64)((int)uVar35 >> 0x1f) & uVar36 |
                               ~(__int64)((int)(uVar35 | uVar28) >> 0x1f) & uVar25) >> 0x10;
                      uVar30 = uVar25 | ((unsigned __int64)
                                         (unsigned int)((int)((int)uVar21 >> 0x1f & uVar13 |
                                                      (int)uVar19 >> 0x1f & uVar38 |
                                                     ~((int)(uVar21 | uVar19) >> 0x1f) & uVar14) >>
                                               0x10) & 0xffff) << 0x10;
                      uVar13 = (unsigned int)uVar30;
                      uVar31 = (unsigned __int64)(unsigned int)(param_3[4] << (5 - ((unsigned int)lVar18 & 1) & 0x3f));
                      if ((((*(unsigned int *)((int)((uVar26 + 0x1bb & 0xffffffff) << 2) + param_2) - uVar30
                            ) - uVar31 |
                           (unsigned __int64)*(unsigned int *)((int)((uVar26 + 0x1b8 & 0xffffffff) << 2) + param_2)
                           + (uVar25 & 0x8000) * -2 + uVar30 + uVar31) & 0x80008000) != 0) {
                        if (((unsigned int)lVar18 == 0) && (*(int *)(param_2 + 0x490) == 7)) {
                          uVar13 = fn_830D95E8(param_2,uVar30,param_3);
                        }
                        else {
LAB_830b97a4:
                          uVar13 = fn_82C9B1F8(param_2,lVar18,uVar30,param_3);
                        }
                      }
                    }
LAB_830b97b0:
                    if ((uVar37 >> 0x2f & 1) == 0) {
                      uVar13 = ((((int)uVar13 >> 0x10) + (int)*psVar33 +
                                 (unsigned int)*(unsigned short *)(param_2 + 0x40) &
                                (unsigned int)*(unsigned short *)(param_2 + 0x44)) -
                               (unsigned int)*(unsigned short *)(param_2 + 0x40)) * 0x10000 |
                               ((int)(short)uVar13 + (int)psVar33[1] +
                                (unsigned int)*(unsigned short *)(param_2 + 0x3e) &
                               (unsigned int)*(unsigned short *)(param_2 + 0x42)) -
                               (unsigned int)*(unsigned short *)(param_2 + 0x3e) & 0xffff;
                    }
                    psVar33 = psVar33 + 2;
                    *(unsigned int *)(*(int *)(param_2 + 4) + (-0x6f8 - param_2) + (int)piVar40) = uVar13;
                    *(unsigned int *)(iVar15 + *piVar40) = uVar13;
                  }
                  uVar39 = (unsigned __int64)((int)uVar39 >> 1);
                  lVar17 = lVar17 + -1;
                  piVar40 = piVar40 + 1;
                } while (lVar17 != 0);
              }
              *(unsigned char **)(param_2 + 0x884) = auStack_9a0;
              *(int *)(param_2 + 700) = param_2 + 0x6bc;
              *(unsigned char **)(param_2 + 0x888) = auStack_520;
              uVar39 = uVar37 >> 0x30 & 0x3f;
              lVar17 = ((uVar37 >> 0x38 & 0x3f) + (uVar37 >> 0x38 & 0x3f) * 4) * 4 +
                       (unsigned __int64)*(unsigned int *)(param_2 + 0x184);
              puVar23 = (unsigned int *)(param_2 + 0x1d0);
              uVar13 = (unsigned int)*(unsigned char *)(iVar9 + param_2 + 0x6d7);
              lVar18 = 2;
              do {
                if ((uVar13 & 1) != 0) {
                  uVar14 = *(unsigned int *)((int)puVar23 + *(int *)(param_2 + 4) + (-0x1d0 - param_2));
                  if ((((*(int *)(param_2 + 0x6e8) + (param_3[4] & 0x7ffffffU) * -0x20) - uVar14 |
                       *(int *)(param_2 + 0x6dc) + (uVar14 & 0x8000) * -2 + param_3[4] * 0x20 +
                       uVar14) & 0x80008000) != 0) {
                    if (*(int *)(param_2 + 0x490) == 7) {
                      uVar14 = fn_830D95E8(param_2,uVar14,param_3);
                    }
                    else {
                      uVar14 = fn_82C9B1F8(param_2,0,uVar14,param_3);
                    }
                  }
                  uVar28 = (int)uVar14 >> 0x10;
                  uVar25 = (unsigned __int64)puVar23[0x1ad];
                  uVar38 = (unsigned int)(short)uVar14;
                  if ((unsigned __int64)*puVar23 != 0) {
                    uVar19 = uVar38 & 3;
                    uVar21 = uVar28 & 3;
                    lVar24 = (__int64)((int)uVar14 >> 0x12) *
                             (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0x5a) +
                             (__int64)((int)(short)uVar14 >> 2) + (unsigned __int64)(unsigned int)param_3[2] +
                             (unsigned __int64)*puVar23;
                    if (*(char *)(param_2 + 0x30) == '\x01') {
                      iVar15 = (**(int (***)())(((uVar19 + 0x2c) * 4 + uVar21) * 4 + param_2))();
                      if (iVar15 != 0) {
                        fn_82CC46D0(lVar24,*(unsigned short *)(param_2 + 0x5a),uVar25,uVar19,
                                          uVar21,*(unsigned char *)(param_2 + 0x23),1);
                      }
                    }
                    else {
                      (**(int (***)())(((uVar19 + 0x30) * 4 + uVar21) * 4 + param_2))
                                (lVar24,*(unsigned short *)(param_2 + 0x5a),uVar25,param_2,1);
                    }
                  }
                  if (*(int *)(param_2 + 0x494) != 0) {
                    psVar33 = (short *)((int)puVar23 + *(int *)(param_2 + 4) + (-0x1d0 - param_2));
                    uVar28 = (unsigned int)*psVar33;
                    uVar38 = (unsigned int)psVar33[1];
                  }
                  uVar14 = (int)(*(unsigned char *)((uVar38 & 3) + param_2 + 0x6d4) + uVar38) >> 1;
                  uVar28 = (int)(*(unsigned char *)((uVar28 & 3) + param_2 + 0x6d4) + uVar28) >> 1;
                  if (*(char *)(param_2 + 0x1f) != '\0') {
                    uVar38 = uVar14 & 1;
                    if (0 < (int)uVar14) {
                      uVar38 = -uVar38;
                    }
                    uVar14 = uVar14 + uVar38;
                    if ((int)uVar28 < 1) {
                      uVar28 = (uVar28 & 1) + uVar28;
                    }
                    else {
                      uVar28 = uVar28 - (uVar28 & 1);
                    }
                  }
                  iStack_9e4 = CONCAT22((short)uVar28,(short)uVar14);
                  if ((*(int *)(param_2 + 0x494) != 0) &&
                     ((((*(int *)(param_2 + 0x898) + (param_3[4] & 0xfffffffU) * -0x10) - iStack_9e4
                       | param_3[4] * 0x10 + *(int *)(param_2 + 0x894) + (uVar14 & 0x8000) * -2 +
                         iStack_9e4) & 0x80008000) != 0)) {
                    iStack_9e4 = fn_830D96C8(param_2,iStack_9e4,param_3);
                  }
                  lVar24 = (__int64)(iStack_9e4 >> 0x12) *
                           (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0x5c) +
                           (__int64)((int)(short)iStack_9e4 >> 2) + (unsigned __int64)(unsigned int)param_3[3];
                  if ((unsigned __int64)puVar23[2] != 0) {
                    iVar15 = ((((int)(short)iStack_9e4 & 3U) + 0x30) * 4 + (iStack_9e4 >> 0x10 & 3U)
                             ) * 4;
                    (**(int (***)())(iVar15 + param_2))
                              ((unsigned __int64)puVar23[2] + lVar24,*(unsigned short *)(param_2 + 0x5c),
                               uVar25 + 0x300,param_2,0);
                    (**(int (***)())(iVar15 + param_2))
                              ((unsigned __int64)puVar23[4] + lVar24,*(unsigned short *)(param_2 + 0x5c),
                               uVar25 + 0x310,param_2,0);
                  }
                }
                uVar13 = (int)uVar13 >> 1;
                lVar18 = lVar18 + -1;
                puVar23 = puVar23 + 1;
              } while (lVar18 != 0);
              iVar15 = 0;
              do {
                lVar24 = (__int64)(iVar15 >> 2);
                lVar18 = (unsigned __int64)*(unsigned int *)((int)((lVar24 + 2U & 0xffffffff) << 2) + (int)param_3)
                         + (unsigned __int64)*(unsigned int *)((iVar15 + 0x8c) * 4 + param_2);
                if ((uVar39 & 1) == 0) {
                  if (uVar16 < 3) {
                    fn_830B9FA0(lVar18,*(unsigned int *)(param_2 + 0x884),
                                    *(unsigned int *)(param_2 + 0x888),
                                    *(unsigned char *)(*(int *)(param_2 + 700) + iVar15),
                                    *(unsigned short *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                  else {
                    fn_830E2088(lVar18,(unsigned __int64)
                                           *(unsigned int *)(((-iVar9 & 1U) + 0x221) * 4 + param_2) +
                                           (unsigned __int64)*(unsigned char *)(*(int *)(param_2 + 700) + iVar15) *
                                           4,*(unsigned short *)
                                              ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2))
                    ;
                  }
                }
                else {
                  if ((uVar37 >> 0x2c & 7) == 0) {
                    iVar8 = *(int *)(param_2 + 0x1bc);
                    iVar27 = 0;
                    uVar5 = *(unsigned int *)lVar17;
                    uVar6 = ((unsigned int *)lVar17)[1];
                    uVar14 = 0;
                    uVar28 = 0;
                    uVar13 = param_3[10];
                    uVar30 = (unsigned __int64)uVar13;
                    bVar1 = *(unsigned char *)param_3[6];
                    uVar25 = (unsigned __int64)bVar1;
                    puVar34 = (unsigned short *)param_3[5];
                    param_3[6] = (int)((unsigned char *)param_3[6] + 1);
                    dataCacheBlockClearToZero(uVar30);
                    if (uVar25 < 0x80) {
                      if (bVar1 != 0) {
                        do {
                          uVar4 = *puVar34;
                          puVar34 = puVar34 + 1;
                          uVar28 = (uVar4 & 0x3f) + iVar27 & 0x3f;
                          uVar10 = uVar4 >> 7 & 1;
                          bVar1 = *(unsigned char *)(uVar28 + iVar8);
                          iVar27 = uVar28 + 1;
                          uVar28 = *(unsigned char *)((unsigned int)bVar1 + param_2 + 0xa8) | uVar14;
                          *(unsigned short *)((unsigned int)bVar1 * 2 + uVar13) =
                               ((uVar4 >> 8) * (short)uVar5 + (short)uVar6 ^ -uVar10) + uVar10;
                          uVar25 = uVar25 - 1;
                          uVar14 = uVar28;
                        } while (uVar25 != 0);
                      }
                      param_3[5] = (int)puVar34;
                    }
                    else {
                      uVar28 = fn_82C75948(param_2,iVar8,param_2 + 0xa8,lVar17,param_3);
                    }
                    if (uVar28 == 0) {
                      fn_82C8B9D8();
                    }
                    else {
                      fn_830DBB28(uVar30,uVar30);
                    }
                  }
                  else {
                    uVar30 = (unsigned __int64)(unsigned int)param_3[9];
                    uVar25 = uVar37 >> 0x28 & 0xf;
                    (**(int (***)())((((unsigned int)(uVar37 >> 0x2c) & 6) +
                                  (unsigned int)*(unsigned char *)((int)uVar25 + param_2 + 0x140) + 0x9e) * 4 +
                                param_2))(param_2,lVar17,uVar25,param_3);
                  }
                  if (uVar16 < 3) {
                    fn_830BA0B0(lVar18,*(unsigned int *)(param_2 + 0x884),
                                    *(unsigned int *)(param_2 + 0x888),uVar30,
                                    *(unsigned short *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2),
                                    *(unsigned char *)(*(int *)(param_2 + 700) + iVar15));
                  }
                  else {
                    fn_830E2148(lVar18,(unsigned __int64)
                                           *(unsigned int *)(((-iVar9 & 1U) + 0x221) * 4 + param_2) +
                                           (unsigned __int64)*(unsigned char *)(*(int *)(param_2 + 700) + iVar15) *
                                           4,uVar30,
                                    *(unsigned short *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                }
                iVar15 = iVar15 + 1;
                uVar39 = uVar39 >> 1;
                uVar37 = uVar37 << 8;
              } while (iVar15 < 6);
            }
            uStack_9d8 = uStack_9d8 + 1;
            psStack_9cc = psStack_9cc + 2;
            iStack_9d4 = iStack_9d4 + 1;
            *param_3 = *param_3 + 2;
            param_3[1] = param_3[1] + 1;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            puStack_9c4 = puVar20;
          } while ((int)uStack_9d8 < (int)uVar7);
        }
        iStack_9c8 = uVar22 * 4 + iStack_9c8;
        iStack_9d0 = uVar22 * 0x10 + iStack_9d0;
        *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
        iStack_9dc = iStack_9dc + 1;
        bVar11 = false;
        *param_3 = (unsigned int)*(unsigned short *)(param_2 + 0x32) + *param_3;
      } while (iStack_9dc < (int)uStack_9b0);
    }
    uVar12 = 0;
  }
  return uVar12;
}

