typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ABE2E0();
extern int fn_82ABE650();
extern int fn_82ACAFD8();
extern int fn_82B102D0();
extern int fn_82B16BA0();
extern int fn_82B19998();
extern int fn_82B2B908();
extern int fn_82B330F8();
extern int fn_82B44B88();
extern int fn_82B85568();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8B280();
extern int fn_82B8CB58();
extern int fn_82B8F170();
extern int fn_82B8F1B0();


unsigned __int64 fn_82B356B8(int param_1)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  char cVar16;
  int iVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned int *puVar17;
  unsigned char *pbVar18;
  bool bVar20;
  unsigned char *pbVar19;
  unsigned char *pbVar21;
  unsigned int *puVar22;
  int iVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  int *piVar27;
  int iVar28;
  unsigned int uVar29;
  unsigned char *pbVar30;
  char acStack_a0 [160];
  
  acStack_a0[0] = '\0';
  uVar25 = 0;
  puVar12 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  *(unsigned int **)(param_1 + 0x28c) = puVar12;
  puVar12[1] = (unsigned int)puVar12 | 1;
  *puVar12 = (unsigned int)(puVar12 + 1) | 1;
  uVar11 = *(unsigned int *)(param_1 + 0x28) >> 0xc & 1;
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x1000;
  do {
    uVar26 = *(unsigned int *)(param_1 + 4);
    if (((uVar26 & 1) == 0) && (uVar26 != 0)) {
LAB_82b35728:
      if ((*(unsigned int *)(uVar26 + 0x14) & 1) == 0) {
        uVar29 = *(unsigned int *)(uVar26 + 0x14);
        iVar23 = uVar26 + 0x10;
      }
      else if ((*(unsigned int *)(uVar26 + 0x1c) & 1) == 0) {
        uVar29 = *(unsigned int *)(uVar26 + 0x1c);
        iVar23 = uVar26 + 0x18;
      }
      else {
        uVar29 = *(unsigned int *)(uVar26 + 0x24);
        iVar23 = uVar26 + 0x20;
      }
LAB_82b35760:
      uVar29 = -(unsigned int)((uVar29 & 1) == 0) & uVar29;
      iVar28 = iVar23;
      do {
        do {
          if (uVar29 == 0) {
            uVar26 = *(unsigned int *)((uVar26 & 0xfffffffe) + 4);
            if (((uVar26 & 1) != 0) || (uVar26 == 0)) goto LAB_82b35820;
            goto LAB_82b35728;
          }
          do {
            if (((*(unsigned int *)(uVar29 + 8) >> 0x1a & 1) == 0) &&
               (cVar16 = fn_82B2B908(param_1,uVar29,acStack_a0), cVar16 != '\0'))
            goto LAB_82b35728;
            uVar29 = *(unsigned int *)((uVar29 & 0xfffffffe) + 0x28);
            if ((uVar29 & 1) != 0) {
              uVar29 = 0;
              break;
            }
          } while (uVar29 != 0);
          iVar23 = uVar26 + 0x20;
        } while (iVar28 == iVar23);
        if ((iVar28 == uVar26 + 0x18) || ((*(unsigned int *)(uVar26 + 0x1c) & 1) != 0)) goto LAB_82b357fc;
        uVar29 = -(unsigned int)((*(unsigned int *)(uVar26 + 0x1c) & 1) == 0) & *(unsigned int *)(uVar26 + 0x1c);
        iVar28 = uVar26 + 0x18;
      } while( true );
    }
LAB_82b35820:
    while( true ) {
      puVar12 = *(unsigned int **)(param_1 + 0x28c);
      uVar26 = puVar12[1];
      if (((uVar26 & 1) != 0) || (uVar26 == 0)) break;
      if ((uVar26 & 1) == 0) {
        puVar17 = (unsigned int *)((*puVar12 & 0xfffffffe) - 4);
      }
      else {
        puVar17 = (unsigned int *)0x0;
      }
      uVar29 = puVar17[2] - 1;
      uVar26 = puVar17[puVar17[2] + 3];
      puVar17[2] = uVar29;
      if (uVar29 == 0) {
        *(unsigned int *)(puVar17[1] & 0xfffffffe) = *puVar17;
        *(unsigned int *)(*puVar17 & 0xfffffffe) = puVar17[1];
        fn_82AA6648(puVar12,puVar17,((unsigned __int64)puVar17[3] + 4 & 0x3fffffff) << 2);
      }
      uVar29 = *(unsigned int *)(uVar26 + 8);
      *(unsigned int *)(uVar26 + 8) = uVar29 & 0xfbffffff;
      if ((uVar29 & 0x3f80) != 0x3980) {
        fn_82B2B908(param_1,uVar26,acStack_a0);
      }
    }
    fn_82ABE650(param_1,uVar11);
    bVar1 = acStack_a0[0] != '\0';
    if (bVar1) {
      uVar25 = 1;
      fn_82B44B88(param_1);
      acStack_a0[0] = '\0';
    }
    uVar29 = 0;
    uVar26 = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x1000;
    if (((uVar26 & 1) == 0) && (uVar26 != 0)) {
      do {
        if (((*(int **)(uVar26 + 0xc) == (int *)0x0) || (**(int **)(uVar26 + 0xc) == 0)) &&
           (((*(unsigned int *)(uVar26 + 0x14) & 1) != 0 && ((*(unsigned int *)(uVar26 + 0x30) >> 0x14 & 1) == 0))))
        {
          uVar29 = uVar29 + 1;
        }
        if ((*(unsigned int *)(uVar26 + 0x4c) & 0x80000) == 0) {
          if ((*(unsigned int *)(uVar26 + 0x14) & 1) == 0) {
            uVar24 = *(unsigned int *)(uVar26 + 0x14);
            iVar23 = uVar26 + 0x10;
          }
          else if ((*(unsigned int *)(uVar26 + 0x1c) & 1) == 0) {
            uVar24 = *(unsigned int *)(uVar26 + 0x1c);
            iVar23 = uVar26 + 0x18;
          }
          else {
            uVar24 = *(unsigned int *)(uVar26 + 0x24);
            iVar23 = uVar26 + 0x20;
          }
          uVar24 = -(unsigned int)((uVar24 & 1) == 0) & uVar24;
LAB_82b35ecc:
          if (uVar24 != 0) {
LAB_82b359b4:
            iVar28 = *(int *)(uVar24 + 4);
LAB_82b359b8:
            if (iVar28 == 0) goto LAB_82b35e60;
            piVar27 = *(int **)(iVar28 + 0x10);
            if ((piVar27 != (int *)0x0) && (uVar8 = piVar27[7], uVar8 != uVar26)) {
              uVar4 = piVar27[2];
              uVar14 = uVar4 >> 7 & 0x7f;
              if ((uVar14 != 0x60) &&
                 (((((uVar14 != 0x70 && (cVar16 = fn_82ACAFD8(piVar27), cVar16 != '\0')) &&
                    ((uVar4 >> 0x19 & 1) == 0)) &&
                   (((uVar4 >> 5 & 1) == 0 && ((uVar4 >> 6 & 1) == 0)))) &&
                  (iVar15 = *(int *)(uVar8 + 0x34), iVar15 != 0)))) {
                if ((*(int *)(iVar15 + 0xc) == 0) ||
                   (bVar10 = true, *(int *)(*(int *)(iVar15 + 0xc) + 8) == 0)) {
                  bVar10 = false;
                }
                if (bVar10) {
                  if ((*(int *)(uVar8 + 8) == 0) ||
                     (bVar10 = true, *(int *)(*(int *)(uVar8 + 8) + 0xc) == 0)) {
                    bVar10 = false;
                  }
                  if (((!bVar10) &&
                      (((*(unsigned int *)(iVar15 + 0x4c) ^ *(unsigned int *)(uVar8 + 0x4c)) & 0x7ffff) == 0)) &&
                     (cVar16 = fn_82ABE2E0(piVar27), cVar16 == '\0')) {
                    for (iVar7 = *piVar27; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
                      uVar9 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(iVar7 + 0xc) + 0x1c) + 0x30) &
                              0x7ffff;
                      if ((*(unsigned int *)(((int)(uVar9 >> 5) + 1) * 4 + *(int *)(iVar15 + 0x28)) &
                          1 << ((unsigned int)uVar9 & 0x1f)) == 0) goto LAB_82b35cfc;
                    }
                    iVar7 = *(int *)(uVar24 + 4);
                    bVar10 = false;
LAB_82b35ae8:
                    if (iVar7 == 0) goto LAB_82b35cfc;
                    piVar5 = *(int **)(iVar7 + 0x10);
                    if ((((piVar5 != (int *)0x0) && (piVar5 != piVar27)) &&
                        ((uVar4 = piVar5[7], uVar4 != uVar26 &&
                         ((uVar4 != uVar8 &&
                          (uVar14 = piVar5[2], ((uVar14 ^ piVar27[2]) & 0x3f80) == 0)))))) &&
                       (((uVar14 >> 0x19 & 1) == 0 &&
                        (((uVar14 >> 5 & 1) == 0 && (iVar15 == *(int *)(uVar4 + 0x34))))))) {
                      if ((*(int *)(uVar4 + 8) == 0) ||
                         (bVar20 = true, *(int *)(*(int *)(uVar4 + 8) + 0xc) == 0)) {
                        bVar20 = false;
                      }
                      if (((!bVar20) &&
                          (((*(unsigned int *)(uVar4 + 0x4c) ^ *(unsigned int *)(uVar8 + 0x4c)) & 0x7ffff) == 0)) &&
                         (cVar16 = fn_82ABE2E0(piVar5), cVar16 == '\0')) {
                        for (iVar13 = *piVar5; iVar13 != 0; iVar13 = *(int *)(iVar13 + 4)) {
                          uVar9 = (unsigned __int64)
                                  *(unsigned int *)(*(int *)(*(int *)(iVar13 + 0xc) + 0x1c) + 0x30) &
                                  0x7ffff;
                          if ((*(unsigned int *)(((int)(uVar9 >> 5) + 1) * 4 + *(int *)(iVar15 + 0x28)) &
                              1 << ((unsigned int)uVar9 & 0x1f)) == 0) goto LAB_82b35cf4;
                        }
                        cVar16 = fn_82B85568(piVar27,piVar5,param_1);
                        if (cVar16 != '\0') {
                          uVar4 = piVar27[2];
                          uVar14 = uVar4 >> 7 & 0x7f;
                          if (((uVar14 == 0x61) || (uVar14 == 99)) ||
                             (bVar20 = false, uVar14 == 100)) {
                            bVar20 = true;
                          }
                          if (bVar20) {
                            iVar13 = fn_82ABDD90(param_1,uVar14,uVar4 >> 0x13 & 7,uVar4 >> 0xe & 7)
                            ;
                            uVar4 = piVar5[2];
                            pbVar30 = (unsigned char *)((int)piVar27 + iVar13 + -0x18);
                            iVar13 = fn_82ABDD90(param_1,uVar4 >> 7 & 0x7f,uVar4 >> 0x13 & 7,
                                                  uVar4 >> 0xe & 7);
                            pbVar18 = (unsigned char *)((int)piVar5 + iVar13 + -0x18);
                            pbVar21 = pbVar30;
                            pbVar19 = pbVar18;
                            do {
                              bVar2 = *pbVar21;
                              bVar3 = *pbVar19;
                              if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
                              pbVar21 = pbVar21 + 1;
                              pbVar19 = pbVar19 + 1;
                            } while (pbVar21 != pbVar30 + 0x14);
                            if (((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) ||
                               (cVar16 = fn_82B16BA0(param_1,*(unsigned int *)(pbVar30 + 0x14),
                                                         *(unsigned int *)(pbVar18 + 0x14)),
                               cVar16 == '\0')) goto LAB_82b35cf4;
                          }
                          if (!bVar10) {
                            cVar16 = fn_82B8B280(uVar24,piVar27,0,0,param_1);
                            if (cVar16 != '\0') goto LAB_82b35cfc;
                            bVar10 = true;
                          }
                          cVar16 = fn_82B8B280(uVar24,piVar5,0,0,param_1);
                          if (cVar16 == '\0') {
                            uVar4 = (unsigned int)piVar27 & 0xfffffffe;
                            puVar12 = (unsigned int *)(uVar4 + 0x24);
                            puVar17 = (unsigned int *)(piVar27 + 1);
                            *(unsigned int *)((*(unsigned int *)(uVar4 + 0x28) & 0xfffffffe) + 0x24) = *puVar12;
                            *(unsigned int *)(*puVar12 & 0xfffffffe) = *(unsigned int *)(uVar4 + 0x28);
                            *puVar12 = *(unsigned int *)(iVar15 + 0x18);
                            *(unsigned int *)(*(unsigned int *)(iVar15 + 0x18) & 0xfffffffe) = uVar4;
                            *(unsigned int *)(uVar4 + 0x28) = iVar15 - 0xcU | 1;
                            *(unsigned int *)(iVar15 + 0x18) = uVar4 + 0x28;
                            piVar27[7] = iVar15;
                            while (puVar12 = (unsigned int *)*puVar17, puVar12 != (unsigned int *)0x0) {
                              uVar4 = puVar12[4];
                              if ((((uVar4 != 0) && ((*puVar12 & 0xe000000) != 0)) &&
                                  ((*(unsigned int *)(uVar4 + 8) & 0x3f80) == 0x3800)) &&
                                 (uVar14 = fn_82B102D0(param_1,uVar8,piVar27,*puVar12 >> 5 & 3,0),
                                 uVar14 != uVar4)) {
                                puVar22 = (unsigned int *)(puVar12[3] + 4);
                                for (puVar6 = (unsigned int *)*puVar22; puVar6 != puVar12;
                                    puVar6 = (unsigned int *)puVar6[2]) {
                                  puVar22 = puVar6 + 2;
                                }
                                *puVar22 = puVar12[2];
                                puVar12[2] = *(unsigned int *)(uVar14 + 4);
                                *(unsigned int **)(uVar14 + 4) = puVar12;
                                puVar12[3] = uVar14;
                                *puVar12 = *puVar12 & 0xffffe01f | 0x1c80;
                              }
                              if ((unsigned int *)*puVar17 == puVar12) {
                                puVar17 = puVar12 + 2;
                              }
                            }
                            fn_82B8CB58(param_1,piVar5,piVar27,0xe4,0,
                                              *(unsigned int *)(param_1 + 0x28c),acStack_a0);
                            cVar16 = fn_82ABE2E0(piVar5);
                            if (cVar16 != '\0') {
                              fn_82B8AC10(param_1,piVar5,*(unsigned int *)(param_1 + 0x28c),1);
                            }
                            bVar1 = true;
                            goto LAB_82b359b4;
                          }
                        }
                      }
                    }
LAB_82b35cf4:
                    iVar7 = *(int *)(iVar7 + 8);
                    goto LAB_82b35ae8;
                  }
                }
              }
            }
LAB_82b35cfc:
            iVar28 = *(int *)(iVar28 + 8);
            goto LAB_82b359b8;
          }
        }
LAB_82b35ed4:
        uVar26 = *(unsigned int *)((uVar26 & 0xfffffffe) + 4);
      } while (((uVar26 & 1) == 0) && (uVar26 != 0));
      if (1 < uVar29) {
        for (uVar26 = *(unsigned int *)(param_1 + 4); ((uVar26 & 1) == 0 && (uVar26 != 0));
            uVar26 = *(unsigned int *)((uVar26 & 0xfffffffe) + 4)) {
          if (((*(int **)(uVar26 + 0xc) == (int *)0x0) || (**(int **)(uVar26 + 0xc) == 0)) &&
             ((*(unsigned int *)(uVar26 + 0x14) & 1) != 0)) {
            iVar23 = *(int *)(uVar26 + 8);
            piVar27 = (int *)(uVar26 + 8);
            if ((((iVar23 != 0) && (*(int *)(iVar23 + 4) != 0)) &&
                ((*(unsigned int *)(uVar26 + 0x30) >> 0x14 & 1) == 0)) &&
               (iVar28 = *(int *)(uVar26 + 0x40), iVar28 != 0)) {
              for (; iVar23 != 0; iVar23 = *(int *)(iVar23 + 0xc)) {
                if (iVar28 == *(int *)(iVar23 + 4)) {
                  bVar10 = true;
                  goto LAB_82b35f90;
                }
              }
              bVar10 = false;
LAB_82b35f90:
              if (bVar10) {
                for (puVar12 = *(unsigned int **)(iVar28 + 0xc); puVar12 != (unsigned int *)0x0;
                    puVar12 = (unsigned int *)puVar12[2]) {
                  uVar29 = *puVar12;
                  if (uVar29 != uVar26) goto LAB_82b35fbc;
                }
                uVar29 = 0;
LAB_82b35fbc:
                if ((((iVar28 == *(int *)(uVar29 + 0x40)) && ((*(unsigned int *)(uVar29 + 0x14) & 1) != 0))
                    && ((*(int *)(uVar29 + 8) != 0 &&
                        ((*(int *)(*(int *)(uVar29 + 8) + 4) != 0 &&
                         (((*(unsigned int *)(uVar29 + 0x4c) ^ *(unsigned int *)(uVar26 + 0x4c)) & 0x7ffff) == 0))))
                       )) && ((*(unsigned int *)(iVar28 + 0x24) & 1) == 0)) {
                  uVar24 = *(unsigned int *)(iVar28 + 0x20) & 0xfffffffe;
                  iVar23 = uVar24 - 0x28;
                  if ((iVar23 != 0) && ((*(unsigned int *)(uVar24 - 0x20) & 0x3f80) == 0x2d00)) {
                    iVar15 = uVar29 + 0x18;
                    iVar28 = uVar26 + 0x18;
                    cVar16 = fn_82B19998(param_1,iVar28,iVar15);
                    if (cVar16 == '\0') {
LAB_82b36068:
                      bVar10 = false;
                    }
                    else {
                      cVar16 = fn_82B19998(param_1,uVar26 + 0x20,uVar29 + 0x20);
                      bVar10 = true;
                      if (cVar16 == '\0') goto LAB_82b36068;
                    }
                    if ((*(unsigned int *)(uVar26 + 0x1c) & 1) == 0) {
                      uVar24 = *(unsigned int *)(uVar26 + 0x1c);
                    }
                    else {
                      uVar24 = *(unsigned int *)(uVar26 + 0x24);
                      iVar28 = uVar26 + 0x20;
                    }
                    uVar24 = -(unsigned int)((uVar24 & 1) == 0) & uVar24;
                    while (uVar24 != 0) {
                      do {
                        if ((*(unsigned int *)(uVar24 + 8) & 0x20000000) != 0) {
                          *(unsigned int *)(uVar24 + 8) = *(unsigned int *)(uVar24 + 8) & 0xdfffffff;
                        }
                        uVar24 = *(unsigned int *)((uVar24 & 0xfffffffe) + 0x28);
                      } while (((uVar24 & 1) == 0) && (uVar24 != 0));
                      if ((iVar28 == uVar26 + 0x20) ||
                         (uVar24 = *(unsigned int *)(uVar26 + 0x24), iVar28 = uVar26 + 0x20,
                         (uVar24 & 1) != 0)) break;
                    }
                    if ((*(unsigned int *)(uVar29 + 0x1c) & 1) == 0) {
                      uVar24 = *(unsigned int *)(uVar29 + 0x1c);
                    }
                    else {
                      uVar24 = *(unsigned int *)(uVar29 + 0x24);
                      iVar15 = uVar29 + 0x20;
                    }
                    uVar24 = -(unsigned int)((uVar24 & 1) == 0) & uVar24;
                    while (uVar24 != 0) {
                      do {
                        if ((*(unsigned int *)(uVar24 + 8) & 0x20000000) != 0) {
                          *(unsigned int *)(uVar24 + 8) = *(unsigned int *)(uVar24 + 8) & 0xdfffffff;
                        }
                        uVar24 = *(unsigned int *)((uVar24 & 0xfffffffe) + 0x28);
                      } while (((uVar24 & 1) == 0) && (uVar24 != 0));
                      if ((iVar15 == uVar29 + 0x20) ||
                         (uVar24 = *(unsigned int *)(uVar29 + 0x24), iVar15 = uVar29 + 0x20,
                         (uVar24 & 1) != 0)) break;
                    }
                    if (bVar10) {
                      while (iVar28 = *piVar27, iVar28 != 0) {
                        iVar15 = *(int *)(iVar28 + 4);
                        for (iVar7 = *(int *)(uVar29 + 8); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)
                            ) {
                          if (iVar15 == *(int *)(iVar7 + 4)) {
                            bVar10 = true;
                            goto LAB_82b361c4;
                          }
                        }
                        bVar10 = false;
LAB_82b361c4:
                        if (bVar10) {
                          fn_82B8F1B0(iVar15,uVar26,param_1);
                        }
                        else {
                          fn_82B8F170(iVar15,iVar28,uVar29);
                          if (((*(unsigned int *)(iVar15 + 0x24) & 1) == 0) &&
                             (uVar24 = *(unsigned int *)(iVar15 + 0x20) & 0xfffffffe, uVar24 != 0x28)) {
                            uVar8 = *(unsigned int *)(uVar24 - 0x20) >> 7 & 0x7f;
                            if (((uVar8 == 0x56) ||
                                (((uVar8 == 0x57 || (uVar8 == 0x59)) || (uVar8 == 0x5a)))) ||
                               ((uVar8 == 0x54 || (bVar10 = false, uVar8 == 0x55)))) {
                              bVar10 = true;
                            }
                            if (bVar10) {
                              uVar8 = *(unsigned int *)(uVar24 - 0x20);
                              iVar15 = fn_82ABDD90(param_1,uVar8 >> 7 & 0x7f,uVar8 >> 0x13 & 7,
                                                    uVar8 >> 0xe & 7);
                              puVar12 = (unsigned int *)(iVar15 + (uVar24 - 0x38));
                              if (*puVar12 == uVar26) {
                                *puVar12 = uVar29;
                              }
                            }
                          }
                        }
                        if (*piVar27 == iVar28) {
                          piVar27 = (int *)(iVar28 + 0xc);
                        }
                      }
                      fn_82B8AE98(param_1,iVar23);
                      fn_82B44B88(param_1);
                      uVar25 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cVar16 = fn_82B330F8(param_1,1);
    if (cVar16 != '\0') {
      bVar1 = true;
      uVar25 = 1;
    }
    uVar26 = *(unsigned int *)(*(int *)(param_1 + 0x28c) + 4);
    if (((uVar26 & 1) == 0) && (uVar26 != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      fn_82ABE650(param_1,uVar11);
      *(unsigned int *)(param_1 + 0x28c) = 0;
      return uVar25;
    }
  } while( true );
LAB_82b357fc:
  uVar29 = *(unsigned int *)(uVar26 + 0x24);
  goto LAB_82b35760;
LAB_82b35e60:
  uVar24 = *(unsigned int *)((uVar24 & 0xfffffffe) + 0x28);
  if (((uVar24 & 1) != 0) || (uVar24 == 0)) goto LAB_82b35e7c;
  goto LAB_82b359b4;
LAB_82b35e7c:
  if (iVar23 == uVar26 + 0x20) goto LAB_82b35ed4;
  if ((iVar23 == uVar26 + 0x18) || ((*(unsigned int *)(uVar26 + 0x1c) & 1) != 0)) {
    uVar24 = *(unsigned int *)(uVar26 + 0x24);
    iVar23 = uVar26 + 0x20;
  }
  else {
    uVar24 = *(unsigned int *)(uVar26 + 0x1c);
    iVar23 = uVar26 + 0x18;
  }
  if ((uVar24 & 1) != 0) goto LAB_82b35ed4;
  goto LAB_82b35ecc;
}

