typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int memcpy();
extern unsigned int iStack_25c;
extern unsigned int lbl_821B597C;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_258;


void fn_82B767F8(unsigned int *param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned short *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  int iVar17;
  unsigned short *puVar20;
  int iVar21;
  unsigned __int64 uVar18;
  unsigned int *puVar22;
  __int64 lVar19;
  unsigned short *puVar25;
  unsigned short uVar27;
  __int64 lVar23;
  unsigned int *puVar26;
  __int64 lVar24;
  unsigned __int64 uVar28;
  int *piVar29;
  int *piVar30;
  unsigned __int64 uVar31;
  int *piVar32;
  unsigned __int64 uVar33;
  unsigned __int64 uVar34;
  unsigned __int64 uVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned int *puVar38;
  unsigned __int64 uVar39;
  unsigned int *puStack00000014;
  int iStack_25c;
  unsigned int uStack_258;
  unsigned int uStack_254;
  struct { unsigned int first; unsigned int second; } stack_pair_240;

  unsigned int uStack_238;
  unsigned int uStack_234;
  unsigned int uStack_230;
  int aiStack_220 [32];
  int aiStack_1a0 [1];
  int aiStack_120 [72];
  
  uVar2 = param_1[7];
  uVar35 = (unsigned __int64)uVar2;
  uVar39 = 0;
  bVar7 = false;
  bVar8 = false;
  iStack_25c = -1;
  puStack00000014 = param_1;
  if (*(int *)(uVar2 + 0x3088) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daa68,0xffffffff820da3b8,0x2fd7);
  }
  uVar3 = *(unsigned int *)(uVar2 + 0x3088);
  uVar34 = (unsigned __int64)uVar3;
  uVar14 = ((unsigned __int64)*(unsigned int *)(uVar2 + 0x2efc) + (unsigned __int64)*(unsigned int *)(uVar2 + 0x2a44) +
            (unsigned __int64)*(unsigned int *)(uVar2 + 0x336c) & 0x7fffffff) * 2 +
           ((unsigned __int64)*(unsigned int *)(uVar2 + 0xc) + 5 & 0xffffffff) / 6;
  uStack_254 = (unsigned int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 + 1;
    uStack_254 = (unsigned int)uVar14;
  }
  uStack_258 = 0;
  uVar14 = (uVar14 + 1 & 0xffffffff) >> 1;
  piVar29 = (int *)(uVar2 + 0x3360);
  *(unsigned int *)(uVar2 + 0x308c) = *(unsigned int *)(uVar2 + 0xc) + *(unsigned int *)(uVar2 + 0x2a44) + (int)uVar14;
  uVar33 = 0;
  iVar17 = *(int *)(uVar2 + 0x3360);
  bVar1 = *(int *)(uVar2 + 0x3368) != 0;
  if (bVar1) {
    memcpy(&stack_pair_240.first,iVar17,0x18);
    *piVar29 = *(int *)(iVar17 + 0x14);
    (*(int (**)())param_1[2])(*param_1,iVar17);
  }
  uVar28 = (unsigned __int64)uStack_234;
  piVar32 = aiStack_1a0;
  uVar31 = (unsigned __int64)uStack_238;
  *(int *)(uVar2 + 0x3368) = *(int *)(uVar2 + 0x3368) + -1;
  piVar30 = aiStack_120;
  do {
    if (bVar1) {
      uVar36 = (unsigned __int64)stack_pair_240.second;
      if ((uVar33 & 0xffffffff) == uVar36) {
        iVar17 = (int)uVar39;
        if ((stack_pair_240.first & 1) != 0) {
          puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
          *puVar25 = (unsigned short)(uVar28 << 0xc) | *puVar25 & 0xfff;
          uVar15 = (unsigned int)(uVar31 << 5) & 0x60 | *(unsigned int *)(puVar25 + 1) & 0xffffff90 | 0xc;
          goto LAB_82b76c2c;
        }
        if ((stack_pair_240.first & 0x80000000) == 0) {
          if ((stack_pair_240.first & 0x8000) == 0) {
            if (((stack_pair_240.first & 2) == 0) && ((stack_pair_240.first & 0x10000) == 0)) {
              if ((stack_pair_240.first & 4) == 0) {
                if ((stack_pair_240.first & 8) == 0) {
                  if ((stack_pair_240.first & 0x10) == 0) {
                    if ((stack_pair_240.first & 0x20) == 0) {
                      if ((stack_pair_240.first & 0x80) != 0) {
                        iVar17 = *(int *)((int)aiStack_220 + (int)(uVar28 << 2));
                        goto LAB_82b76b88;
                      }
                      if ((stack_pair_240.first & 0x40) == 0) {
                        if ((stack_pair_240.first & 0x400) != 0) {
                          puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                          uVar15 = *(unsigned int *)(puVar25 + 1) & 0xffff8000 | 0xb;
                          *puVar25 = *puVar25 | 4;
                          iStack_25c = iVar17;
                          goto LAB_82b76bec;
                        }
                        if ((stack_pair_240.first & 0x100) == 0) {
                          if ((stack_pair_240.first & 0x200) != 0) {
                            piVar30 = piVar30 + -1;
                            piVar32 = piVar32 + -1;
                            puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                            iVar21 = *piVar32 * 6;
                            *puVar25 = (short)*piVar30 << 3 | *puVar25 & 7;
                            *(unsigned int *)(puVar25 + 1) =
                                 *(unsigned int *)(puVar25 + 1) & 0x3ffcfc0 | (unsigned int)(uVar31 << 0x1b) | 0x28;
                            uVar27 = (unsigned short)((uVar39 + 1 & 0xffffffff) << 3) |
                                     *(unsigned short *)(iVar21 + uVar3) & 7;
                            goto LAB_82b76c8c;
                          }
                          fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",&lbl_821B597C,
                                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                            ,0x316f);
                          goto LAB_82b76e58;
                        }
                        *piVar32 = iVar17;
                        puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                        *piVar30 = iVar17 + 1;
                        piVar32 = piVar32 + 1;
                        piVar30 = piVar30 + 1;
                        uVar15 = (unsigned int)(uVar31 << 0x1b) | *(unsigned int *)(puVar25 + 1) & 0x7ffffe0 | 7;
                      }
                      else {
                        puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                        uVar15 = *(unsigned int *)(puVar25 + 1) & 0xffffffe0 | 10;
                      }
LAB_82b76c2c:
                      uVar39 = uVar39 + 1;
                      *(unsigned int *)(puVar25 + 1) = uVar15;
                    }
                    else {
                      puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                      uVar15 = *(unsigned int *)(puVar25 + 1);
                      *(unsigned int *)(puVar25 + 1) = uVar15 & 0xffffffc0 | 0x29;
                      if ((int)uVar31 == -1) {
                        uVar15 = uVar15 & 0xffffc000 | 0x29;
                        uVar27 = *puVar25 | 4;
                      }
                      else {
                        uVar27 = *puVar25 & 0xfffb;
                        uVar15 = (unsigned int)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                                 uVar15 & 0xffffc000 | 0x29;
                      }
                      *(unsigned int *)(puVar25 + 1) = uVar15;
                      *puVar25 = uVar27;
                      *(int *)((int)aiStack_220 + (int)(uVar28 << 2)) = iVar17;
                      uVar39 = uVar39 + 1;
                    }
                  }
                  else {
                    piVar4 = piVar32 + -1;
                    piVar30 = piVar30 + -1;
                    piVar32 = piVar32 + -1;
                    iVar17 = *piVar4;
LAB_82b76b88:
                    *(unsigned short *)(iVar17 * 6 + uVar3) =
                         (unsigned short)((uVar39 & 0xffffffff) << 3) | *(unsigned short *)(iVar17 * 6 + uVar3) & 7;
                  }
                }
                else {
                  iVar21 = piVar32[-1];
                  piVar32[-1] = iVar17;
                  puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                  iVar21 = iVar21 * 6;
                  *puVar25 = *puVar25 & 0xfffb;
                  *(unsigned int *)(puVar25 + 1) =
                       (unsigned int)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                       *(unsigned int *)(puVar25 + 1) & 0xffff8000 | 0x402b;
                  uVar27 = (unsigned short)((uVar39 & 0xffffffff) << 3) | *(unsigned short *)(iVar21 + uVar3) & 7;
LAB_82b76c8c:
                  uVar39 = uVar39 + 1;
                  *(unsigned short *)(iVar21 + uVar3) = uVar27;
                }
              }
              else {
                *piVar32 = iVar17;
                puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
                piVar30 = piVar30 + 1;
                piVar32 = piVar32 + 1;
                *puVar25 = *puVar25 & 0xfffb;
                uVar15 = (unsigned int)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                         *(unsigned int *)(puVar25 + 1) & 0xffff8000 | 0x400b;
LAB_82b76bec:
                uVar39 = uVar39 + 1;
                *(unsigned int *)(puVar25 + 1) = uVar15;
              }
            }
            else {
              uVar9 = 0;
              bVar7 = true;
              lVar24 = (uStack_230 - uVar36) + uVar28;
              if (lVar24 != 0) {
                uVar37 = (unsigned __int64)uStack_258;
                lVar12 = uVar33 * 0xc + uVar35 + 0x10;
                lVar13 = uVar14 * 0xc;
                lVar23 = uVar39 * 6 + uVar34 + 2;
                lVar11 = (uVar37 + 0x386) * 0xc + uVar35;
                lVar19 = lVar24;
                do {
                  uVar10 = uVar9 + ((uVar9 & 0xffffffff) / 6) * -6;
                  puVar38 = (unsigned int *)lVar23;
                  if (uVar10 == 0) {
                    uVar27 = (unsigned short)((uVar14 & 0xfffffff) << 4);
                    *(unsigned short *)((int)puVar38 + -2) = uVar27 | *(unsigned short *)((int)puVar38 + -2) & 0xf;
                    *puVar38 = *puVar38 & 0xffff0 | 1;
                    if ((lVar24 - uVar9 & 0xffffffff) < 6) {
                      uVar27 = (unsigned short)(lVar24 - uVar9) & 0xf | uVar27;
                    }
                    else {
                      uVar27 = uVar27 | 6;
                    }
                    *(unsigned short *)((int)puVar38 + -2) = uVar27;
                  }
                  uVar18 = uVar9 + uVar36;
                  if (((uVar18 & 0xffffffff) < uVar31) ||
                     ((uVar28 + uVar31 & 0xffffffff) <= (uVar18 & 0xffffffff))) {
                    uVar33 = uVar33 + 1;
                    *puVar38 = *puVar38 & 0xfffff |
                               (2 << ((unsigned int)((uVar10 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                               *puVar38 & 0xfff00000;
                    puVar26 = (unsigned int *)lVar12;
                    puVar22 = (unsigned int *)((int)lVar13 + *(int *)(uVar2 + 0x3088));
                    *puVar22 = *puVar26;
                    puVar22[1] = puVar26[1];
                    uVar16 = puVar26[2];
                    lVar12 = lVar12 + 0xc;
                  }
                  else {
                    uVar15 = (unsigned int)((uVar10 & 0xffffffff) << 1);
                    if ((uVar18 & 0xffffffff) == uVar31) {
                      iVar17 = 3 << (uVar15 & 0x3e);
                    }
                    else {
                      iVar17 = 1 << (uVar15 & 0x3e);
                    }
                    *puVar38 = *puVar38 & 0xfffff | iVar17 << 0x14 | *puVar38 & 0xfff00000;
                    if ((stack_pair_240.first & 0x10000) != 0) {
                      *puVar38 = (1 << ((unsigned int)uVar10 & 0x3f) & 0x3fU) << 0xe | *puVar38;
                    }
                    uVar37 = uVar37 + 1;
                    puVar26 = (unsigned int *)lVar11;
                    puVar22 = (unsigned int *)((int)lVar13 + *(int *)(uVar2 + 0x3088));
                    *puVar22 = *puVar26;
                    puVar22[1] = puVar26[1];
                    uVar16 = puVar26[2];
                    lVar11 = lVar11 + 0xc;
                  }
                  puVar22[2] = uVar16;
                  lVar13 = lVar13 + 0xc;
                  uVar14 = uVar14 + 1;
                  if (((uVar10 & 0xffffffff) == 5) ||
                     ((uVar9 & 0xffffffff) == (lVar24 - 1U & 0xffffffff))) {
                    uVar39 = uVar39 + 1;
                    lVar23 = lVar23 + 6;
                  }
                  lVar19 = lVar19 + -1;
                  uVar9 = uVar9 + 1;
                } while (lVar19 != 0);
                uStack_258 = (unsigned int)uVar37;
              }
            }
          }
          else {
            puVar25 = (unsigned short *)(iVar17 * 6 + uVar3);
            *puVar25 = *puVar25 & 0xfff;
            puVar20 = (unsigned short *)((iVar17 + 1) * 6 + uVar3);
            *(unsigned int *)(puVar25 + 1) = *(unsigned int *)(puVar25 + 1) & 0xfffffffc | 0x6c;
            iVar17 = (int)uVar33 * 0xc + uVar2;
            *puVar20 = (unsigned short)((uVar14 & 0xffffffff) << 4) | 2;
            iVar6 = (int)uVar14 * 0xc;
            uVar39 = uVar39 + 2;
            uVar33 = uVar33 + 2;
            uVar14 = uVar14 + 2;
            *(unsigned int *)(puVar20 + 1) = *(unsigned int *)(puVar20 + 1) & 0xffff0 | 1;
            iVar21 = *(int *)(uVar2 + 0x3088) + iVar6;
            *(unsigned int *)(*(int *)(uVar2 + 0x3088) + iVar6) = *(unsigned int *)(iVar17 + 0x10);
            *(unsigned int *)(iVar21 + 4) = *(unsigned int *)(iVar17 + 0x14);
            *(unsigned int *)(iVar21 + 8) = *(unsigned int *)(iVar17 + 0x18);
            iVar6 = *(int *)(uVar2 + 0x3088) + iVar6;
            *(unsigned int *)(iVar6 + 0xc) = *(unsigned int *)(iVar17 + 0x1c);
            *(unsigned int *)(iVar6 + 0x10) = *(unsigned int *)(iVar17 + 0x20);
            *(unsigned int *)(iVar6 + 0x14) = *(unsigned int *)(iVar17 + 0x24);
          }
        }
        else {
          iVar17 = iStack_25c;
          if (iStack_25c != -1) goto LAB_82b76b88;
        }
LAB_82b76e58:
        iVar17 = *piVar29;
        bVar1 = *(int *)(uVar2 + 0x3368) != 0;
        if (bVar1) {
          memcpy(&stack_pair_240.first,iVar17,0x18);
          *piVar29 = *(int *)(iVar17 + 0x14);
          (*(int (**)())puStack00000014[2])(*puStack00000014,iVar17);
          uVar28 = (unsigned __int64)uStack_234;
          uVar31 = (unsigned __int64)uStack_238;
        }
        *(int *)(uVar2 + 0x3368) = *(int *)(uVar2 + 0x3368) + -1;
      }
      else {
        uVar36 = uVar36 - uVar33;
        uVar9 = 0;
        if (uVar36 != 0) {
          lVar24 = uVar14 * 0xc;
          lVar19 = uVar33 * 0xc + uVar35 + 0x10;
          lVar11 = uVar39 * 6 + uVar34 + 2;
          uVar33 = uVar36 + uVar33;
          do {
            uVar37 = uVar9 + ((uVar9 & 0xffffffff) / 6) * -6;
            puVar38 = (unsigned int *)lVar11;
            if (uVar37 == 0) {
              uVar27 = (unsigned short)((uVar14 & 0xfffffff) << 4);
              *(unsigned short *)((int)puVar38 + -2) = uVar27 | *(unsigned short *)((int)puVar38 + -2) & 0xf;
              *puVar38 = *puVar38 & 0xffff0 | 1;
              if ((uVar36 - uVar9 & 0xffffffff) < 6) {
                uVar27 = (unsigned short)(uVar36 - uVar9) & 0xf | uVar27;
              }
              else {
                uVar27 = uVar27 | 6;
              }
              *(unsigned short *)((int)puVar38 + -2) = uVar27;
            }
            if (bVar7) {
              if ((uVar9 & 0xffffffff) != 0) {
                fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i == 0",
                                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                  ,0x3197);
              }
              iVar17 = 2;
              bVar7 = false;
            }
            else {
              iVar17 = 0;
            }
            uVar14 = uVar14 + 1;
            *puVar38 = *puVar38 & 0xfffff |
                       (iVar17 << ((unsigned int)((uVar37 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                       *puVar38 & 0xfff00000;
            puVar22 = (unsigned int *)lVar19;
            puVar26 = (unsigned int *)(*(int *)(uVar2 + 0x3088) + (int)lVar24);
            lVar24 = lVar24 + 0xc;
            *puVar26 = *puVar22;
            puVar26[1] = puVar22[1];
            lVar19 = lVar19 + 0xc;
            puVar26[2] = puVar22[2];
            if (((uVar37 & 0xffffffff) == 5) || ((uVar9 & 0xffffffff) == (uVar36 - 1 & 0xffffffff)))
            {
              uVar39 = uVar39 + 1;
              lVar11 = lVar11 + 6;
            }
            uVar9 = uVar9 + 1;
          } while ((uVar9 & 0xffffffff) < (uVar36 & 0xffffffff));
        }
      }
    }
    else {
      uVar36 = 0;
      uVar9 = *(unsigned int *)(uVar2 + 0xc) - uVar33;
      if (uVar9 != 0) {
        lVar24 = uVar14 * 0xc;
        lVar19 = uVar33 * 0xc + uVar35 + 0x10;
        lVar11 = uVar39 * 6 + uVar34 + 2;
        uVar33 = uVar9 + uVar33;
        do {
          uVar37 = uVar36 + ((uVar36 & 0xffffffff) / 6) * -6;
          puVar38 = (unsigned int *)lVar11;
          if (uVar37 == 0) {
            uVar10 = uVar9 - uVar36;
            uVar15 = *puVar38;
            uVar27 = (unsigned short)((uVar14 & 0xfffffff) << 4);
            *puVar38 = uVar15 & 0xfffff;
            *(unsigned short *)((int)puVar38 + -2) = uVar27 | *(unsigned short *)((int)puVar38 + -2) & 0xf;
            if ((uVar10 & 0xffffffff) < 7) {
              uVar15 = uVar15 & 0xffff0 | 2;
              bVar8 = true;
            }
            else {
              uVar15 = uVar15 & 0xffff0 | 1;
            }
            *puVar38 = uVar15;
            if ((uVar10 & 0xffffffff) < 6) {
              *(unsigned short *)((int)puVar38 + -2) = (unsigned short)uVar10 & 0xf | uVar27;
            }
            else {
              *(unsigned short *)((int)puVar38 + -2) = uVar27 | 6;
            }
          }
          if (bVar7) {
            if ((uVar36 & 0xffffffff) != 0) {
              fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i == 0",
                                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                ,0x31e5);
            }
            iVar17 = 2;
            bVar7 = false;
          }
          else {
            iVar17 = 0;
          }
          uVar14 = uVar14 + 1;
          *puVar38 = *puVar38 & 0xfffff |
                     (iVar17 << ((unsigned int)((uVar37 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                     *puVar38 & 0xfff00000;
          puVar22 = (unsigned int *)lVar19;
          puVar26 = (unsigned int *)(*(int *)(uVar2 + 0x3088) + (int)lVar24);
          lVar24 = lVar24 + 0xc;
          *puVar26 = *puVar22;
          puVar26[1] = puVar22[1];
          lVar19 = lVar19 + 0xc;
          puVar26[2] = puVar22[2];
          if (((uVar37 & 0xffffffff) == 5) || ((uVar36 & 0xffffffff) == (uVar9 - 1 & 0xffffffff))) {
            uVar39 = uVar39 + 1;
            lVar11 = lVar11 + 6;
          }
          uVar36 = uVar36 + 1;
        } while ((uVar36 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
    }
    if ((unsigned __int64)*(unsigned int *)(uVar2 + 0xc) <= (uVar33 & 0xffffffff)) {
      if (!bVar8) {
        puVar5 = (unsigned short *)((int)uVar39 * 6 + uVar3);
        uVar39 = uVar39 + 1;
        *puVar5 = (short)((uVar14 & 0xffffffff) << 4);
        *(unsigned int *)(puVar5 + 1) = *(unsigned int *)(puVar5 + 1) & 0xffff0 | 2;
      }
      if ((uVar39 & 0xffffffff) < (unsigned __int64)uStack_254) {
        lVar19 = uStack_254 - uVar39;
        lVar24 = uVar39 * 6 + uVar34 + -4;
        do {
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 6;
          *(unsigned int *)lVar24 = *(unsigned int *)(iVar17 + 6) & 0xfffffff0;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      return;
    }
  } while( true );
}

