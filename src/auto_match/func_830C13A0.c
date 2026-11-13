extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C75630();


unsigned __int64 fn_830C13A0(int *param_1,unsigned int *param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  unsigned short uVar8;
  int *piVar9;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  unsigned char *pbVar12;
  unsigned int uVar13;
  unsigned __int64 *puVar14;
  __int64 *plVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  int iVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  
  piVar9 = (int *)*param_2;
  uVar10 = param_2[1];
  uVar21 = 0;
  iVar20 = param_2[9];
  puVar11 = (unsigned __int64 *)*param_1;
  uVar22 = (unsigned __int64)(unsigned int)param_2[2] + 1;
  if (param_3 == 0) {
    uVar24 = *puVar11;
    uVar13 = *(unsigned int *)(puVar11 + 1);
    *puVar11 = uVar24 << 1;
    *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar13 - 1);
    if ((__int64)((unsigned __int64)uVar13 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    if ((__int64)uVar24 < 0) {
      iVar17 = *piVar9;
      sVar7 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar17);
      uVar24 = (unsigned __int64)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar11,10);
        do {
          uVar18 = *puVar11;
          fn_82C4E470(puVar11,1);
          sVar7 = *(short *)((int)(((uVar24 - ((__int64)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar17);
          uVar24 = (unsigned __int64)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar17 = *(int *)(puVar11 + 1);
        iVar16 = (int)(uVar24 & 0xf);
        *(int *)(puVar11 + 1) = iVar17 - iVar16;
        *puVar11 = *puVar11 << (uVar24 & 0xf);
        if (iVar17 < iVar16) {
          do {
            pbVar12 = *(unsigned char **)((int)puVar11 + 0xc);
            if (pbVar12 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
              bVar1 = *pbVar12;
              bVar2 = pbVar12[1];
              bVar3 = pbVar12[2];
              bVar4 = pbVar12[3];
              bVar5 = pbVar12[4];
              bVar6 = pbVar12[5];
              iVar17 = *(int *)(puVar11 + 1);
              *(unsigned char **)((int)puVar11 + 0xc) = pbVar12 + 6;
              *(int *)(puVar11 + 1) = iVar17 + 0x30;
              *puVar11 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 +
                            (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5
                          ) * 0x100 + (unsigned __int64)bVar6 << ((__int64)-iVar17 & 0x7fU)) + *puVar11;
              goto LAB_830c168c;
            }
            iVar17 = fn_82C4E3B0(puVar11);
          } while (iVar17 == 1);
          uVar24 = (unsigned __int64)((int)sVar7 >> 4);
        }
        else {
LAB_830c168c:
          uVar24 = (unsigned __int64)((int)sVar7 >> 4);
        }
      }
      if ((uVar24 & 0xffffffff) == (unsigned __int64)uVar10) {
        return 0xffffffffffffffff;
      }
      uVar8 = *(unsigned short *)((int)((uVar24 & 0xffffffff) << 1) + iVar20);
      iVar20 = (int)(short)uVar8 >> 8;
      uVar25 = (unsigned __int64)iVar20;
      if ((uVar24 & 0xffffffff) < (uVar22 & 0xffffffff)) {
        iVar17 = param_2[5];
      }
      else {
        iVar17 = param_2[6];
      }
      uVar10 = *(unsigned int *)(puVar11 + 1);
      uVar23 = (unsigned __int64)*(unsigned char *)(iVar17 + iVar20) + ((unsigned __int64)uVar8 & 0xff) + 1;
      uVar18 = *puVar11 >> 0x3f;
      *puVar11 = *puVar11 << 1;
      *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar10 - 1);
      if ((__int64)((unsigned __int64)uVar10 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
    }
    else {
      uVar21 = *puVar11;
      uVar10 = *(unsigned int *)(puVar11 + 1);
      *puVar11 = uVar21 << 1;
      *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar10 - 1);
      if ((__int64)((unsigned __int64)uVar10 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      uVar24 = (uVar22 - ((__int64)uVar21 >> 0x3f)) - 1;
      if (*(char *)((int)param_1 + 0x4e3) != '\0') {
        fn_82C75630(param_1);
        *(unsigned char *)((int)param_1 + 0x4e3) = 0;
      }
      puVar14 = (unsigned __int64 *)*param_1;
      lVar19 = 0;
      uVar18 = (unsigned __int64)*(unsigned char *)(param_1 + 0x138);
      uVar21 = (unsigned __int64)*(unsigned int *)(puVar14 + 1);
      uVar22 = uVar21 + 0x10;
      if (uVar18 < 0x21) {
        if (uVar18 == 0) {
          uVar23 = 0;
        }
        else {
          if ((uVar22 & 0xffffffff) < uVar18) {
            do {
              if ((uVar22 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar22;
              *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
              lVar19 = (unsigned __int64)
                       (unsigned int)((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((unsigned int)uVar18 & 0x3f)) +
                       lVar19;
              *puVar14 = *puVar14 << (uVar22 & 0x7f);
              if ((__int64)(uVar21 - uVar22) < 0) {
                fn_82C4E5E8(puVar14);
              }
              uVar21 = (unsigned __int64)*(unsigned int *)(puVar14 + 1);
              uVar22 = uVar21 + 0x10;
            } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
          uVar23 = (*puVar14 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar19;
          *puVar14 = *puVar14 << (uVar18 & 0x7f);
          if ((__int64)(uVar21 - uVar18) < 0) {
            fn_82C4E5E8(puVar14);
          }
        }
      }
      else {
        uVar23 = 0;
      }
      plVar15 = (__int64 *)*param_1;
      lVar19 = *plVar15;
      uVar10 = *(unsigned int *)(plVar15 + 1);
      *plVar15 = lVar19 << 1;
      *(int *)(plVar15 + 1) = (int)((unsigned __int64)uVar10 - 1);
      if ((__int64)((unsigned __int64)uVar10 - 1) < 0) {
        fn_82C4E5E8();
      }
      puVar14 = (unsigned __int64 *)*param_1;
      uVar18 = (unsigned __int64)*(unsigned char *)((int)param_1 + 0x4df);
      iVar20 = 0;
      uVar21 = (unsigned __int64)*(unsigned int *)(puVar14 + 1);
      uVar22 = uVar21 + 0x10;
      if (lVar19 < 0) {
        if (uVar18 < 0x21) {
          if (uVar18 == 0) {
            iVar20 = 0;
          }
          else {
            if ((uVar22 & 0xffffffff) < uVar18) {
              do {
                if ((uVar22 & 0xffffffff) == 0) break;
                uVar18 = uVar18 - uVar22;
                *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
                iVar20 = ((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((unsigned int)uVar18 & 0x3f)) +
                         iVar20;
                *puVar14 = *puVar14 << (uVar22 & 0x7f);
                if ((__int64)(uVar21 - uVar22) < 0) {
                  fn_82C4E5E8(puVar14);
                }
                uVar21 = (unsigned __int64)*(unsigned int *)(puVar14 + 1);
                uVar22 = uVar21 + 0x10;
              } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
            }
            uVar22 = *puVar14;
            *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
            *puVar14 = uVar22 << (uVar18 & 0x7f);
            if ((__int64)(uVar21 - uVar18) < 0) {
              fn_82C4E5E8(puVar14);
            }
            iVar20 = -((int)(uVar22 >> (0x40 - uVar18 & 0x7f)) + iVar20);
          }
        }
        else {
          iVar20 = 0;
        }
      }
      else if (uVar18 < 0x21) {
        if (uVar18 == 0) {
          iVar20 = 0;
        }
        else {
          if ((uVar22 & 0xffffffff) < uVar18) {
            do {
              if ((uVar22 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar22;
              *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
              iVar20 = ((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((unsigned int)uVar18 & 0x3f)) + iVar20
              ;
              *puVar14 = *puVar14 << (uVar22 & 0x7f);
              if ((__int64)(uVar21 - uVar22) < 0) {
                fn_82C4E5E8(puVar14);
              }
              uVar21 = (unsigned __int64)*(unsigned int *)(puVar14 + 1);
              uVar22 = uVar21 + 0x10;
            } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
          iVar20 = (int)(*puVar14 >> (0x40 - uVar18 & 0x7f)) + iVar20;
          *puVar14 = *puVar14 << (uVar18 & 0x7f);
          if ((__int64)(uVar21 - uVar18) < 0) {
            fn_82C4E5E8(puVar14);
          }
        }
      }
      else {
        iVar20 = 0;
      }
      uVar18 = (unsigned __int64)(unsigned int)(iVar20 >> 0x1f) & 1;
      uVar25 = (__int64)(1 - (int)(uVar18 << 1)) * (__int64)iVar20;
      uVar21 = (unsigned __int64)((int)uVar25 >> 8);
      uVar25 = uVar25 & 0xff;
    }
  }
  else {
    iVar17 = *piVar9;
    sVar7 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar17);
    uVar24 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar11,10);
      do {
        uVar18 = *puVar11;
        fn_82C4E470(puVar11,1);
        sVar7 = *(short *)((int)(((uVar24 - ((__int64)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar17);
        uVar24 = (unsigned __int64)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar17 = *(int *)(puVar11 + 1);
      iVar16 = (int)(uVar24 & 0xf);
      *puVar11 = *puVar11 << (uVar24 & 0xf);
      *(int *)(puVar11 + 1) = iVar17 - iVar16;
      if (iVar17 < iVar16) {
        do {
          pbVar12 = *(unsigned char **)((int)puVar11 + 0xc);
          if (pbVar12 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
            bVar1 = *pbVar12;
            bVar2 = pbVar12[1];
            bVar3 = pbVar12[2];
            bVar4 = pbVar12[3];
            bVar5 = pbVar12[4];
            bVar6 = pbVar12[5];
            iVar17 = *(int *)(puVar11 + 1);
            *(unsigned char **)((int)puVar11 + 0xc) = pbVar12 + 6;
            *(int *)(puVar11 + 1) = iVar17 + 0x30;
            *puVar11 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                          * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                        (unsigned __int64)bVar6 << ((__int64)-iVar17 & 0x7fU)) + *puVar11;
            goto LAB_830c14b0;
          }
          iVar17 = fn_82C4E3B0(puVar11);
        } while (iVar17 == 1);
        uVar24 = (unsigned __int64)((int)sVar7 >> 4);
      }
      else {
LAB_830c14b0:
        uVar24 = (unsigned __int64)((int)sVar7 >> 4);
      }
    }
    if ((uVar24 & 0xffffffff) == (unsigned __int64)uVar10) {
      return 0xffffffffffffffff;
    }
    uVar10 = *(unsigned int *)(puVar11 + 1);
    uVar18 = *puVar11 >> 0x3f;
    *puVar11 = *puVar11 << 1;
    *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar10 - 1);
    if ((__int64)((unsigned __int64)uVar10 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    uVar8 = *(unsigned short *)((int)((uVar24 & 0xffffffff) << 1) + iVar20);
    uVar23 = (unsigned __int64)uVar8 & 0xff;
    lVar19 = (__int64)((int)(short)uVar8 >> 8);
    if ((uVar24 & 0xffffffff) < (uVar22 & 0xffffffff)) {
      uVar25 = *(char *)(param_2[3] + (int)uVar23) + lVar19;
    }
    else {
      uVar25 = *(char *)(param_2[4] + (int)uVar23) + lVar19;
    }
  }
  if (*(int *)((int)puVar11 + 0x14) != 0) {
    return 0xffffffffffffffff;
  }
  return ((((((uVar21 & 0xfffff) << 0xc | uVar24 & 0xffffffff) & 0xffffff) << 8 |
           uVar25 & 0xffffffff) & 0xffffff) << 1 | uVar18) << 7 | uVar23;
}

