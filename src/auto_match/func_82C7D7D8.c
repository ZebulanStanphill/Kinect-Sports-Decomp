extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern unsigned int lbl_820FD5E8;
extern unsigned int lbl_820FD600;
extern unsigned int lbl_820FD6F8;


void fn_82C7D7D8(int param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned __int64 *puVar7;
  unsigned char *pbVar8;
  unsigned short uVar9;
  unsigned short uVar10;
  int iVar11;
  __int64 lVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  short sVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  __int64 lVar21;
  int iVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  
  puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
  if (param_2 == (int *)0x0) {
    uVar23 = 0;
    *(unsigned int *)((int)puVar7 + 0x14) = 3;
  }
  else {
    iVar20 = *param_2;
    sVar16 = *(short *)((int)((*puVar7 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_2 + 2) & 0x7f) &
                              0xffffffff) << 1) + iVar20);
    uVar23 = (unsigned __int64)sVar16;
    if (sVar16 < 0) {
      fn_82C4E470(puVar7);
      do {
        uVar14 = *puVar7;
        fn_82C4E470(puVar7,1);
        sVar16 = *(short *)((int)(((uVar23 - ((__int64)uVar14 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar20);
        uVar23 = (unsigned __int64)sVar16;
      } while (sVar16 < 0);
    }
    else {
      iVar20 = *(int *)(puVar7 + 1);
      iVar13 = (int)(uVar23 & 0xf);
      *puVar7 = *puVar7 << (uVar23 & 0xf);
      *(int *)(puVar7 + 1) = iVar20 - iVar13;
      if (iVar20 < iVar13) {
        do {
          pbVar8 = *(unsigned char **)((int)puVar7 + 0xc);
          if (pbVar8 < (unsigned char *)(*(int *)(puVar7 + 2) - 4U)) {
            bVar1 = *pbVar8;
            bVar2 = pbVar8[1];
            bVar3 = pbVar8[2];
            bVar4 = pbVar8[3];
            bVar5 = pbVar8[4];
            bVar6 = pbVar8[5];
            iVar20 = *(int *)(puVar7 + 1);
            *(unsigned char **)((int)puVar7 + 0xc) = pbVar8 + 6;
            *(int *)(puVar7 + 1) = iVar20 + 0x30;
            *puVar7 = ((((((unsigned __int64)bVar2 + (unsigned __int64)bVar1 * 0x100) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                       (unsigned __int64)bVar6 << ((__int64)-iVar20 & 0x7fU)) + *puVar7;
            goto LAB_82c7d8f4;
          }
          iVar20 = fn_82C4E3B0(puVar7);
        } while (iVar20 == 1);
        uVar23 = (unsigned __int64)((int)sVar16 >> 4);
      }
      else {
LAB_82c7d8f4:
        uVar23 = (unsigned __int64)((int)sVar16 >> 4);
      }
    }
  }
  uVar14 = uVar23 + 1;
  if ((int)uVar14 < 0x26) {
    uVar18 = *param_3 & 0xfffffff7;
  }
  else {
    uVar14 = uVar23 - 0x25;
    uVar18 = *param_3 | 8;
  }
  *param_3 = uVar18;
  iVar20 = (int)uVar14;
  *param_3 = uVar18 & 0xfffffffb;
  if (iVar20 == 0) {
    *param_3 = uVar18 & 0xffff000b;
    *(unsigned short *)param_3 = 0;
    return;
  }
  if (iVar20 == 0x24) {
    iVar20 = 0;
    sVar16 = 0;
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x19c) -
             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar14 = uVar23 + 0x10;
    if ((uVar15 & 0xffffffff) < 0x21) {
      if ((uVar15 & 0xffffffff) == 0) {
        sVar16 = 0;
      }
      else {
        if ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            sVar16 = (short)iVar20;
            if ((uVar14 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar14;
            *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
            iVar20 = ((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) + iVar20;
            sVar16 = (short)iVar20;
            *puVar7 = *puVar7 << (uVar14 & 0x7f);
            if ((__int64)(uVar23 - uVar14) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar14 = uVar23 + 0x10;
          } while ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
        sVar16 = (short)(*puVar7 >> (0x40 - uVar15 & 0x7f)) + sVar16;
        *puVar7 = *puVar7 << (uVar15 & 0x7f);
        if ((__int64)(uVar23 - uVar15) < 0) {
          fn_82C4E5E8(puVar7);
        }
      }
    }
    else {
      sVar16 = 0;
    }
    *(short *)param_3 = sVar16;
    lVar12 = 0;
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a0) -
             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar14 = uVar23 + 0x10;
    if ((0x20 < (uVar15 & 0xffffffff)) || ((uVar15 & 0xffffffff) == 0)) {
      *param_3 = *param_3 & 0xffff000f;
      return;
    }
    if ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff)) {
      do {
        if ((uVar14 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar14;
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
        lVar12 = (unsigned __int64)
                 (unsigned int)((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) + lVar12;
        *puVar7 = *puVar7 << (uVar14 & 0x7f);
        if ((__int64)(uVar23 - uVar14) < 0) {
          fn_82C4E5E8(puVar7);
        }
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar14 = uVar23 + 0x10;
      } while ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar14 = *puVar7;
    *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
    *puVar7 = uVar14 << (uVar15 & 0x7f);
    if ((__int64)(uVar23 - uVar15) < 0) {
      fn_82C4E5E8(puVar7);
    }
    *param_3 = (unsigned int)(((uVar14 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar12 & 0xffffffff) << 4)
               & 0xfff0 | *param_3 & 0xffff000f;
    return;
  }
  if (iVar20 == 0x25) {
    *param_3 = uVar18 & 0xffff000b | 4;
    *(unsigned short *)param_3 = 0;
    return;
  }
  uVar14 = ((uVar14 & 0xffffffff) >> 0x1f) - 1 & uVar14;
  iVar20 = (int)uVar14;
  uVar23 = (__int64)iVar20 / 6 + ((__int64)iVar20 >> 0x3f);
  uVar23 = (uVar23 & 0xffffffff) + ((uVar23 & 0xffffffff) >> 0x1f);
  uVar14 = uVar14 + (uVar23 + (uVar23 & 0x7fffffff) * 2 & 0x7fffffff) * -2;
  if ((*(int *)(*(int *)(param_1 + 0x7b8) + 0x4c) == 0) || ((int)uVar14 != 5)) {
    lVar12 = 0;
    if ((int)uVar14 < 2) {
      puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
      iVar13 = 0;
      uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
      uVar17 = (unsigned __int64)*(unsigned int *)(&lbl_820FD5E8 + (int)((uVar14 & 0xffffffff) << 2));
      uVar15 = uVar23 + 0x10;
      if (uVar17 < 0x21) {
        if (uVar17 == 0) {
          iVar13 = 0;
        }
        else {
          iVar22 = 0;
          if ((uVar15 & 0xffffffff) < uVar17) {
            do {
              iVar13 = iVar22;
              if ((uVar15 & 0xffffffff) == 0) break;
              uVar17 = uVar17 - uVar15;
              *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
              iVar13 = ((int)(*puVar7 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + iVar13;
              *puVar7 = *puVar7 << (uVar15 & 0x7f);
              if ((__int64)(uVar23 - uVar15) < 0) {
                fn_82C4E5E8(puVar7);
              }
              uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
              uVar15 = uVar23 + 0x10;
              iVar22 = iVar13;
            } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
          }
          *(int *)(puVar7 + 1) = (int)(uVar23 - uVar17);
          iVar13 = (int)(*puVar7 >> (0x40 - uVar17 & 0x7f)) + iVar13;
          *puVar7 = *puVar7 << (uVar17 & 0x7f);
          if ((__int64)(uVar23 - uVar17) < 0) {
            fn_82C4E5E8(puVar7);
          }
        }
      }
      else {
        iVar13 = 0;
      }
      goto LAB_82c7de04;
    }
  }
  else {
    lVar12 = 1;
  }
  puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
  uVar24 = 1;
  lVar21 = 0;
  uVar15 = uVar23 + 0x10;
  uVar17 = (unsigned __int64)*(unsigned int *)(&lbl_820FD6F8 + (int)((uVar14 - 2 & 0xffffffff) << 2)) - lVar12;
  if ((uVar15 & 0xffffffff) == 0) {
    do {
      if ((uVar15 & 0xffffffff) == 0) break;
      uVar24 = uVar24 - uVar15;
      *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
      lVar21 = (unsigned __int64)(unsigned int)((int)(*puVar7 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar24 & 0x3f))
               + lVar21;
      *puVar7 = *puVar7 << (uVar15 & 0x7f);
      if ((__int64)(uVar23 - uVar15) < 0) {
        fn_82C4E5E8(puVar7);
      }
      uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
      uVar15 = uVar23 + 0x10;
    } while ((uVar15 & 0xffffffff) < (uVar24 & 0xffffffff));
  }
  uVar15 = *puVar7;
  *(int *)(puVar7 + 1) = (int)(uVar23 - uVar24);
  *puVar7 = uVar15 << (uVar24 & 0x7f);
  if ((__int64)(uVar23 - uVar24) < 0) {
    fn_82C4E5E8(puVar7);
  }
  if (((uVar15 >> (0x40 - uVar24 & 0x7f) & 0xffffffff) + lVar21 & 0xffffffff) == 0) {
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar24 = 1;
    lVar12 = 0;
    uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar15 = uVar23 + 0x10;
    if ((uVar15 & 0xffffffff) == 0) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar24 = uVar24 - uVar15;
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
        lVar12 = (unsigned __int64)
                 (unsigned int)((int)(*puVar7 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar24 & 0x3f)) + lVar12;
        *puVar7 = *puVar7 << (uVar15 & 0x7f);
        if ((__int64)(uVar23 - uVar15) < 0) {
          fn_82C4E5E8(puVar7);
        }
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar15 = uVar23 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar24 & 0xffffffff));
    }
    uVar15 = *puVar7;
    *(int *)(puVar7 + 1) = (int)(uVar23 - uVar24);
    *puVar7 = uVar15 << (uVar24 & 0x7f);
    if ((__int64)(uVar23 - uVar24) < 0) {
      fn_82C4E5E8(puVar7);
    }
    if (((uVar15 >> (0x40 - uVar24 & 0x7f) & 0xffffffff) + lVar12 & 0xffffffff) == 0) {
      puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar24 = 1;
      iVar22 = 0;
      uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
      uVar15 = uVar23 + 0x10;
      iVar13 = 0;
      if ((uVar15 & 0xffffffff) == 0) {
        do {
          iVar22 = iVar13;
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar24 = uVar24 - uVar15;
          *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
          iVar22 = ((int)(*puVar7 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar24 & 0x3f)) + iVar22;
          *puVar7 = *puVar7 << (uVar15 & 0x7f);
          if ((__int64)(uVar23 - uVar15) < 0) {
            fn_82C4E5E8(puVar7);
          }
          uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
          uVar15 = uVar23 + 0x10;
          iVar13 = iVar22;
        } while ((uVar15 & 0xffffffff) < (uVar24 & 0xffffffff));
      }
      uVar15 = *puVar7;
      *(int *)(puVar7 + 1) = (int)(uVar23 - uVar24);
      *puVar7 = uVar15 << (uVar24 & 0x7f);
      if ((__int64)(uVar23 - uVar24) < 0) {
        fn_82C4E5E8(puVar7);
      }
      iVar13 = ((unsigned int)LZCOUNT((int)(uVar15 >> (0x40 - uVar24 & 0x7f)) + iVar22) >> 5) + 2;
    }
    else {
      iVar13 = 1;
    }
  }
  else {
    iVar13 = 0;
  }
  puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar22 = 0;
  uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
  uVar15 = uVar23 + 0x10;
  uVar18 = (unsigned int)uVar17;
  if ((uVar17 & 0xffffffff) < 0x21) {
    if ((uVar17 & 0xffffffff) == 0) {
      iVar13 = (1 << (uVar18 & 0x3f)) * iVar13;
    }
    else {
      iVar11 = 0;
      if ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff)) {
        do {
          iVar22 = iVar11;
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar15;
          *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
          iVar22 = ((int)(*puVar7 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + iVar22;
          *puVar7 = *puVar7 << (uVar15 & 0x7f);
          if ((__int64)(uVar23 - uVar15) < 0) {
            fn_82C4E5E8(puVar7);
          }
          uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
          uVar15 = uVar23 + 0x10;
          iVar11 = iVar22;
        } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar15 = *puVar7;
      *(int *)(puVar7 + 1) = (int)(uVar23 - uVar17);
      *puVar7 = uVar15 << (uVar17 & 0x7f);
      if ((__int64)(uVar23 - uVar17) < 0) {
        fn_82C4E5E8(puVar7);
      }
      iVar13 = (1 << (uVar18 & 0x3f)) * iVar13 + (int)(uVar15 >> (0x40 - uVar17 & 0x7f)) + iVar22;
    }
  }
  else {
    iVar13 = (1 << (uVar18 & 0x3f)) * iVar13;
  }
LAB_82c7de04:
  uVar10 = (unsigned short)iVar13 & 1;
  uVar18 = iVar20 / 6;
  uVar9 = (short)*(unsigned int *)(&lbl_820FD600 + (int)((uVar14 & 0xffffffff) << 2)) +
          (short)(iVar13 >> 1) ^ -uVar10;
  *(unsigned short *)param_3 = uVar9;
  *(unsigned short *)param_3 = uVar9 + uVar10;
  if ((*(int *)(*(int *)(param_1 + 0x7b8) + 0x4c) == 0) || (lVar12 = 1, uVar18 != 5)) {
    lVar12 = 0;
  }
  uVar23 = 0;
  if ((int)uVar18 < 2) {
    if (5 < uVar18) {
      return;
    }
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    lVar21 = 0;
    uVar14 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar15 = (unsigned __int64)*(unsigned int *)(&lbl_820FD5E8 + uVar18 * 4) - lVar12;
    uVar23 = uVar14 + 0x10;
    if ((uVar15 & 0xffffffff) < 0x21) {
      if ((uVar15 & 0xffffffff) == 0) {
        uVar23 = 0;
      }
      else {
        if ((uVar23 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            if ((uVar23 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar23;
            *(int *)(puVar7 + 1) = (int)(uVar14 - uVar23);
            lVar21 = (unsigned __int64)
                     (unsigned int)((int)(*puVar7 >> (0x40 - uVar23 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) +
                     lVar21;
            *puVar7 = *puVar7 << (uVar23 & 0x7f);
            if ((__int64)(uVar14 - uVar23) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar14 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar23 = uVar14 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        *(int *)(puVar7 + 1) = (int)(uVar14 - uVar15);
        uVar23 = (*puVar7 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar21;
        *puVar7 = *puVar7 << (uVar15 & 0x7f);
        if ((__int64)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar7);
        }
      }
    }
    else {
      uVar23 = 0;
    }
  }
  else if (uVar18 - 2 < 4) {
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar17 = 1;
    lVar21 = 0;
    uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar14 = uVar23 + 0x10;
    uVar15 = (unsigned __int64)*(unsigned int *)(&lbl_820FD6F8 + (uVar18 - 2) * 4) - lVar12;
    if ((uVar14 & 0xffffffff) == 0) {
      do {
        if ((uVar14 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar14;
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
        lVar21 = (unsigned __int64)
                 (unsigned int)((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + lVar21;
        *puVar7 = *puVar7 << (uVar14 & 0x7f);
        if ((__int64)(uVar23 - uVar14) < 0) {
          fn_82C4E5E8(puVar7);
        }
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar14 = uVar23 + 0x10;
      } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    uVar14 = *puVar7;
    *(int *)(puVar7 + 1) = (int)(uVar23 - uVar17);
    *puVar7 = uVar14 << (uVar17 & 0x7f);
    if ((__int64)(uVar23 - uVar17) < 0) {
      fn_82C4E5E8(puVar7);
    }
    if (((uVar14 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar21 & 0xffffffff) == 0) {
      puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar17 = 1;
      lVar12 = 0;
      uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
      uVar14 = uVar23 + 0x10;
      if ((uVar14 & 0xffffffff) == 0) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar14;
          *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
          lVar12 = (unsigned __int64)
                   (unsigned int)((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) +
                   lVar12;
          *puVar7 = *puVar7 << (uVar14 & 0x7f);
          if ((__int64)(uVar23 - uVar14) < 0) {
            fn_82C4E5E8(puVar7);
          }
          uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
          uVar14 = uVar23 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar14 = *puVar7;
      *(int *)(puVar7 + 1) = (int)(uVar23 - uVar17);
      *puVar7 = uVar14 << (uVar17 & 0x7f);
      if ((__int64)(uVar23 - uVar17) < 0) {
        fn_82C4E5E8(puVar7);
      }
      if (((uVar14 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar12 & 0xffffffff) == 0) {
        puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar17 = 1;
        iVar13 = 0;
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar14 = uVar23 + 0x10;
        iVar20 = 0;
        if ((uVar14 & 0xffffffff) == 0) {
          do {
            iVar13 = iVar20;
            if ((uVar14 & 0xffffffff) == 0) break;
            uVar17 = uVar17 - uVar14;
            *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
            iVar13 = ((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + iVar13;
            *puVar7 = *puVar7 << (uVar14 & 0x7f);
            if ((__int64)(uVar23 - uVar14) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar14 = uVar23 + 0x10;
            iVar20 = iVar13;
          } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
        }
        uVar14 = *puVar7;
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar17);
        *puVar7 = uVar14 << (uVar17 & 0x7f);
        if ((__int64)(uVar23 - uVar17) < 0) {
          fn_82C4E5E8(puVar7);
        }
        iVar20 = ((unsigned int)LZCOUNT((int)(uVar14 >> (0x40 - uVar17 & 0x7f)) + iVar13) >> 5) + 2;
      }
      else {
        iVar20 = 1;
      }
    }
    else {
      iVar20 = 0;
    }
    puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
    lVar12 = 0;
    uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
    uVar14 = uVar23 + 0x10;
    uVar19 = (unsigned int)uVar15;
    if ((uVar15 & 0xffffffff) < 0x21) {
      if ((uVar15 & 0xffffffff) == 0) {
        uVar23 = (__int64)(1 << (uVar19 & 0x3f)) * (__int64)iVar20;
      }
      else {
        if ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            if ((uVar14 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar14;
            *(int *)(puVar7 + 1) = (int)(uVar23 - uVar14);
            lVar12 = (unsigned __int64)
                     (unsigned int)((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) +
                     lVar12;
            *puVar7 = *puVar7 << (uVar14 & 0x7f);
            if ((__int64)(uVar23 - uVar14) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar23 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar14 = uVar23 + 0x10;
          } while ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar14 = *puVar7;
        *(int *)(puVar7 + 1) = (int)(uVar23 - uVar15);
        *puVar7 = uVar14 << (uVar15 & 0x7f);
        if ((__int64)(uVar23 - uVar15) < 0) {
          fn_82C4E5E8(puVar7);
        }
        uVar23 = (__int64)(1 << (uVar19 & 0x3f)) * (__int64)iVar20 +
                 (uVar14 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar12;
      }
    }
    else {
      uVar23 = (__int64)(1 << (uVar19 & 0x3f)) * (__int64)iVar20;
    }
  }
  if (uVar18 < 6) {
    *param_3 = *param_3 & 0xffff000f |
               (*param_3 & 0xffff000f |
               ((unsigned int)((((unsigned __int64)*(unsigned int *)(&lbl_820FD600 + uVar18 * 4) & 0x7fffffff) * 2 + uVar23
                       & 0xffffffff) << 3) ^ (unsigned int)((-(uVar23 & 1) & 0xffffffff) << 4)) & 0xfff0) -
               (int)((-(uVar23 & 1) & 0xffffffff) << 4) & 0xfff0;
  }
  return;
}

