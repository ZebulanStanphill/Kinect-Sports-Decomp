extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA6780();
extern int fn_82CBDE30();


unsigned __int64 fn_82CA7BC0(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned __int64 *puVar7;
  unsigned char *pbVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  short sVar16;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  
  puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
  if ((int *)(param_1 + 0x848) == (int *)0x0) {
    sVar16 = 0;
    *(unsigned int *)((int)puVar7 + 0x14) = 3;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x848);
    sVar16 = *(short *)((int)((*puVar7 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x850) & 0x7f) &
                              0xffffffff) << 1) + iVar10);
    uVar11 = (unsigned __int64)sVar16;
    if (sVar16 < 0) {
      fn_82C4E470(puVar7);
      do {
        uVar12 = *puVar7;
        fn_82C4E470(puVar7,1);
        sVar16 = *(short *)((int)(((uVar11 - ((__int64)uVar12 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar10);
        uVar11 = (unsigned __int64)sVar16;
      } while (sVar16 < 0);
    }
    else {
      iVar10 = *(int *)(puVar7 + 1);
      iVar9 = (int)(uVar11 & 0xf);
      *puVar7 = *puVar7 << (uVar11 & 0xf);
      *(int *)(puVar7 + 1) = iVar10 - iVar9;
      sVar16 = sVar16 >> 4;
      if (iVar10 < iVar9) {
        do {
          pbVar8 = *(unsigned char **)((int)puVar7 + 0xc);
          if (pbVar8 < (unsigned char *)(*(int *)(puVar7 + 2) - 4U)) {
            bVar1 = *pbVar8;
            bVar2 = pbVar8[1];
            bVar3 = pbVar8[2];
            bVar4 = pbVar8[3];
            bVar5 = pbVar8[4];
            bVar6 = pbVar8[5];
            iVar10 = *(int *)(puVar7 + 1);
            *(unsigned char **)((int)puVar7 + 0xc) = pbVar8 + 6;
            *(int *)(puVar7 + 1) = iVar10 + 0x30;
            *puVar7 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                       (unsigned __int64)bVar6 << ((__int64)-iVar10 & 0x7fU)) + *puVar7;
            break;
          }
          iVar10 = fn_82C4E3B0(puVar7);
        } while (iVar10 == 1);
      }
    }
    if (sVar16 < 0) {
      return 1;
    }
    if (0x3f < sVar16) {
      return 1;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
    *(unsigned char *)((int)param_2 + 0x13) = (unsigned char)sVar16 & 1;
    *(unsigned char *)((int)param_2 + 0xe) = (unsigned char)(sVar16 >> 5) & 1;
    *(unsigned char *)((int)param_2 + 0xf) = (unsigned char)(sVar16 >> 4) & 1;
    *(unsigned char *)((int)param_2 + 0x12) = (unsigned char)(sVar16 >> 1) & 1;
    *(unsigned char *)(param_2 + 4) = (unsigned char)(sVar16 >> 3) & 1;
    *(unsigned char *)((int)param_2 + 0x11) = (unsigned char)(sVar16 >> 2) & 1;
    fn_82CBDE30(param_1,param_2,param_3,param_4);
    if ((*(int *)(param_1 + 0x3cb0) != 7) || (*(int *)(param_1 + 0x50e4) == 0)) {
      puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar14 = 1;
      lVar13 = 0;
      uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
      uVar12 = uVar11 + 0x10;
      if ((uVar12 & 0xffffffff) == 0) {
        do {
          if ((uVar12 & 0xffffffff) == 0) break;
          uVar14 = uVar14 - uVar12;
          *(int *)(puVar7 + 1) = (int)(uVar11 - uVar12);
          lVar13 = (unsigned __int64)
                   (unsigned int)((int)(*puVar7 >> (0x40 - uVar12 & 0x7f)) << ((unsigned int)uVar14 & 0x3f)) +
                   lVar13;
          *puVar7 = *puVar7 << (uVar12 & 0x7f);
          if ((__int64)(uVar11 - uVar12) < 0) {
            fn_82C4E5E8(puVar7);
          }
          uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
          uVar12 = uVar11 + 0x10;
        } while ((uVar12 & 0xffffffff) < (uVar14 & 0xffffffff));
      }
      uVar12 = *puVar7;
      *(int *)(puVar7 + 1) = (int)(uVar11 - uVar14);
      *puVar7 = uVar12 << (uVar14 & 0x7f);
      if ((__int64)(uVar11 - uVar14) < 0) {
        fn_82C4E5E8(puVar7);
      }
      *param_2 = (unsigned int)(((uVar12 >> (0x40 - uVar14 & 0x7f) & 0xffffffff) + lVar13 & 0xff) << 3) &
                 0x18 | *param_2 & 0xffffffe7;
    }
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      *param_2 = *param_2 & 0x7f3dffff;
      if ((*(int *)(param_1 + 0x18c) != 0) &&
         (((((*(char *)((int)param_2 + 0xe) != '\0' || *(char *)((int)param_2 + 0xf) != '\0') ||
            *(char *)(param_2 + 4) != '\0') || *(char *)((int)param_2 + 0x11) != '\0') ||
          *(char *)((int)param_2 + 0x12) != '\0') || *(char *)((int)param_2 + 0x13) != '\0')) {
        puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar14 = 1;
        lVar13 = 0;
        uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar12 = uVar11 + 0x10;
        if ((uVar12 & 0xffffffff) == 0) {
          do {
            if ((uVar12 & 0xffffffff) == 0) break;
            uVar14 = uVar14 - uVar12;
            *(int *)(puVar7 + 1) = (int)(uVar11 - uVar12);
            lVar13 = (unsigned __int64)
                     (unsigned int)((int)(*puVar7 >> (0x40 - uVar12 & 0x7f)) << ((unsigned int)uVar14 & 0x3f)) +
                     lVar13;
            *puVar7 = *puVar7 << (uVar12 & 0x7f);
            if ((__int64)(uVar11 - uVar12) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar12 = uVar11 + 0x10;
          } while ((uVar12 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        *(int *)(puVar7 + 1) = (int)(uVar11 - uVar14);
        uVar12 = (*puVar7 >> (0x40 - uVar14 & 0x7f) & 0xffffffff) + lVar13;
        *puVar7 = *puVar7 << (uVar14 & 0x7f);
        if ((__int64)(uVar11 - uVar14) < 0) {
          fn_82C4E5E8(puVar7);
        }
        if ((int)uVar12 != 0) {
          puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
          uVar15 = 1;
          lVar13 = 0;
          uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
          uVar14 = uVar11 + 0x10;
          if ((uVar14 & 0xffffffff) == 0) {
            do {
              if ((uVar14 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar14;
              *(int *)(puVar7 + 1) = (int)(uVar11 - uVar14);
              lVar13 = (unsigned __int64)
                       (unsigned int)((int)(*puVar7 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar15 & 0x3f)) +
                       lVar13;
              *puVar7 = *puVar7 << (uVar14 & 0x7f);
              if ((__int64)(uVar11 - uVar14) < 0) {
                fn_82C4E5E8(puVar7);
              }
              uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
              uVar14 = uVar11 + 0x10;
            } while ((uVar14 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          uVar14 = *puVar7;
          *(int *)(puVar7 + 1) = (int)(uVar11 - uVar15);
          *puVar7 = uVar14 << (uVar15 & 0x7f);
          if ((__int64)(uVar11 - uVar15) < 0) {
            fn_82C4E5E8(puVar7);
          }
          uVar12 = (uVar14 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + uVar12;
        }
        *param_2 = (unsigned int)((uVar12 & 0xffffffff) << 0x16) & 0xc00000 | *param_2 & 0xff3fffff;
      }
      if (((*(unsigned int *)(param_1 + 0xbbc) & 4) != 0) && (*(int *)(param_1 + 0x548c) == 0)) {
        puVar7 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar14 = 1;
        lVar13 = 0;
        uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
        uVar12 = uVar11 + 0x10;
        if ((uVar12 & 0xffffffff) == 0) {
          do {
            if ((uVar12 & 0xffffffff) == 0) break;
            uVar14 = uVar14 - uVar12;
            *(int *)(puVar7 + 1) = (int)(uVar11 - uVar12);
            lVar13 = (unsigned __int64)
                     (unsigned int)((int)(*puVar7 >> (0x40 - uVar12 & 0x7f)) << ((unsigned int)uVar14 & 0x3f)) +
                     lVar13;
            *puVar7 = *puVar7 << (uVar12 & 0x7f);
            if ((__int64)(uVar11 - uVar12) < 0) {
              fn_82C4E5E8(puVar7);
            }
            uVar11 = (unsigned __int64)*(unsigned int *)(puVar7 + 1);
            uVar12 = uVar11 + 0x10;
          } while ((uVar12 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        uVar12 = *puVar7;
        *(int *)(puVar7 + 1) = (int)(uVar11 - uVar14);
        *puVar7 = uVar12 << (uVar14 & 0x7f);
        if ((__int64)(uVar11 - uVar14) < 0) {
          fn_82C4E5E8(puVar7);
        }
        *param_2 = (unsigned int)((uVar12 >> (0x40 - uVar14 & 0x7f) & 0xffffffff) + lVar13 != 0) << 0xb |
                   *param_2 & 0xfffff7ff;
      }
      if (((*(int *)(param_1 + 0x5118) == 0) ||
          (*(char *)(param_2 + 1) =
                (char)(*(int *)(param_1 + 0xf8) << 1) + (char)*(unsigned int *)(param_1 + 0xfc) + -1,
          *(int *)(param_1 + 0x11c) == 0)) || (iVar10 = fn_82CA6780(param_1,param_2), iVar10 == 0)
         ) {
        return 0;
      }
    }
  }
  return 1;
}

