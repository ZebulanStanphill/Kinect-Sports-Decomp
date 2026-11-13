#define true 1
extern unsigned int iStack00000034;
extern unsigned int iStack_c0;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_830EF208(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  unsigned char *pbVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned int uVar17;
  int iVar18;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  int iStack00000034;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  int iStack_c0;
  unsigned int uStack_bc;
  
  uVar3 = *(unsigned int *)(param_1 + 0x88);
  uVar4 = *(unsigned int *)(param_1 + 0xcc);
  iVar5 = *(int *)(param_1 + 0xd0);
  pbVar13 = *(unsigned char **)(param_1 + 0xf88);
  iVar6 = uVar3 * 6;
  iVar7 = iVar5 << 1;
  iVar19 = uVar4 << 1;
  lVar11 = ((unsigned __int64)uVar4 & 0x1fffffff) * 8;
  lVar9 = ((unsigned __int64)uVar4 & 0xfffffff) * 0x10;
  lVar10 = ((unsigned __int64)uVar4 + ((unsigned __int64)uVar4 & 0x3fffffff) * 4 & 0x3fffffff) * 4;
  if (param_5 == 0) {
    uVar22 = 0;
    uStack_cc = 0;
    uStack_c8 = 1;
  }
  else {
    uStack_cc = *(unsigned int *)(param_1 + 0xd0);
    uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc);
    uStack_c8 = 0x11;
  }
  uVar21 = *(unsigned int *)(param_1 + 0x8c);
  uVar8 = 0;
  uStack_c4 = 0;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iStack00000034 = param_5;
  if (uVar21 != 0) {
    iStack_c0 = 0;
    uStack_bc = param_2;
    do {
      if (*(int *)(param_1 + 0x55b4) == 0) {
        iVar12 = -((uVar8 < (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - 1) - 1);
      }
      else if ((uVar8 < ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(param_1 + 0x55d4) + iStack_c0 + 4) == 0)) {
        iVar12 = 0;
      }
      else {
        iVar12 = 1;
      }
      uVar23 = (unsigned __int64)uStack_bc;
      uVar14 = 0;
      if (uVar3 != 0) {
        do {
          uVar20 = (unsigned __int64)(char)pbVar13[1];
          uVar17 = (unsigned int)(char)pbVar13[2];
          bVar1 = pbVar13[param_5];
          uVar15 = (unsigned int)(char)pbVar13[3];
          bVar2 = pbVar13[iVar6];
          uVar8 = (unsigned __int64)bVar2;
          if ((*pbVar13 & 0x80) == 0) {
            (**(int (***)())(param_1 + 0x3e38))
                      (uVar23 + uVar22 + lVar11,iVar19,*(unsigned int *)(param_1 + 0xf8),0x10);
            if (iVar12 == 0) {
              if ((uVar20 & 0xffffffff) != 0) {
                (**(int (***)())(param_1 + 0x3e38))
                          (((uVar20 & 0xffffffff) >> 1 & 0x7ffffff8) + uVar23 + uVar22 +
                           ((unsigned __int64)uVar4 + ((unsigned __int64)uVar4 & 0x7fffffff) * 2 & 0x3fffffff) * 4
                           ,iVar19,*(unsigned int *)(param_1 + 0xf8),(uVar20 & 0xf) << 3);
              }
              (**(int (***)())(param_1 + 0x3e38))
                        (uVar23 + uVar22 + lVar9,iVar19,*(unsigned int *)(param_1 + 0xf8),0x10);
              if (((bVar2 & 0x80) == 0) && ((bVar2 & 0x7f) != 0)) {
                (**(int (***)())(param_1 + 0x3e38))
                          (((uVar8 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar10,iVar19,
                           *(unsigned int *)(param_1 + 0xf8),(uVar8 & 0xf) << 3);
              }
            }
            if (uVar14 != 0) {
              (**(int (***)())(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -5,iVar19,*(unsigned int *)(param_1 + 0xf8),8);
            }
            if (uVar17 != 0) {
              (**(int (***)())(param_1 + 0x3e3c))
                        ((__int64)(int)(uVar17 >> 4) * (__int64)(int)lVar11 + uVar23 + uVar22 + -1
                         ,iVar19,*(unsigned int *)(param_1 + 0xf8),(uVar17 & 0xf) << 2);
            }
            (**(int (***)())(param_1 + 0x3e3c))
                      (uVar22 + 3 + uVar23,iVar19,*(unsigned int *)(param_1 + 0xf8),8);
            if (uVar15 != 0) {
              iVar16 = (uVar15 & 0xf) << 2;
              uVar8 = (__int64)(int)(uVar15 >> 4) * (__int64)(int)lVar11 + uVar23;
LAB_830ef614:
              (**(int (***)())(param_1 + 0x3e3c))
                        (uVar8 + uVar22 + 7,iVar19,*(unsigned int *)(param_1 + 0xf8),iVar16);
            }
          }
          else {
            if ((bVar1 & 0x7f) != 0) {
              (**(int (***)())(param_1 + 0x3e38))
                        ((((unsigned __int64)bVar1 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar11,
                         iVar19,*(unsigned int *)(param_1 + 0xf8),((unsigned __int64)bVar1 & 0xf) << 3);
            }
            if (((iVar12 == 0) &&
                ((**(int (***)())(param_1 + 0x3e38))
                           (uVar23 + uVar22 + lVar9,iVar19,*(unsigned int *)(param_1 + 0xf8),0x10),
                (bVar2 & 0x80) == 0)) && ((bVar2 & 0x7f) != 0)) {
              (**(int (***)())(param_1 + 0x3e38))
                        (((uVar8 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar10,iVar19,
                         *(unsigned int *)(param_1 + 0xf8),(uVar8 & 0xf) << 3);
            }
            if (uVar14 != 0) {
              (**(int (***)())(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -5,iVar19,*(unsigned int *)(param_1 + 0xf8),8);
            }
            if ((uVar17 == uStack_c8) || (uVar17 == 2)) {
              (**(int (***)())(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -1,iVar19,*(unsigned int *)(param_1 + 0xf8),8);
            }
            (**(int (***)())(param_1 + 0x3e3c))
                      (uVar22 + 3 + uVar23,iVar19,*(unsigned int *)(param_1 + 0xf8),8);
            if ((uVar15 == uStack_c8) || (uVar15 == 2)) {
              iVar16 = 8;
              uVar8 = uVar23;
              goto LAB_830ef614;
            }
          }
          uVar14 = uVar14 + 1;
          pbVar13 = pbVar13 + 6;
          uVar23 = uVar23 + 0x10;
        } while (uVar14 < uVar3);
        uVar8 = (unsigned __int64)uStack_c4;
        param_5 = iStack00000034;
      }
      uStack_c4 = (int)uVar8 + 1;
      iStack_c0 = iStack_c0 + 4;
      uStack_bc = *(int *)(param_1 + 0xe4) + uStack_bc;
      if (uVar21 <= uStack_c4) break;
      uVar8 = (unsigned __int64)uStack_c4;
    } while( true );
  }
  uVar3 = *(unsigned int *)(param_1 + 0x8c);
  uVar23 = 0;
  uVar8 = (unsigned __int64)uStack00000024;
  iVar19 = *(int *)(param_1 + 0xf88);
  uVar22 = (unsigned __int64)uStack0000002c;
  uVar4 = *(unsigned int *)(param_1 + 0x88);
  if (uVar3 != 0) {
    iVar12 = 0;
    do {
      if (*(int *)(param_1 + 0x55b4) == 0) {
        iVar16 = -((uVar23 < (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - 1) - 1);
        iVar18 = -((uVar23 < (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - 2) - 1);
      }
      else {
        if (((uVar23 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x8c) - 1)) &&
           (*(int *)(*(int *)(param_1 + 0x55d4) + iVar12 + 4) == 0)) {
          iVar16 = 0;
          iVar18 = 0;
          if (((uVar23 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x8c) - 2)) &&
             (*(int *)(*(int *)(param_1 + 0x55d4) + iVar12 + 8) == 0)) {
            iVar18 = 0;
            goto LAB_830ef728;
          }
        }
        else {
          iVar18 = 1;
        }
        iVar16 = iVar18;
        iVar18 = 1;
      }
LAB_830ef728:
      uVar21 = 0;
      if (uVar4 != 0) {
        lVar9 = uVar22 - uVar8;
        uVar20 = uVar8;
        do {
          if (iVar16 == 0) {
            lVar10 = (unsigned __int64)uStack_cc + (unsigned __int64)(unsigned int)(iVar5 << 3);
            (**(int (***)())(param_1 + 0x3e38))(lVar10 + uVar20,iVar7,*(unsigned int *)(param_1 + 0xf8),8)
            ;
            (**(int (***)())(param_1 + 0x3e38))
                      (lVar10 + lVar9 + uVar20,iVar7,*(unsigned int *)(param_1 + 0xf8),8);
          }
          if (iVar18 == 0) {
            if ((*(unsigned char *)(iVar6 + iVar19 + 4) & 0xf0) != 0) {
              (**(int (***)())(param_1 + 0x3e38))
                        (uVar20 + uStack_cc + (unsigned __int64)(unsigned int)(iVar5 * 0xc),iVar7,
                         *(unsigned int *)(param_1 + 0xf8),8);
            }
            if ((*(unsigned char *)(iVar6 + iVar19 + 5) & 0xf0) != 0) {
              (**(int (***)())(param_1 + 0x3e38))
                        (lVar9 + uVar20 + (unsigned __int64)uStack_cc + (unsigned __int64)(unsigned int)(iVar5 * 0xc),
                         iVar7,*(unsigned int *)(param_1 + 0xf8),8);
            }
          }
          if (uVar21 != 0) {
            (**(int (***)())(param_1 + 0x3e3c))
                      (((unsigned __int64)uStack_cc - 5) + uVar20,iVar7,*(unsigned int *)(param_1 + 0xf8),4);
            (**(int (***)())(param_1 + 0x3e3c))
                      (((unsigned __int64)uStack_cc - 5) + lVar9 + uVar20,iVar7,
                       *(unsigned int *)(param_1 + 0xf8),4);
          }
          if ((*(unsigned char *)(iVar19 + 4) & 0xf) != 0) {
            (**(int (***)())(param_1 + 0x3e3c))
                      (uVar20 + uStack_cc + -1,iVar7,*(unsigned int *)(param_1 + 0xf8),4);
          }
          if ((*(unsigned char *)(iVar19 + 5) & 0xf) != 0) {
            (**(int (***)())(param_1 + 0x3e3c))
                      (lVar9 + uVar20 + (unsigned __int64)uStack_cc + -1,iVar7,
                       *(unsigned int *)(param_1 + 0xf8),4);
          }
          uVar21 = uVar21 + 1;
          iVar19 = iVar19 + 6;
          uVar20 = uVar20 + 8;
        } while (uVar21 < uVar4);
      }
      uVar23 = uVar23 + 1;
      iVar12 = iVar12 + 4;
      uVar8 = *(unsigned int *)(param_1 + 0xe8) + uVar8;
      uVar22 = *(unsigned int *)(param_1 + 0xe8) + uVar22;
    } while ((uVar23 & 0xffffffff) < (unsigned __int64)uVar3);
  }
  return;
}

