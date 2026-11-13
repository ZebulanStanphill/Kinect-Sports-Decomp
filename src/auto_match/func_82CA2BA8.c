extern int fn_82C45138();
extern unsigned int lbl_820FDE80;
extern unsigned int lbl_820FDEA0;
extern unsigned int lbl_8317756C;
extern unsigned int lbl_8317757C;
extern unsigned int lbl_8329F0A0;
extern unsigned int lbl_8329F0EC;


unsigned __int64 fn_82CA2BA8(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iVar20;
  unsigned char **ppuVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned int *puVar26;
  int (**pcStack_90)();
  
  if ((((*(int *)(param_1 + 0x5580) == 1) && (0 < *(int *)(param_1 + 0x39f4))) &&
      (1 < *(__int64 *)(param_1 + 0xe30))) && (iVar5 = fn_82C45138(), iVar5 == 0)) {
    uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x56b4) +
             ((unsigned __int64)*(unsigned int *)(param_1 + 0x4fb4) & 0x7fffffff) * 2;
    puVar3 = *(unsigned int **)(param_1 + 0xebc);
    uVar24 = *(int *)(param_1 + 0x24) * (int)uVar18;
    uVar16 = *(unsigned int *)(param_1 + 0x20);
    uVar14 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4fb0) & 0x7fffffff) * 2 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x56ac);
    lVar13 = (__int64)((int)uVar24 >> 1) + (unsigned __int64)((int)uVar24 < 0 && (uVar24 & 1) != 0);
    lVar9 = (__int64)((int)uVar16 >> 1) + (unsigned __int64)((int)uVar16 < 0 && (uVar16 & 1) != 0);
    lVar10 = (__int64)((int)uVar18 + 1) * (__int64)(int)*(unsigned int *)(param_1 + 0x4fb4);
    lVar6 = (__int64)((int)uVar14 + 1) * (__int64)(int)*(unsigned int *)(param_1 + 0x4fb0) +
            (__int64)*(int *)(param_1 + 0x24) * (__int64)(int)uVar14 + (unsigned __int64)*puVar3 +
            (unsigned __int64)uVar16;
    lVar7 = (unsigned __int64)puVar3[1] + lVar9 + lVar13 + lVar10;
    lVar10 = (unsigned __int64)puVar3[2] + lVar9 + lVar13 + lVar10;
  }
  else {
    iVar5 = fn_82C45138(param_1);
    if (iVar5 == 0) {
      uVar14 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4fb0) & 0x7fffffff) * 2 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0xb4);
      uVar18 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4fb4) & 0x7fffffff) * 2 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0xc0);
    }
    else {
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60);
      uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c);
    }
    puVar3 = *(unsigned int **)(param_1 + 0xebc);
    uVar24 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x24);
    uVar16 = *(unsigned int *)(param_1 + 0x20);
    lVar10 = (__int64)((int)uVar24 >> 1) + (unsigned __int64)((int)uVar24 < 0 && (uVar24 & 1) != 0);
    lVar9 = (__int64)((int)uVar16 >> 1) + (unsigned __int64)((int)uVar16 < 0 && (uVar16 & 1) != 0);
    lVar6 = (__int64)*(int *)(param_1 + 0x60) * (__int64)*(int *)(param_1 + 0x24) +
            (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)uVar16 + (unsigned __int64)*puVar3;
    lVar7 = (unsigned __int64)puVar3[1] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + lVar9 + lVar10;
    lVar10 = (unsigned __int64)puVar3[2] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + lVar9 + lVar10;
  }
  uVar16 = *(unsigned int *)(param_1 + 0x30);
  uVar22 = (unsigned __int64)uVar16;
  uVar24 = *(unsigned int *)(param_1 + 0x34);
  uVar23 = (unsigned __int64)uVar24;
  uVar2 = *(unsigned short *)(param_1 + 0x3cc4) >> 3;
  uVar25 = (unsigned __int64)uVar2;
  uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28) - (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x44);
  param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d4c) + param_2;
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  iVar20 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40);
  trapWord(5,uVar25 & ~((((unsigned __int64)uVar24 & 0x7fffffff) << 1 | (unsigned __int64)(uVar24 >> 0x1f)) - 1),
           0xffff);
  iVar19 = *(int *)(param_1 + 0x4c) - iVar4;
  iVar5 = (int)uVar24 / (int)(unsigned int)uVar2;
  trapWord(6,uVar25,0);
  iVar1 = (int)uVar16 / (int)(unsigned int)uVar2;
  trapWord(6,uVar25,0);
  trapWord(5,uVar25 & ~((((unsigned __int64)uVar16 & 0x7fffffff) << 1 | (unsigned __int64)(uVar16 >> 0x1f)) - 1),
           0xffff);
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar4 != 0)) {
    if (iVar5 == 1) {
      param_2 = (__int64)(*(int *)(param_1 + 0x40) * iVar1 + iVar4) *
                (__int64)(int)(unsigned int)(*(unsigned short *)(param_1 + 0x3cc4) >> 3) + param_2;
    }
    else {
      if (iVar5 == -1) {
        uVar2 = *(unsigned short *)(param_1 + 0x3cc4);
        iVar15 = iVar4 - *(int *)(param_1 + 0x40) * iVar1;
      }
      else {
        if (iVar1 == 1) {
          param_2 = (__int64)(iVar4 * iVar5 + *(int *)(param_1 + 0x40)) *
                    (__int64)(int)(unsigned int)(*(unsigned short *)(param_1 + 0x3cc4) >> 3) + param_2;
          goto LAB_82ca2e34;
        }
        uVar2 = *(unsigned short *)(param_1 + 0x3cc4);
        iVar15 = *(int *)(param_1 + 0x40) - iVar4 * iVar5;
      }
      param_2 = param_2 - (__int64)iVar15 * (__int64)(int)(unsigned int)(uVar2 >> 3);
    }
  }
LAB_82ca2e34:
  uVar25 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3cc0);
  iVar15 = (int)uVar8;
  iVar12 = (int)uVar11;
  if (uVar25 < 0x3231564f) {
    if (uVar25 != 0x3231564e) {
      if ((uVar25 == 0) || (uVar25 == 3)) {
        puVar26 = (unsigned int *)0x0;
        if (*(short *)(param_1 + 0x3cc4) == 0x10) {
          puVar26 = &lbl_8329F0A0;
        }
        else if (*(short *)(param_1 + 0x3cc4) == 0x20) {
          puVar26 = &lbl_8329F0EC;
        }
        if ((iVar15 == iVar20) && (iVar12 == iVar19)) {
          if (iVar1 == 1) {
            pcStack_90 = (int (**)())*puVar26;
          }
          else if (iVar5 == 1) {
            pcStack_90 = (int (**)())puVar26[1];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (int (**)())puVar26[3];
          }
          else {
            pcStack_90 = (int (**)())puVar26[2];
          }
        }
        else if ((iVar12 == iVar19 * 2) && (iVar15 == iVar20 * 2)) {
          if (iVar5 == 1) {
            pcStack_90 = (int (**)())puVar26[5];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (int (**)())puVar26[7];
          }
          else if (iVar1 == 1) {
            pcStack_90 = (int (**)())puVar26[4];
          }
          else {
            pcStack_90 = (int (**)())puVar26[6];
          }
        }
        else {
          iVar4 = (int)((uVar11 & 0xffffffff) << 1);
          if ((iVar4 == iVar19) && ((int)((uVar8 & 0xffffffff) << 1) == iVar20)) {
            if (iVar5 == 1) {
              pcStack_90 = (int (**)())puVar26[9];
            }
            else if (iVar5 == -1) {
              pcStack_90 = (int (**)())puVar26[0xb];
            }
            else if (iVar1 == 1) {
              pcStack_90 = (int (**)())puVar26[8];
            }
            else {
              pcStack_90 = (int (**)())puVar26[10];
            }
          }
          else if ((iVar19 < iVar12) || (iVar20 < iVar15)) {
            if (iVar19 < iVar4 / 3) {
              pcStack_90 = (int (**)())puVar26[0x12];
            }
            else {
              uVar16 = iVar15 + (int)((uVar8 & 0xffffffff) << 1);
              if (iVar20 < (int)(((int)uVar16 >> 1) + (unsigned int)((int)uVar16 < 0 && (uVar16 & 1) != 0)))
              {
                pcStack_90 = (int (**)())puVar26[0x11];
              }
              else {
                pcStack_90 = (int (**)())puVar26[0x10];
              }
            }
          }
          else if (iVar5 == 1) {
            pcStack_90 = (int (**)())puVar26[0xd];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (int (**)())puVar26[0xf];
          }
          else if (iVar1 == 1) {
            pcStack_90 = (int (**)())puVar26[0xc];
          }
          else {
            pcStack_90 = (int (**)())puVar26[0xe];
          }
        }
        goto LAB_82ca2e70;
      }
      if (uVar25 != 0x30323449) goto LAB_82ca2e70;
    }
  }
  else if (uVar25 != 0x32315659) {
    if (uVar25 == 0x32595559) {
      pcStack_90 = (int (**)())(&lbl_8317756C)
                           [((unsigned int)((-uVar23 & ~uVar23 & 0xffffffff) >> 0x1e) & 2) +
                            (int)((-uVar22 & ~uVar22 & 0xffffffff) >> 0x1f)];
    }
    else if (uVar25 == 0x59565955) {
      pcStack_90 = (int (**)())(&lbl_8317757C)
                           [((unsigned int)((-uVar23 & ~uVar23 & 0xffffffff) >> 0x1e) & 2) +
                            (int)((-uVar22 & ~uVar22 & 0xffffffff) >> 0x1f)];
    }
    goto LAB_82ca2e70;
  }
  ppuVar21 = (unsigned char **)0x0;
  if (uVar25 == 0x30323449) {
LAB_82ca313c:
    ppuVar21 = &lbl_820FDE80;
  }
  else if (uVar25 - 0x3231564e == 0) {
    ppuVar21 = &lbl_820FDEA0;
  }
  else if ((uVar25 - 0x3231564e & 0xffffffff) == 0xb) goto LAB_82ca313c;
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar4 != 0)) {
    uVar25 = ((unsigned __int64)(*(unsigned int *)(param_1 + 0x3cc0) == 0x3231564e) ^ 1) + 1;
    if (uVar24 == 1) {
      uVar17 = *(unsigned int *)(param_1 + 0x40);
      trapWord(6,uVar25,0);
      uVar17 = (((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar16;
      trapWord(5,uVar25 & ~((((unsigned __int64)uVar17 & 0x7fffffff) << 1 | (unsigned __int64)(uVar17 >> 0x1f)) -
                           1),0xffff);
    }
    else {
      if (uVar24 == 0xffffffff) {
        uVar17 = *(unsigned int *)(param_1 + 0x40);
        uVar17 = (((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar16;
      }
      else {
        uVar17 = *(unsigned int *)(param_1 + 0x44);
        uVar17 = (((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar24;
        if (uVar16 == 1) {
          trapWord(6,uVar25,0);
          trapWord(5,uVar25 & ~((((unsigned __int64)uVar17 & 0x7fffffff) << 1 | (unsigned __int64)(uVar17 >> 0x1f)
                                ) - 1),0xffff);
          goto LAB_82ca3200;
        }
      }
      trapWord(6,uVar25,0);
      trapWord(5,uVar25 & ~((((unsigned __int64)uVar17 & 0x7fffffff) << 1 | (unsigned __int64)(uVar17 >> 0x1f)) -
                           1),0xffff);
    }
  }
LAB_82ca3200:
  if ((iVar15 == iVar20) && (iVar12 == iVar19)) {
    if (uVar24 == 1) {
      pcStack_90 = (int (**)())ppuVar21[1];
    }
    else if (uVar24 == 0xffffffff) {
      pcStack_90 = (int (**)())ppuVar21[3];
    }
    else if (uVar16 == 1) {
      pcStack_90 = (int (**)())*ppuVar21;
    }
    else {
      pcStack_90 = (int (**)())ppuVar21[2];
    }
  }
  else if (uVar24 == 1) {
    pcStack_90 = (int (**)())ppuVar21[5];
  }
  else if (uVar24 == 0xffffffff) {
    pcStack_90 = (int (**)())ppuVar21[7];
  }
  else if (uVar16 == 1) {
    pcStack_90 = (int (**)())ppuVar21[4];
  }
  else {
    pcStack_90 = (int (**)())ppuVar21[6];
  }
LAB_82ca2e70:
  (*pcStack_90)(param_2,lVar6,lVar7,lVar10,uVar8,uVar11,uVar14,uVar18);
  return 0;
}

