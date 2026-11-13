extern int fn_82E27130();
extern int fn_82E27538();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E5C858();
extern int fn_82E5C890();
extern int fn_82E5C8C8();
extern int fn_82E5C8D8();
extern int fn_82E5CC08();
extern int fn_82E5CCB0();
extern int fn_82E5F358();
extern int fn_82E5FD40();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820ED028;
extern unsigned int lbl_820ED030;
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED040;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED050;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED060;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC0;
extern unsigned int lbl_820F8EE8;
extern unsigned int lbl_820F8EF0;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E0;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int lbl_821537D8;
extern unsigned int lbl_821537E8;
extern unsigned int lbl_821537F8;
extern unsigned int lbl_82153808;
extern unsigned int lbl_82153818;
extern unsigned int lbl_82153828;
extern unsigned int lbl_82153830;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E60688(int *param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  short *psVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  char *pcVar11;
  unsigned char *pbVar12;
  unsigned int uVar13;
  unsigned char *pbVar14;
  char *pcVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iStack_90;
  int *piStack_8c;
  int *piStack_88;
  int iStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  if ((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    return -0x7ff8ffa9;
  }
  piStack_8c = (int *)0x0;
  puVar8 = (unsigned int *)0x0;
  piStack_88 = (int *)0x0;
  puVar9 = (unsigned int *)0x0;
  iStack_90 = 0;
  uVar5 = (**(int (***)())(*param_1 + 0x88))();
  lVar6 = fn_82E5C8D8(param_2,uVar5);
  if ((((-1 < lVar6) && (lVar6 = fn_82E5C8C8(param_2,0), -1 < lVar6)) &&
      (lVar6 = fn_82E5C890(param_2,lbl_820ED028,lbl_820ED030), -1 < lVar6)) &&
     ((lVar6 = fn_82E5CCB0(param_2,0,0), -1 < lVar6 &&
      (lVar6 = (**(int (***)())(*param_1 + 0x90))(param_1,&piStack_8c), -1 < lVar6)))) {
    if (piStack_8c == (int *)0x0) {
      lVar6 = -0x3ff2c945;
    }
    else {
      lVar6 = (**(int (***)())(*piStack_8c + 0x90))(piStack_8c,lbl_82153828,lbl_82153830,&iStack_90);
      if (-1 < lVar6) {
        uStack_80 = lbl_8202E618;
        uStack_7c = lbl_8202E61C;
        uStack_78 = lbl_8202E620;
        uStack_74 = lbl_8202E624;
        lVar6 = (**(int (***)())(*piStack_8c + 0x84))(piStack_8c,&uStack_80);
        if (-1 < lVar6) {
          pbVar10 = (unsigned char *)&uStack_80;
          pbVar14 = &lbl_821537A8;
          do {
            bVar1 = *pbVar14;
            bVar2 = *pbVar10;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar14 = pbVar14 + 1;
            pbVar10 = pbVar10 + 1;
          } while (pbVar14 != &lbl_821537B8);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            lVar6 = fn_82E5C858(param_2,lbl_820ED058,lbl_820ED060);
            if ((-1 < lVar6) &&
               (lVar6 = (**(int (***)())*piStack_8c)(piStack_8c,0xffffffff821531c8,&piStack_88),
               -1 < lVar6)) {
              psVar7 = (short *)(**(int (***)())(*piStack_88 + 0x98))();
              if (psVar7 == (short *)0x0) goto LAB_82e60884;
              lVar6 = fn_82E5CC08(param_2,psVar7,(unsigned __int64)(unsigned short)psVar7[8] + 0x12);
              if (-1 < lVar6) {
                iStack_84 = 0;
                fn_82E5FD40(piStack_8c,&iStack_84);
                if (*psVar7 == 0x55) {
                  lVar6 = fn_82E5C890(param_2,lbl_820ED048,lbl_820ED050);
                  if (-1 < lVar6) {
                    puVar8 = (unsigned int *)fn_82E50BE8(9,0,0,0,0);
                    if (puVar8 == (unsigned int *)0x0) goto LAB_82e60908;
                    uVar3 = psVar7[0xc];
                    *(unsigned char *)(puVar8 + 2) = 0;
                    *(unsigned short *)((int)puVar8 + 6) = 1;
                    *puVar8 = (unsigned int)uVar3;
                    *(unsigned short *)(puVar8 + 1) = uVar3;
                    lVar6 = fn_82E5CCB0(param_2,puVar8,9);
                  }
                }
                else {
                  lVar6 = fn_82E5C890(param_2,lbl_820ED038,lbl_820ED040);
                  if (-1 < lVar6) {
                    lVar6 = fn_82E50BE8(8,0,0,0,0);
                    puVar8 = (unsigned int *)0x0;
                    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                      fn_82F691F0(lVar6,0,8);
                    }
LAB_82e60908:
                    lVar6 = -0x7ff8fff2;
                  }
                }
              }
            }
          }
          else {
            pbVar10 = (unsigned char *)&uStack_80;
            pbVar14 = &lbl_821537B8;
            do {
              bVar1 = *pbVar14;
              bVar2 = *pbVar10;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar14 = pbVar14 + 1;
              pbVar10 = pbVar10 + 1;
            } while (pbVar14 != &lbl_821537C8);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
              if (iStack_90 == 0) {
                lVar6 = -0x3ff2c945;
                goto LAB_82e60de8;
              }
              lVar6 = fn_82E5C858(param_2,lbl_820F8EB8,lbl_820F8EC0);
              if (-1 < lVar6) {
                pbVar12 = (unsigned char *)(iStack_90 + 0x2c);
                pbVar14 = &lbl_821533D8;
                pbVar10 = pbVar14;
                do {
                  bVar1 = *pbVar12;
                  bVar2 = *pbVar10;
                  if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                  pbVar12 = pbVar12 + 1;
                  pbVar10 = pbVar10 + 1;
                } while (pbVar12 != (unsigned char *)(iStack_90 + 0x3c));
                if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
                  (**(int (***)())(*piStack_8c + 0x94))(piStack_8c,lbl_82153828,lbl_82153830);
                  iStack_90 = 0;
                  lVar6 = (**(int (***)())(*piStack_8c + 0x90))
                                    (piStack_8c,lbl_821533D8,lbl_821533E0,&iStack_90);
                  if (lVar6 < 0) goto LAB_82e60dbc;
                }
                if (0x57 < *(unsigned int *)(iStack_90 + 0x40)) {
                  pbVar10 = (unsigned char *)(iStack_90 + 0x2c);
                  do {
                    bVar1 = *pbVar10;
                    bVar2 = *pbVar14;
                    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                    pbVar10 = pbVar10 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while (pbVar10 != (unsigned char *)(iStack_90 + 0x3c));
                  if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
                     (iVar4 = *(int *)(iStack_90 + 0x44), iVar4 != 0)) {
                    lVar6 = fn_82E27130(*(unsigned __int64 *)(iStack_90 + 0x2c),
                                              *(unsigned __int64 *)(iStack_90 + 0x34),iVar4);
                    if (-1 < lVar6) {
                      puVar16 = (unsigned int *)(iVar4 + 0x30);
                      if (((*(unsigned int *)(iVar4 + 0x30) < 0x1001) &&
                          (uVar13 = *(unsigned int *)(iVar4 + 0x50), uVar13 < 0x101)) &&
                         (uVar3 = *(unsigned short *)(iVar4 + 0x3e), uVar3 < 0x81)) {
                        if (((uVar13 == 0) && (uVar3 < 9)) &&
                           ((uVar3 != 0 && (*(int *)(iVar4 + 0x40) == 0)))) {
                          uVar13 = 1 << (uVar3 & 0x3f);
                        }
                        uVar13 = uVar13 * 4 + *puVar16;
                        if (uVar13 < *puVar16) {
                          lVar6 = -0x7fffbffb;
                        }
                        else {
                          uVar17 = uVar13 + 0x30;
                          if (*(unsigned int *)(iStack_90 + 0x40) < uVar17) goto LAB_82e60cb0;
                          iVar18 = *(unsigned int *)(iStack_90 + 0x40) - uVar17;
                          iVar20 = iVar18 + uVar13;
                          puVar9 = (unsigned int *)fn_82E50BE8(iVar20 + 0xb,0,0,0,0);
                          if (puVar9 == (unsigned int *)0x0) goto LAB_82e60908;
                          piVar19 = (int *)((int)puVar9 + 0xb);
                          *puVar9 = *(unsigned int *)(iVar4 + 0x34);
                          puVar9[1] = *(unsigned int *)(iVar4 + 0x38);
                          *(unsigned char *)(puVar9 + 2) = 2;
                          *(short *)((int)puVar9 + 9) = (short)iVar20;
                          fn_82F68CC0(piVar19,puVar16,iVar20);
                          iStack_84 = 0;
                          lVar6 = (**(int (***)())(*piStack_8c + 0x88))(piStack_8c,&iStack_84);
                          if ((-1 < lVar6) &&
                             ((iStack_84 == 0 ||
                              (lVar6 = fn_82E27538(puVar16,(unsigned __int64)
                                                                 *(unsigned int *)(iStack_90 + 0x40) - 0x30,
                                                         (int)puVar9 + 0x1f,0), -1 < lVar6)))) {
                            *piVar19 = iVar20;
                            if (iVar18 != 0) {
                              fn_82F68CC0((int)puVar9 + (iVar20 - iVar18) + 0xb,
                                           *(int *)(iStack_90 + 0x44) + uVar17,iVar18);
                            }
                            *(unsigned int *)((int)puVar9 + 0x27) = 0;
                            *(unsigned int *)((int)puVar9 + 0x23) = 0;
                            lVar6 = fn_82E5F358(piVar19);
                            if (-1 < lVar6) {
                              lVar6 = fn_82E5CC08(param_2,puVar9,iVar20 + 0xb);
                            }
                          }
                        }
                      }
                      else {
LAB_82e60cb0:
                        lVar6 = -0x7ff8ffa9;
                      }
                    }
                    goto LAB_82e60dbc;
                  }
                }
LAB_82e60884:
                lVar6 = -0x7fff0001;
              }
            }
            else {
              pbVar10 = (unsigned char *)&uStack_80;
              pbVar14 = &lbl_821537D8;
              do {
                bVar1 = *pbVar14;
                bVar2 = *pbVar10;
                if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                pbVar14 = pbVar14 + 1;
                pbVar10 = pbVar10 + 1;
              } while (pbVar14 != &lbl_821537E8);
              if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                lVar6 = fn_82E5C858(param_2,lbl_820F8EE8,lbl_820F8EF0);
              }
              else {
                pbVar10 = (unsigned char *)&uStack_80;
                pbVar14 = &lbl_82153818;
                do {
                  bVar1 = *pbVar14;
                  bVar2 = *pbVar10;
                  if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                  pbVar14 = pbVar14 + 1;
                  pbVar10 = pbVar10 + 1;
                } while (pbVar14 != &lbl_82153828);
                if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
                  pbVar10 = (unsigned char *)&uStack_80;
                  pbVar14 = &lbl_821537F8;
                  do {
                    bVar1 = *pbVar14;
                    bVar2 = *pbVar10;
                    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                    pbVar14 = pbVar14 + 1;
                    pbVar10 = pbVar10 + 1;
                  } while (pbVar14 != &lbl_82153808);
                  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
                    pcVar11 = (char *)&uStack_80;
                    pcVar15 = &lbl_821537E8;
                    do {
                      if (*pcVar15 != *pcVar11) break;
                      pcVar15 = pcVar15 + 1;
                      pcVar11 = pcVar11 + 1;
                    } while (pcVar15 != &lbl_821537F8);
                  }
                }
                lVar6 = -0x3ff2c560;
              }
            }
          }
        }
      }
    }
  }
LAB_82e60dbc:
  if (iStack_90 != 0) {
    (**(int (***)())(*piStack_8c + 0x94))(piStack_8c,lbl_82153828,lbl_82153830);
    iStack_90 = 0;
  }
LAB_82e60de8:
  if (piStack_8c != (int *)0x0) {
    (**(int (***)())(*piStack_8c + 8))();
    piStack_8c = (int *)0x0;
  }
  if (piStack_88 != (int *)0x0) {
    (**(int (***)())(*piStack_88 + 8))();
    piStack_88 = (int *)0x0;
  }
  if (puVar8 != (unsigned int *)0x0) {
    fn_82E4FE40(puVar8);
  }
  if (puVar9 != (unsigned int *)0x0) {
    fn_82E4FE40(puVar9);
  }
  return lVar6;
}

