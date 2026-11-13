typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern int fn_82C47D90();
extern int fn_82C7BE90();
extern int fn_82C7BFB8();
extern int memcpy();


unsigned __int64
fn_82C7CA40(int param_1,unsigned short *param_2,unsigned char *param_3,int *param_4,unsigned int *param_5,int param_6)

{
  unsigned short uVar1;
  bool bVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned char *pbVar6;
  unsigned short uVar7;
  unsigned char *pbVar8;
  unsigned char bVar9;
  int iVar10;
  unsigned short *puVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned short *puVar15;
  unsigned short *puVar16;
  int iVar17;
  unsigned int *puStack00000034;
  unsigned int auStack_a0;
  
  puVar11 = *(unsigned short **)(param_1 + 0x5608);
  iVar5 = *(int *)(param_1 + 0x5604);
  uVar14 = 0;
  bVar2 = false;
  bVar3 = false;
  if (((param_2 == (unsigned short *)0x0) || (param_4 == (int *)0x0)) || (param_5 == (unsigned int *)0x0)) {
LAB_82c7d17c:
    uVar4 = 0xfffffffffffffff7;
  }
  else {
    puStack00000034 = param_5;
    if (*(unsigned char **)(param_1 + 0x560c) < param_3 + *(int *)(param_1 + 0x55f4)) {
      iVar5 = fn_82C7BFB8(param_1,0);
      if (iVar5 != 0) goto LAB_82c7d17c;
      puVar11 = *(unsigned short **)(param_1 + 0x5608);
      iVar5 = *(int *)(param_1 + 0x5604);
    }
    if (*(int *)(param_1 + 0x55ec) == 0) {
      if (0 < *(int *)(param_1 + 0x55f4)) {
        iVar10 = 0;
        do {
          *(unsigned char *)(iVar10 + (int)puVar11) = *(unsigned char *)(param_1 + 0x5600 + iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x55f4));
        memcpy((unsigned char *)(*(int *)(param_1 + 0x55f4) + (int)puVar11),param_2,param_3);
        iVar10 = *(int *)(param_1 + 0x55f4);
        *(unsigned int *)(param_1 + 0x55f4) = 0;
        param_3 = param_3 + iVar10;
        param_2 = puVar11;
      }
      iVar10 = 0;
      uVar13 = *(unsigned int *)(param_1 + 22000) & 0xff;
      do {
        if (bVar2) break;
        if (iVar10 != 0) {
          uVar13 = (unsigned int)*(unsigned char *)((int)param_2 + 3);
        }
        puVar11 = (unsigned short *)(iVar10 + (int)param_2);
        if (param_3 < (unsigned char *)(iVar10 + 4)) {
LAB_82c7cc50:
          puVar15 = (unsigned short *)((int)param_2 + (int)param_3);
          bVar2 = true;
          *(unsigned int *)(param_1 + 22000) = uVar13;
        }
        else {
          puVar15 = puVar11;
          iVar17 = iVar10;
          if (((unsigned int)param_2 & 1) == 0) {
LAB_82c7cbb8:
            pbVar8 = (unsigned char *)(iVar17 + 2);
            if (pbVar8 < param_3 + -1) {
              pbVar6 = (unsigned char *)(iVar17 + 4);
              uVar7 = *puVar15;
              do {
                uVar1 = puVar15[1];
                if ((uVar7 & uVar1) == 0) {
                  if ((uVar7 == 0) && ((uVar1 & 0xff00) == 0x100)) goto LAB_82c7cc48;
                  if (((uVar7 & 0xff) == 0) && ((uVar1 == 1 && (pbVar6 < param_3)))) {
                    puVar15 = (unsigned short *)((int)puVar15 + 1);
                    goto LAB_82c7cc48;
                  }
                }
                pbVar8 = pbVar8 + 2;
                pbVar6 = pbVar6 + 2;
                puVar15 = puVar15 + 1;
                uVar7 = uVar1;
              } while (pbVar8 < param_3 + -1);
            }
            goto LAB_82c7cc50;
          }
          if (((*(unsigned char *)(param_2 + 2) != 0) || (*(unsigned char *)((int)param_2 + 5) != 0)) ||
             (puVar15 = param_2, *(unsigned char *)(param_2 + 3) != 1)) {
            puVar15 = (unsigned short *)((int)puVar11 + 1);
            iVar17 = iVar10 + 1;
            goto LAB_82c7cbb8;
          }
LAB_82c7cc48:
          if (puVar15 == (unsigned short *)0x0) goto LAB_82c7cc50;
        }
        if ((param_6 != 0) && (bVar2)) {
          uVar12 = (int)puVar15 - (int)puVar11;
          if ((uVar12 < 3) ||
             (((*(unsigned char *)((int)puVar15 + -1) != 1 || (*(unsigned char *)(puVar15 + -1) != 0)) ||
              (*(unsigned char *)((int)puVar15 + -3) != 0)))) {
            if (((uVar12 < 2) || (*(unsigned char *)((int)puVar15 + -1) != 0)) ||
               (*(unsigned char *)(puVar15 + -1) != 0)) {
              if ((uVar12 == 0) || (*(unsigned char *)((int)puVar15 + -1) != 0)) {
                *(unsigned int *)(param_1 + 0x55f4) = 0;
              }
              else {
                *(unsigned int *)(param_1 + 0x55f4) = 1;
                *(unsigned char *)(param_1 + 0x5600) = 0;
              }
            }
            else {
              *(unsigned int *)(param_1 + 0x55f4) = 2;
              *(unsigned char *)(param_1 + 0x5600) = 0;
              *(unsigned char *)(param_1 + 0x5601) = 0;
            }
          }
          else {
            *(unsigned int *)(param_1 + 0x55f4) = 3;
            *(unsigned char *)(param_1 + 0x5600) = 0;
            *(unsigned char *)(param_1 + 0x5601) = 0;
            *(unsigned char *)(param_1 + 0x5602) = 1;
          }
          bVar3 = true;
          puVar15 = (unsigned short *)((uVar12 - *(int *)(param_1 + 0x55f4)) + (int)puVar11);
        }
        if (((uVar13 == 0xd) || (uVar13 == 0xc)) || (uVar13 == 0xb)) {
          for (uVar12 = (int)puVar15 - (int)puVar11;
              (uVar12 != 0 && (*(unsigned char *)((int)puVar11 + (uVar12 - 1)) == 0)); uVar12 = uVar12 - 1) {
          }
          if ((iVar10 == 4) || (*(int *)(param_1 + 0x561c) == 1)) {
            if (uVar13 == 0xc) {
              *(unsigned int *)(param_1 + 0x55cc) = uVar12;
              *(unsigned int *)(param_1 + 0x5624) = uVar14;
              *(unsigned int *)(param_1 + 0x5620) = 1;
              *(unsigned int *)(param_1 + 0x55c0) = *(unsigned int *)(param_1 + 0x55bc);
            }
            if (uVar13 == 0xd) {
              *(unsigned int *)(param_1 + 0x55c8) = uVar12;
              *(int *)(param_1 + 0x55e8) = *(int *)(param_1 + 0x55e8) + 1;
            }
            if (uVar13 == 0xb) {
              puVar16 = puVar11;
              if (iVar10 == 0) {
                if (*(int *)(param_1 + 0x561c) == 1) {
                  if (uVar12 < 2) {
                    if ((param_6 == 1) && (uVar12 == 1)) {
                      iVar10 = *(int *)(param_1 + 0x55f4);
                      if (2 < iVar10) {
                        return 1;
                      }
                      if (0 < iVar10) {
                        iVar17 = iVar10;
                        do {
                          *(unsigned char *)(param_1 + 0x5600 + iVar10) =
                               *(unsigned char *)(param_1 + 0x55ff + iVar10);
                          iVar10 = iVar10 + -1;
                          iVar17 = iVar17 + -1;
                        } while (iVar17 != 0);
                      }
                      bVar9 = *(unsigned char *)puVar11;
                      *(unsigned int *)(param_1 + 0x561c) = 1;
                      goto LAB_82c7d064;
                    }
                  }
                  else {
                    auStack_a0 = (unsigned int)(unsigned char)((unsigned char)*puVar11 >> 7) + (unsigned int)*(unsigned char *)puVar11 * 2;
                    uVar4 = fn_82C47D90(param_1,1,&auStack_a0,uVar12,
                                              *(unsigned int *)(param_1 + 0x5620));
                    if ((int)uVar4 == 0) goto LAB_82c7d010;
                    if ((int)uVar4 != 1) goto LAB_82c7d0f8;
                    iVar10 = uVar14 + 1;
                    uVar12 = uVar12 - 2;
                    *(char *)(iVar5 + uVar14) = (char)(auStack_a0 >> 1);
                    uVar14 = uVar14 + 2;
                    *(unsigned char *)(iVar5 + iVar10) = (unsigned char)*puVar11 & 0x7f;
                    *(unsigned int *)(param_1 + 0x561c) = 0;
                    puVar11 = puVar11 + 1;
                    param_5 = puStack00000034;
                  }
                }
              }
              else if (uVar12 < 2) {
                if ((param_6 == 1) && (*(unsigned int *)(param_1 + 0x561c) = 1, uVar12 == 1)) {
                  iVar10 = *(int *)(param_1 + 0x55f4);
                  if (2 < iVar10) {
                    return 1;
                  }
                  if (0 < iVar10) {
                    iVar17 = iVar10;
                    do {
                      *(unsigned char *)(param_1 + 0x5600 + iVar10) =
                           *(unsigned char *)(param_1 + 0x55ff + iVar10);
                      iVar10 = iVar10 + -1;
                      iVar17 = iVar17 + -1;
                    } while (iVar17 != 0);
                  }
                  bVar9 = *(unsigned char *)puVar11;
LAB_82c7d064:
                  uVar12 = 0;
                  *(unsigned char *)(param_1 + 0x5600) = bVar9;
                  *(int *)(param_1 + 0x55f4) = *(int *)(param_1 + 0x55f4) + 1;
                }
              }
              else {
                auStack_a0 = (unsigned int)(unsigned char)((unsigned char)*puVar11 >> 7) + (unsigned int)*(unsigned char *)puVar11 * 2;
                uVar4 = fn_82C47D90(param_1,1,&auStack_a0,uVar12,
                                          *(unsigned int *)(param_1 + 0x5620));
                if ((int)uVar4 != 0) {
                  if ((int)uVar4 != 1) {
LAB_82c7d0f8:
                    if ((int)uVar4 == -1) {
                      return 1;
                    }
                    return uVar4;
                  }
                  iVar10 = uVar14 + 1;
                  uVar12 = uVar12 - 2;
                  puVar16 = puVar11 + 1;
                  *(char *)(iVar5 + uVar14) = (char)(auStack_a0 >> 1);
                  uVar14 = uVar14 + 2;
                  *(unsigned char *)(iVar5 + iVar10) = (unsigned char)*puVar11 & 0x7f;
                }
LAB_82c7d010:
                *(unsigned int *)(param_1 + 0x561c) = 0;
                puVar11 = puVar16;
                param_5 = puStack00000034;
              }
            }
          }
          memcpy(iVar5 + uVar14,puVar11,uVar12);
          uVar14 = uVar12 + uVar14;
        }
        else {
          iVar10 = (int)puVar15 - (int)puVar11;
          if (uVar13 < 0x1e) {
            if (uVar13 == 0x1d) {
              if ((param_6 != 1) || (uVar4 = 1, !bVar2)) {
                uVar4 = 0;
              }
              fn_82C7BE90(param_1,6,puVar11,iVar10,uVar4);
            }
            else if (uVar13 != 10) {
              if (uVar13 == 0x1b) {
                if ((param_6 != 1) || (uVar4 = 1, !bVar2)) {
                  uVar4 = 0;
                }
                fn_82C7BE90(param_1,8,puVar11,iVar10,uVar4);
              }
              else if (uVar13 == 0x1c) {
                if ((param_6 != 1) || (uVar4 = 1, !bVar2)) {
                  uVar4 = 0;
                }
                fn_82C7BE90(param_1,7,puVar11,iVar10,uVar4);
              }
            }
          }
          else if (uVar13 < 0x20) {
            if (uVar13 == 0x1f) {
              if ((param_6 != 1) || (uVar4 = 1, !bVar2)) {
                uVar4 = 0;
              }
              fn_82C7BE90(param_1,4,puVar11,iVar10,uVar4);
            }
            else if (uVar13 == 0x1e) {
              if ((param_6 != 1) || (uVar4 = 1, !bVar2)) {
                uVar4 = 0;
              }
              fn_82C7BE90(param_1,5,puVar11,iVar10,uVar4);
            }
          }
        }
        iVar10 = 4;
        param_3 = (unsigned char *)((int)param_2 + ((int)param_3 - (int)puVar15));
        param_2 = puVar15;
      } while ((unsigned char *)0x3 < param_3);
      if ((param_6 != 0) && (!bVar3)) {
        iVar10 = iVar5 + uVar14;
        if ((uVar14 < 3) ||
           (((*(char *)(iVar10 + -1) != '\x01' || (*(char *)(iVar10 + -2) != '\0')) ||
            (*(char *)(iVar10 + -3) != '\0')))) {
          if (((uVar14 < 2) || (*(char *)(iVar10 + -1) != '\0')) || (*(char *)(iVar10 + -2) != '\0')
             ) {
            if ((uVar14 == 0) || (*(char *)(iVar10 + -1) != '\0')) {
              *(unsigned int *)(param_1 + 0x55f4) = 0;
            }
            else {
              *(unsigned int *)(param_1 + 0x55f4) = 1;
              *(unsigned char *)(param_1 + 0x5600) = 0;
            }
          }
          else {
            *(unsigned int *)(param_1 + 0x55f4) = 2;
            *(unsigned char *)(param_1 + 0x5600) = 0;
            *(unsigned char *)(param_1 + 0x5601) = 0;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0x55f4) = 3;
          *(unsigned char *)(param_1 + 0x5600) = 0;
          *(unsigned char *)(param_1 + 0x5601) = 0;
          *(unsigned char *)(param_1 + 0x5602) = 1;
        }
        uVar14 = uVar14 - *(int *)(param_1 + 0x55f4);
      }
      *param_4 = iVar5;
      uVar4 = 0;
      *param_5 = uVar14;
    }
    else {
      *param_5 = (unsigned int)param_3;
      uVar4 = 0;
      *param_4 = (int)param_2;
    }
  }
  return uVar4;
}

