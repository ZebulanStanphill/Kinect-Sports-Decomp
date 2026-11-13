extern int fn_826944C8();
extern int fn_82696D38();
extern int fn_826BCE08();
extern int fn_8278B1D8();
extern int fn_8278B208();
extern int fn_8278D038();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern int fn_82F65390();
extern int fn_82F6A3E8();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82011710;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_827AC600(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  char *pcVar9;
  unsigned short uVar10;
  unsigned short uVar11;
  char *pcVar12;
  char *pcVar13;
  unsigned __int64 uVar14;
  double dVar15;
  unsigned int uStack_30;
  unsigned int *puStack_2c;
  unsigned __int64 uStack_28;
  
  fn_82696D38(&puStack_2c,param_3,*(unsigned int *)(param_1 + 4),0xffffffffffffffff,0);
  pcVar9 = "color";
  uVar14 = (unsigned __int64)*puStack_2c;
  uStack_30 = 0;
  uVar5 = puStack_2c[4];
  pcVar13 = *(char **)*param_2;
  pcVar12 = pcVar13;
  do {
    cVar1 = *pcVar12;
    cVar2 = *pcVar9;
    if (cVar1 == '\0') break;
    pcVar12 = pcVar12 + 1;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar5 = fn_82F6A3E8(uVar14 + 1,&uStack_30,0x10);
    iVar6 = *(int *)(param_1 + 8);
    *(unsigned int *)(iVar6 + 0x50) = *(unsigned int *)(iVar6 + 0x50) & 0xff000000 | uVar5 & 0xffffff;
    *(unsigned short *)(iVar6 + 0x5a) = *(unsigned short *)(iVar6 + 0x5a) | 1;
  }
  else {
    pcVar9 = "display";
    pcVar12 = pcVar13;
    do {
      cVar1 = *pcVar12;
      cVar2 = *pcVar9;
      if (cVar1 == '\0') break;
      pcVar12 = pcVar12 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      pcVar9 = "fontFamily";
      pcVar12 = pcVar13;
      do {
        cVar1 = *pcVar12;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar12 = pcVar12 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        fn_8278D038((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x30,uVar14,uVar5);
      }
      else {
        pcVar9 = "fontSize";
        pcVar12 = pcVar13;
        do {
          cVar1 = *pcVar12;
          cVar2 = *pcVar9;
          if (cVar1 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          dVar15 = (double)fn_826BCE08(uVar14,&uStack_30);
          iVar6 = *(int *)(param_1 + 8);
          if (lbl_82011710 <= (double)(float)dVar15) {
            uVar10 = 0xffff;
          }
          else {
            uStack_28 = (__int64)((double)(float)dVar15 * (double)lbl_8200571C);
            uVar10 = (((unsigned __int64)(uStack_28) >> 48) & 0xFFFF);
          }
          *(unsigned short *)(iVar6 + 0x56) = uVar10;
          *(unsigned short *)(iVar6 + 0x5a) = *(unsigned short *)(iVar6 + 0x5a) | 8;
        }
        else {
          pcVar9 = "fontStyle";
          pcVar12 = pcVar13;
          do {
            cVar1 = *pcVar12;
            cVar2 = *pcVar9;
            if (cVar1 == '\0') break;
            pcVar12 = pcVar12 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            uVar8 = uVar5;
            if (3 < uVar5) {
              uVar8 = 4;
            }
            iVar6 = fn_82F65390(0xffffffff821ae24c,uVar14,uVar8);
            if (iVar6 == 0) {
              uVar7 = 0;
            }
            else {
              if (8 < uVar5) {
                uVar5 = 9;
              }
              iVar6 = fn_82F65390(0xffffffff82011774,uVar14,uVar5);
              if (iVar6 != 0) goto LAB_827acd58;
              uVar7 = 1;
            }
            fn_8278D368((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x30,uVar7);
          }
          else {
            pcVar9 = "fontWeight";
            pcVar12 = pcVar13;
            do {
              cVar1 = *pcVar12;
              cVar2 = *pcVar9;
              if (cVar1 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              uVar8 = uVar5;
              if (5 < uVar5) {
                uVar8 = 6;
              }
              iVar6 = fn_82F65390(0xffffffff821ae24c,uVar14,uVar8);
              if (iVar6 == 0) {
                uVar7 = 0;
              }
              else {
                if (3 < uVar5) {
                  uVar5 = 4;
                }
                iVar6 = fn_82F65390(0xffffffff8201178c,uVar14,uVar5);
                if (iVar6 != 0) goto LAB_827acd58;
                uVar7 = 1;
              }
              fn_8278D2E0((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x30,uVar7);
            }
            else {
              pcVar9 = "kerning";
              pcVar12 = pcVar13;
              do {
                cVar1 = *pcVar12;
                cVar2 = *pcVar9;
                if (cVar1 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                uVar8 = uVar5;
                if (3 < uVar5) {
                  uVar8 = 4;
                }
                iVar6 = fn_82F65390(0xffffffff82196f18,uVar14,uVar8);
                if (iVar6 == 0) {
                  uVar7 = 0;
                }
                else {
                  if (4 < uVar5) {
                    uVar5 = 5;
                  }
                  iVar6 = fn_82F65390(0xffffffff82196f10,uVar14,uVar5);
                  if (iVar6 != 0) goto LAB_827acd58;
                  uVar7 = 1;
                }
                fn_8278B208((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x30,uVar7);
              }
              else {
                pcVar9 = "letterSpacing";
                pcVar12 = pcVar13;
                do {
                  cVar1 = *pcVar12;
                  cVar2 = *pcVar9;
                  if (cVar1 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  dVar15 = (double)fn_826BCE08(uVar14,&uStack_30);
                  iVar6 = *(int *)(param_1 + 8);
                  fVar4 = (float)dVar15 * lbl_8200571C;
                  *(unsigned short *)(iVar6 + 0x5a) = *(unsigned short *)(iVar6 + 0x5a) | 2;
                  uStack_28 = ((((unsigned __int64)(uStack_28)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)fVar4)) & ((unsigned __int64)0xFFFF)) << 48));
                  *(unsigned short *)(iVar6 + 0x54) = (((unsigned __int64)(uStack_28) >> 48) & 0xFFFF);
                  uStack_28 = (__int64)(int)fVar4;
                }
                else {
                  pcVar9 = "marginLeft";
                  pcVar12 = pcVar13;
                  do {
                    cVar1 = *pcVar12;
                    cVar2 = *pcVar9;
                    if (cVar1 == '\0') break;
                    pcVar12 = pcVar12 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 == cVar2) {
                    dVar15 = (double)fn_826BCE08(uVar14,&uStack_30);
                    iVar3 = *(int *)(param_1 + 8);
                    iVar6 = iVar3 + 0x5c;
                    uStack_28 = (__int64)dVar15;
                    uVar11 = *(unsigned short *)(iVar3 + 0x72) | 0x10;
                    *(short *)(iVar3 + 0x6e) = (short)uStack_28;
                  }
                  else {
                    pcVar9 = "marginRight";
                    pcVar12 = pcVar13;
                    do {
                      cVar1 = *pcVar12;
                      cVar2 = *pcVar9;
                      if (cVar1 == '\0') break;
                      pcVar12 = pcVar12 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar1 == cVar2);
                    if (cVar1 == cVar2) {
                      dVar15 = (double)fn_826BCE08(uVar14,&uStack_30);
                      iVar6 = *(int *)(param_1 + 8);
                      uStack_28 = (__int64)dVar15;
                      *(unsigned short *)(iVar6 + 0x72) = *(unsigned short *)(iVar6 + 0x72) | 0x20;
                      *(short *)(iVar6 + 0x70) = (short)uStack_28;
                      goto LAB_827acd58;
                    }
                    pcVar9 = "textAlign";
                    pcVar12 = pcVar13;
                    do {
                      cVar1 = *pcVar12;
                      cVar2 = *pcVar9;
                      if (cVar1 == '\0') break;
                      pcVar12 = pcVar12 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar1 == cVar2);
                    if (cVar1 != cVar2) {
                      pcVar9 = "textDecoration";
                      pcVar12 = pcVar13;
                      do {
                        cVar1 = *pcVar12;
                        cVar2 = *pcVar9;
                        if (cVar1 == '\0') break;
                        pcVar12 = pcVar12 + 1;
                        pcVar9 = pcVar9 + 1;
                      } while (cVar1 == cVar2);
                      if (cVar1 == cVar2) {
                        uVar8 = uVar5;
                        if (3 < uVar5) {
                          uVar8 = 4;
                        }
                        iVar6 = fn_82F65390(0xffffffff821c53cc,uVar14,uVar8);
                        if (iVar6 == 0) {
                          uVar7 = 0;
                        }
                        else {
                          if (8 < uVar5) {
                            uVar5 = 9;
                          }
                          iVar6 = fn_82F65390(0xffffffff8201173c,uVar14,uVar5);
                          if (iVar6 != 0) goto LAB_827acd58;
                          uVar7 = 1;
                        }
                        fn_8278B1D8((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x30,uVar7);
                      }
                      else {
                        pcVar12 = "textIndent";
                        do {
                          cVar1 = *pcVar13;
                          cVar2 = *pcVar12;
                          if (cVar1 == '\0') break;
                          pcVar13 = pcVar13 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (cVar1 == cVar2);
                        if (cVar1 == cVar2) {
                          dVar15 = (double)fn_826BCE08(uVar14,&uStack_30);
                          iVar6 = *(int *)(param_1 + 8);
                          uStack_28 = (__int64)(int)dVar15;
                          *(unsigned short *)(iVar6 + 0x72) = *(unsigned short *)(iVar6 + 0x72) | 4;
                          *(short *)(iVar6 + 0x6a) = (short)(int)dVar15;
                        }
                      }
                      goto LAB_827acd58;
                    }
                    uVar8 = uVar5;
                    if (3 < uVar5) {
                      uVar8 = 4;
                    }
                    iVar6 = fn_82F65390(0xffffffff821adae0,uVar14,uVar8);
                    if (iVar6 == 0) {
                      iVar6 = *(int *)(param_1 + 8) + 0x5c;
                      uVar11 = *(unsigned short *)(*(int *)(param_1 + 8) + 0x72) & 0xf9fe | 1;
                    }
                    else {
                      uVar8 = uVar5;
                      if (5 < uVar5) {
                        uVar8 = 6;
                      }
                      iVar6 = fn_82F65390(0xffffffff820116c4,uVar14,uVar8);
                      if (iVar6 == 0) {
                        iVar6 = *(int *)(param_1 + 8) + 0x5c;
                        uVar11 = *(unsigned short *)(*(int *)(param_1 + 8) + 0x72) | 0x601;
                      }
                      else {
                        uVar8 = uVar5;
                        if (4 < uVar5) {
                          uVar8 = 5;
                        }
                        iVar6 = fn_82F65390(0xffffffff821adae8,uVar14,uVar8);
                        if (iVar6 == 0) {
                          iVar6 = *(int *)(param_1 + 8) + 0x5c;
                          uVar11 = *(unsigned short *)(*(int *)(param_1 + 8) + 0x72) & 0xf9fe | 0x201;
                        }
                        else {
                          if (6 < uVar5) {
                            uVar5 = 7;
                          }
                          iVar6 = fn_82F65390(0xffffffff820117a0,uVar14,uVar5);
                          if (iVar6 != 0) goto LAB_827acd58;
                          iVar6 = *(int *)(param_1 + 8) + 0x5c;
                          uVar11 = *(unsigned short *)(*(int *)(param_1 + 8) + 0x72) & 0xf9fe | 0x401;
                        }
                      }
                    }
                  }
                  *(unsigned short *)(iVar6 + 0x16) = uVar11;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_827acd58:
  uVar5 = puStack_2c[2];
  puStack_2c[2] = (unsigned int)((unsigned __int64)uVar5 - 1);
  if ((unsigned __int64)uVar5 - 1 == 0) {
    fn_826944C8();
  }
  return;
}

