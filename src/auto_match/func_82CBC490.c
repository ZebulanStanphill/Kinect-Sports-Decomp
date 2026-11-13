extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA6740();
extern int fn_82CA6768();
extern unsigned int lbl_83177368;
extern unsigned int lbl_83177380;


void fn_82CBC490(int param_1,int *param_2,int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  unsigned __int64 *puVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int uVar16;
  unsigned __int64 uVar15;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  
  puVar8 = *(unsigned __int64 **)(param_1 + 0x54);
  if (param_2 == (int *)0x0) {
    uVar17 = 0;
    *(unsigned int *)((int)puVar8 + 0x14) = 3;
  }
  else {
    iVar11 = *param_2;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_2 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar11);
    uVar17 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar18 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar17 - ((__int64)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar11);
        uVar17 = (unsigned __int64)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar11 = *(int *)(puVar8 + 1);
      iVar12 = (int)(uVar17 & 0xf);
      *puVar8 = *puVar8 << (uVar17 & 0xf);
      *(int *)(puVar8 + 1) = iVar11 - iVar12;
      if (iVar11 < iVar12) {
        do {
          pbVar9 = *(unsigned char **)((int)puVar8 + 0xc);
          if (pbVar9 < (unsigned char *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar11 = *(int *)(puVar8 + 1);
            *(unsigned char **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar11 + 0x30;
            *puVar8 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                       (unsigned __int64)bVar6 << ((__int64)-iVar11 & 0x7fU)) + *puVar8;
            goto LAB_82cbc5ac;
          }
          iVar11 = fn_82C4E3B0(puVar8);
        } while (iVar11 == 1);
        uVar17 = (unsigned __int64)((int)sVar7 >> 4);
      }
      else {
LAB_82cbc5ac:
        uVar17 = (unsigned __int64)((int)sVar7 >> 4);
      }
    }
  }
  if (param_3 == 8) {
    uVar18 = uVar17 + 1;
    if (0x24 < (int)uVar18) {
      uVar17 = uVar17 - 0x24;
      goto LAB_82cbc614;
    }
    uVar16 = *param_4 & 0xfffffff7;
  }
  else {
LAB_82cbc614:
    uVar16 = *param_4 | 8;
    uVar18 = uVar17;
  }
  iVar11 = (int)uVar18;
  if (iVar11 == 0) {
    *param_4 = uVar16 & 0xb;
    return;
  }
  if (iVar11 == 0x23) {
    lVar13 = 0;
    uVar17 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
    uVar18 = uVar17 + 0x10;
    uVar14 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar15 = *(unsigned int *)(param_1 + 0x19c) - uVar14;
    if ((uVar15 & 0xffffffff) < 0x21) {
      if ((uVar15 & 0xffffffff) == 0) {
        uVar18 = 0;
      }
      else {
        if ((uVar18 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            if ((uVar18 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar18;
            *(int *)(puVar8 + 1) = (int)(uVar17 - uVar18);
            lVar13 = (unsigned __int64)
                     (unsigned int)((int)(*puVar8 >> (0x40 - uVar18 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) +
                     lVar13;
            *puVar8 = *puVar8 << (uVar18 & 0x7f);
            if ((__int64)(uVar17 - uVar18) < 0) {
              fn_82C4E5E8(puVar8);
            }
            uVar17 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
            uVar18 = uVar17 + 0x10;
          } while ((uVar18 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        *(int *)(puVar8 + 1) = (int)(uVar17 - uVar15);
        uVar18 = (*puVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((__int64)(uVar17 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
      }
    }
    else {
      uVar18 = 0;
    }
    uVar10 = (unsigned int)((uVar18 & 0xffff) << 0x10);
    uVar17 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
    lVar13 = 0;
    uVar14 = *(unsigned int *)(param_1 + 0x1a0) - uVar14;
    uVar18 = uVar17 + 0x10;
    if ((0x20 < (uVar14 & 0xffffffff)) || ((uVar14 & 0xffffffff) == 0)) {
      *param_4 = uVar10 | uVar16 & 0xb;
      return;
    }
    if ((uVar18 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      do {
        if ((uVar18 & 0xffffffff) == 0) break;
        uVar14 = uVar14 - uVar18;
        *(int *)(puVar8 + 1) = (int)(uVar17 - uVar18);
        lVar13 = (unsigned __int64)
                 (unsigned int)((int)(*puVar8 >> (0x40 - uVar18 & 0x7f)) << ((unsigned int)uVar14 & 0x3f)) + lVar13;
        *puVar8 = *puVar8 << (uVar18 & 0x7f);
        if ((__int64)(uVar17 - uVar18) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar17 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
        uVar18 = uVar17 + 0x10;
      } while ((uVar18 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    uVar18 = *puVar8;
    *(int *)(puVar8 + 1) = (int)(uVar17 - uVar14);
    *puVar8 = uVar18 << (uVar14 & 0x7f);
    if ((__int64)(uVar17 - uVar14) < 0) {
      fn_82C4E5E8(puVar8);
    }
    *param_4 = (unsigned int)(((uVar18 >> (0x40 - uVar14 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) << 4)
               & 0xfff0 | uVar10 | uVar16 & 0xb;
    return;
  }
  if (iVar11 == 0x24) {
    *param_4 = uVar16 & 0xb | 4;
    return;
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
  iVar12 = fn_82CA6740(uVar18,6);
  if ((iVar11 == 0) || (lVar13 = 1, iVar12 != 5)) {
    lVar13 = 0;
  }
  uVar17 = (unsigned __int64)*(unsigned int *)(&lbl_83177368 + iVar12 * 4) - lVar13;
  if ((__int64)uVar17 < 1) {
LAB_82cbc73c:
    uVar15 = 0;
  }
  else {
    uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
    lVar13 = 0;
    uVar15 = uVar14 + 0x10;
    if ((0x20 < (uVar17 & 0xffffffff)) || ((uVar17 & 0xffffffff) == 0)) goto LAB_82cbc73c;
    if ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff)) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar15;
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
        lVar13 = (unsigned __int64)
                 (unsigned int)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + lVar13;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((__int64)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
        uVar15 = uVar14 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
    uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar13;
    *puVar8 = *puVar8 << (uVar17 & 0x7f);
    if ((__int64)(uVar14 - uVar17) < 0) {
      fn_82C4E5E8(puVar8);
    }
  }
  uVar10 = *(unsigned int *)(&lbl_83177380 + iVar12 * 4);
  iVar12 = fn_82CA6768(uVar18,6);
  if ((iVar11 == 0) || (lVar13 = 1, iVar12 != 5)) {
    lVar13 = 0;
  }
  uVar17 = (unsigned __int64)*(unsigned int *)(&lbl_83177368 + iVar12 * 4) - lVar13;
  if (0 < (__int64)uVar17) {
    uVar18 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
    lVar13 = 0;
    uVar14 = uVar18 + 0x10;
    if (((uVar17 & 0xffffffff) < 0x21) && ((uVar17 & 0xffffffff) != 0)) {
      if ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff)) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar14;
          *(int *)(puVar8 + 1) = (int)(uVar18 - uVar14);
          lVar13 = (unsigned __int64)
                   (unsigned int)((int)(*puVar8 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) +
                   lVar13;
          *puVar8 = *puVar8 << (uVar14 & 0x7f);
          if ((__int64)(uVar18 - uVar14) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar18 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
          uVar14 = uVar18 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      *(int *)(puVar8 + 1) = (int)(uVar18 - uVar17);
      uVar14 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar13;
      *puVar8 = *puVar8 << (uVar17 & 0x7f);
      if ((__int64)(uVar18 - uVar17) < 0) {
        fn_82C4E5E8(puVar8);
      }
      goto LAB_82cbc868;
    }
  }
  uVar14 = 0;
LAB_82cbc868:
  *param_4 = uVar16 & 0xb |
             (uVar16 & 0xfffb |
             ((unsigned int)((((unsigned __int64)uVar10 & 0x7fffffff) * 2 + uVar15 & 0xffffffff) << 0xf) ^
             (unsigned int)((-(uVar15 & 1) & 0xffffffff) << 0x10)) & 0xffff0000) -
             (int)((-(uVar15 & 1) & 0xffffffff) << 0x10) & 0xffff0000 |
             (uVar16 & 0xb |
             ((unsigned int)((((unsigned __int64)*(unsigned int *)(&lbl_83177380 + iVar12 * 4) & 0x7fffffff) * 2 + uVar14 &
                     0xffffffff) << 3) ^ (unsigned int)((-(uVar14 & 1) & 0xffffffff) << 4)) & 0xfff0) -
             (int)((-(uVar14 & 1) & 0xffffffff) << 4) & 0xfff0;
  return;
}

