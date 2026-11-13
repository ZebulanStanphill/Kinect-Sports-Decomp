extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern unsigned int uStack_50;


unsigned __int64 fn_830C7288(int *param_1,int *param_2)

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
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uStack_50;
  
  puVar8 = (unsigned __int64 *)*param_1;
  if (param_2 == (int *)0x0) {
    *(unsigned int *)((int)puVar8 + 0x14) = 3;
  }
  else {
    iVar13 = *param_2;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_2 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar13);
    uVar14 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar15 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar14 - ((__int64)uVar15 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar13);
        uVar14 = (unsigned __int64)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar13 = *(int *)(puVar8 + 1);
      iVar12 = (int)(uVar14 & 0xf);
      *puVar8 = *puVar8 << (uVar14 & 0xf);
      *(int *)(puVar8 + 1) = iVar13 - iVar12;
      if (iVar13 < iVar12) {
        do {
          pbVar9 = *(unsigned char **)((int)puVar8 + 0xc);
          if (pbVar9 < (unsigned char *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar13 = *(int *)(puVar8 + 1);
            *(unsigned char **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar13 + 0x30;
            *puVar8 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                       (unsigned __int64)bVar6 << ((__int64)-iVar13 & 0x7fU)) + *puVar8;
            goto LAB_830c7398;
          }
          iVar13 = fn_82C4E3B0(puVar8);
        } while (iVar13 == 1);
        uVar14 = (unsigned __int64)((int)sVar7 >> 4);
      }
      else {
LAB_830c7398:
        uVar14 = (unsigned __int64)((int)sVar7 >> 4);
      }
    }
    iVar13 = (int)uVar14;
    if (iVar13 != 0) {
      if (iVar13 != 0x7d) {
        if (0xfb < iVar13) {
          *(unsigned int *)((int)puVar8 + 0x14) = 1;
          return ((unsigned __int64)uStack_50 & 0xffff) << 0x10 | (unsigned __int64)uStack_50 & 0xffffffff0000ffff
          ;
        }
        uVar15 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
        lVar16 = 0;
        uVar10 = *(unsigned int *)((int)((uVar14 & 0xffffffff) << 2) + param_1[5]);
        uVar14 = (unsigned __int64)(unsigned int)((int)uVar10 >> 4) & 0xf;
        uVar18 = ((unsigned __int64)uVar10 & 0xf) + uVar14;
        uVar17 = uVar15 + 0x10;
        if ((uVar18 < 0x21) && (uVar18 != 0)) {
          if ((uVar17 & 0xffffffff) < uVar18) {
            do {
              if ((uVar17 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar17;
              *(int *)(puVar8 + 1) = (int)(uVar15 - uVar17);
              lVar16 = (unsigned __int64)
                       (unsigned int)((int)(*puVar8 >> (0x40 - uVar17 & 0x7f)) << ((unsigned int)uVar18 & 0x3f)) +
                       lVar16;
              *puVar8 = *puVar8 << (uVar17 & 0x7f);
              if ((__int64)(uVar15 - uVar17) < 0) {
                fn_82C4E5E8(puVar8);
              }
              uVar15 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
              uVar17 = uVar15 + 0x10;
            } while ((uVar17 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar8 + 1) = (int)(uVar15 - uVar18);
          uVar17 = (*puVar8 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar16;
          *puVar8 = *puVar8 << (uVar18 & 0x7f);
          if ((__int64)(uVar15 - uVar18) < 0) {
            fn_82C4E5E8(puVar8);
          }
        }
        else {
          uVar17 = 0;
        }
        iVar13 = (int)uVar14;
        uVar11 = (int)uVar17 >> iVar13;
        uVar17 = (unsigned __int64)(unsigned int)(1 << iVar13) - 1 & uVar17;
        uVar14 = (unsigned __int64)uVar11 & 1;
        uVar15 = uVar17 & 1;
        return ((((__int64)((int)uVar17 >> 1) + ((unsigned __int64)(unsigned int)((int)uVar10 >> 0x10) & 0xff) ^
                 -uVar15) + uVar15 & 0x7fffffff) * 2 -
                ((unsigned __int64)(unsigned int)((int)uVar10 >> 0x18) & 0xff) & 0xffff) << 0x10 |
               ((__int64)((int)uVar11 >> 1) + ((unsigned __int64)(unsigned int)((int)uVar10 >> 8) & 0xff) ^
               -uVar14) + uVar14 & 0xffffffff0000ffff;
      }
      lVar16 = 0;
      uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
      uVar17 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0x46) + (unsigned __int64)*(unsigned short *)(param_1 + 0x12);
      uVar15 = uVar14 + 0x10;
      if ((uVar17 < 0x21) && (uVar17 != 0)) {
        if ((uVar15 & 0xffffffff) < uVar17) {
          do {
            if ((uVar15 & 0xffffffff) == 0) break;
            uVar17 = uVar17 - uVar15;
            *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
            lVar16 = (unsigned __int64)
                     (unsigned int)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) +
                     lVar16;
            *puVar8 = *puVar8 << (uVar15 & 0x7f);
            if ((__int64)(uVar14 - uVar15) < 0) {
              fn_82C4E5E8(puVar8);
            }
            uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
            uVar15 = uVar14 + 0x10;
          } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
        }
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
        uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16;
        *puVar8 = *puVar8 << (uVar17 & 0x7f);
        if ((__int64)(uVar14 - uVar17) < 0) {
          fn_82C4E5E8(puVar8);
        }
      }
      else {
        uVar15 = 0;
      }
      return ((unsigned __int64)(unsigned int)(1 << (*(unsigned short *)(param_1 + 0x12) & 0x3f)) - 1 & uVar15 & 0xffff) <<
             0x10 | (__int64)((int)uVar15 >> (*(unsigned short *)(param_1 + 0x12) & 0x3f)) &
                    0xffffffff0000ffffU;
    }
  }
  lVar16 = 0;
  uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
  uVar15 = uVar14 + 0x10;
  if (*(int *)param_1[5] == 0) {
    uVar17 = 1;
    if ((uVar15 & 0xffffffff) == 0) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar15;
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
        lVar16 = (unsigned __int64)
                 (unsigned int)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + lVar16;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((__int64)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
        uVar15 = uVar14 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    uVar15 = *puVar8;
    *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
    *puVar8 = uVar15 << (uVar17 & 0x7f);
    if ((__int64)(uVar14 - uVar17) < 0) {
      fn_82C4E5E8(puVar8);
    }
    uVar14 = ((uVar15 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16 & 0x7fffffff) * -2 + 1;
  }
  else {
    uVar17 = 2;
    if ((uVar15 & 0xffffffff) < 2) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar15;
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
        lVar16 = (unsigned __int64)
                 (unsigned int)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + lVar16;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((__int64)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar14 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
        uVar15 = uVar14 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
    uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16;
    *puVar8 = *puVar8 << (uVar17 & 0x7f);
    if ((__int64)(uVar14 - uVar17) < 0) {
      fn_82C4E5E8(puVar8);
    }
    uVar14 = uVar15 & 1;
    uVar14 = ((__int64)((int)uVar15 >> 1) + 1U ^ -uVar14) + uVar14;
  }
  return uVar14 & 0xffffffff0000ffff;
}

