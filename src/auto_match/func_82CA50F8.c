extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();


unsigned __int64 fn_82CA50F8(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  short sVar5;
  unsigned __int64 *puVar6;
  int *piVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  __int64 *plVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  unsigned int uVar20;
  
  *(char *)(param_2 + 1) = (char)*(unsigned int *)(param_1 + 0xf8) * '\x02' + -1;
  if (*(int *)(param_1 + 0x1c4) == 0) {
    *param_2 = *param_2 & 0x7fffffff;
  }
  else {
    if (*(int *)(param_1 + 0x1b4) == 0) {
      puVar6 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar16 = *puVar6;
      uVar20 = *(unsigned int *)(puVar6 + 1);
      *puVar6 = uVar16 << 1;
      *(int *)(puVar6 + 1) = (int)((unsigned __int64)uVar20 - 1);
      if ((__int64)((unsigned __int64)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (unsigned int)((uVar16 >> 0x3f) << 0x1f) | *param_2 & 0x7fffffff;
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
        return 1;
      }
    }
    if ((*param_2 & 0x80000000) != 0) {
      *(unsigned short *)((int)param_2 + 0xe) = 0;
      *(unsigned short *)(param_2 + 4) = 0;
      *(unsigned short *)((int)param_2 + 0x12) = 0;
      *param_2 = *param_2 | 0x20000;
      return 0;
    }
  }
  puVar6 = *(unsigned __int64 **)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    if ((int *)(param_1 + 0x854) == (int *)0x0) {
      uVar16 = 0;
      *(unsigned int *)((int)puVar6 + 0x14) = 3;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x854);
      sVar5 = *(short *)((int)((*puVar6 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x85c) & 0x7f) &
                               0xffffffff) << 1) + iVar13);
      uVar16 = (unsigned __int64)sVar5;
      if (sVar5 < 0) {
        fn_82C4E470(puVar6);
        do {
          uVar18 = *puVar6;
          fn_82C4E470(puVar6,1);
          sVar5 = *(short *)((int)(((uVar16 - ((__int64)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar13);
          uVar16 = (unsigned __int64)sVar5;
        } while (sVar5 < 0);
      }
      else {
        iVar13 = *(int *)(puVar6 + 1);
        iVar11 = (int)(uVar16 & 0xf);
        *puVar6 = *puVar6 << (uVar16 & 0xf);
        *(int *)(puVar6 + 1) = iVar13 - iVar11;
        if (iVar13 < iVar11) {
          do {
            pbVar8 = *(unsigned char **)((int)puVar6 + 0xc);
            if (pbVar8 < (unsigned char *)(*(int *)(puVar6 + 2) - 4U)) {
              bVar14 = *pbVar8;
              bVar15 = pbVar8[1];
              bVar1 = pbVar8[2];
              bVar2 = pbVar8[3];
              bVar3 = pbVar8[4];
              bVar4 = pbVar8[5];
              iVar13 = *(int *)(puVar6 + 1);
              *(unsigned char **)((int)puVar6 + 0xc) = pbVar8 + 6;
              *(int *)(puVar6 + 1) = iVar13 + 0x30;
              *puVar6 = ((((((unsigned __int64)bVar15 + (unsigned __int64)bVar14 * 0x100) * 0x100 +
                           (unsigned __int64)bVar1) * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4 << ((__int64)-iVar13 & 0x7fU)) + *puVar6;
              goto LAB_82ca5414;
            }
            iVar13 = fn_82C4E3B0(puVar6);
          } while (iVar13 == 1);
          uVar16 = (unsigned __int64)((int)sVar5 >> 4);
        }
        else {
LAB_82ca5414:
          uVar16 = (unsigned __int64)((int)sVar5 >> 4);
        }
      }
    }
  }
  else {
    piVar7 = *(int **)(param_1 + 0x860);
    if (piVar7 == (int *)0x0) {
      uVar16 = 0;
      *(unsigned int *)((int)puVar6 + 0x14) = 3;
    }
    else {
      iVar13 = *piVar7;
      sVar5 = *(short *)((int)((*puVar6 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar7 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar13);
      uVar16 = (unsigned __int64)sVar5;
      if (sVar5 < 0) {
        fn_82C4E470(puVar6);
        do {
          uVar18 = *puVar6;
          fn_82C4E470(puVar6,1);
          sVar5 = *(short *)((int)(((uVar16 - ((__int64)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar13);
          uVar16 = (unsigned __int64)sVar5;
        } while (sVar5 < 0);
      }
      else {
        iVar13 = *(int *)(puVar6 + 1);
        iVar11 = (int)(uVar16 & 0xf);
        *puVar6 = *puVar6 << (uVar16 & 0xf);
        *(int *)(puVar6 + 1) = iVar13 - iVar11;
        if (iVar13 < iVar11) {
          do {
            pbVar8 = *(unsigned char **)((int)puVar6 + 0xc);
            if (pbVar8 < (unsigned char *)(*(int *)(puVar6 + 2) - 4U)) {
              bVar14 = *pbVar8;
              bVar15 = pbVar8[1];
              bVar1 = pbVar8[2];
              bVar2 = pbVar8[3];
              bVar3 = pbVar8[4];
              bVar4 = pbVar8[5];
              iVar13 = *(int *)(puVar6 + 1);
              *(unsigned char **)((int)puVar6 + 0xc) = pbVar8 + 6;
              *(int *)(puVar6 + 1) = iVar13 + 0x30;
              *puVar6 = ((((((unsigned __int64)bVar14 * 0x100 + (unsigned __int64)bVar15) * 0x100 +
                           (unsigned __int64)bVar1) * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4 << ((__int64)-iVar13 & 0x7fU)) + *puVar6;
              goto LAB_82ca52cc;
            }
            iVar13 = fn_82C4E3B0(puVar6);
          } while (iVar13 == 1);
          uVar16 = (unsigned __int64)((int)sVar5 >> 4);
        }
        else {
LAB_82ca52cc:
          uVar16 = (unsigned __int64)((int)sVar5 >> 4);
        }
      }
    }
  }
  uVar20 = (unsigned int)uVar16;
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
  if ((int)uVar20 < 0) {
    return 1;
  }
  if (0x7f < (int)uVar20) {
    return 1;
  }
  uVar9 = *param_2;
  if ((uVar16 & 0x40) != 0) {
    uVar20 = uVar20 ^ 0x40;
    *param_2 = uVar9 | 0x20000;
    uVar12 = (unsigned int)(uVar20 == 0) << 0x1e;
    *param_2 = uVar12 | uVar9 & 0xbfffffff | 0x20000;
    if (*(int *)(param_1 + 0x148) == 0) {
      *param_2 = uVar12 | uVar9 & 0xbff3ffff | 0x20000 | 0x80000;
    }
    else {
      puVar6 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar16 = *puVar6;
      uVar9 = *(unsigned int *)(puVar6 + 1);
      *puVar6 = uVar16 << 1;
      *(int *)(puVar6 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (unsigned int)((uVar16 >> 0x3f) << 0x12) | *param_2 & 0xfff3ffff;
    }
    goto LAB_82ca565c;
  }
  *param_2 = uVar9 & 0xfffdffff;
  puVar6 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar9 = *(unsigned int *)(puVar6 + 1);
  uVar16 = *puVar6;
  *puVar6 = uVar16 << 1;
  *(int *)(puVar6 + 1) = (int)((unsigned __int64)uVar9 - 1);
  if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
    fn_82C4E5E8();
  }
  *param_2 = (unsigned int)((uVar16 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
  if (*(int *)(param_1 + 0x194) != 0) {
    plVar10 = *(__int64 **)(param_1 + 0x54);
    lVar19 = *plVar10;
    uVar9 = *(unsigned int *)(plVar10 + 1);
    *plVar10 = lVar19 << 1;
    *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar9 - 1);
    if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar19 < 0) {
      plVar10 = *(__int64 **)(param_1 + 0x54);
      lVar19 = *plVar10;
      uVar9 = *(unsigned int *)(plVar10 + 1);
      *plVar10 = lVar19 << 1;
      *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar19 < 0) {
        plVar10 = *(__int64 **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar9 = *(unsigned int *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar19 < 0) {
          *(unsigned char *)(param_2 + 5) = *(unsigned char *)(param_2 + 5) | 0x22;
          goto LAB_82ca5628;
        }
        bVar14 = *(unsigned char *)(param_2 + 5) & 0xdd | 0x20;
      }
      else {
        bVar14 = *(unsigned char *)(param_2 + 5) & 0xdd | 2;
      }
      *(unsigned char *)(param_2 + 5) = bVar14;
    }
    else {
      *(unsigned char *)(param_2 + 5) = *(unsigned char *)(param_2 + 5) & 0xdd;
    }
LAB_82ca5628:
    bVar14 = *(unsigned char *)(param_2 + 5);
    bVar15 = bVar14 & 0xb3 | 8;
    *(unsigned char *)(param_2 + 5) = bVar15;
    *(unsigned char *)(param_2 + 5) = (bVar14 & 0x20) << 1 | bVar15;
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
LAB_82ca565c:
  *param_2 = *param_2 & 0xff3fffff;
  if ((*(int *)(param_1 + 0x18c) != 0) && (uVar20 != 0)) {
    plVar10 = *(__int64 **)(param_1 + 0x54);
    lVar17 = *plVar10;
    uVar9 = *(unsigned int *)(plVar10 + 1);
    lVar19 = -(lVar17 >> 0x3f);
    *plVar10 = lVar17 << 1;
    *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar9 - 1);
    if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar17 < 0) {
      plVar10 = *(__int64 **)(param_1 + 0x54);
      lVar17 = *plVar10;
      uVar9 = *(unsigned int *)(plVar10 + 1);
      *plVar10 = lVar17 << 1;
      *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      lVar19 = lVar19 - (lVar17 >> 0x3f);
    }
    *param_2 = (unsigned int)(lVar19 << 0x16) | *param_2 & 0xff3fffff;
  }
  *(unsigned char *)((int)param_2 + 0xe) = (unsigned char)uVar20 & 1;
  *(unsigned char *)((int)param_2 + 0xf) = (unsigned char)((int)uVar20 >> 1) & 1;
  *(unsigned char *)(param_2 + 4) = (unsigned char)((int)uVar20 >> 2) & 1;
  *(unsigned char *)((int)param_2 + 0x11) = (unsigned char)((int)uVar20 >> 3) & 1;
  *(unsigned char *)((int)param_2 + 0x12) = (unsigned char)((int)uVar20 >> 4) & 1;
  *(unsigned char *)((int)param_2 + 0x13) = (unsigned char)((int)uVar20 >> 5) & 1;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar20 = *param_2;
    *param_2 = uVar20 & 0xefffffff;
    if (((*(int *)(param_1 + 0x14c) != 0) && ((uVar20 & 0x40000000) == 0)) &&
       ((uVar20 & 0x20000) == 0x20000)) {
      plVar10 = *(__int64 **)(param_1 + 0x54);
      lVar19 = *plVar10;
      uVar20 = *(unsigned int *)(plVar10 + 1);
      *plVar10 = lVar19 << 1;
      *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar20 - 1);
      if ((__int64)((unsigned __int64)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (int)(lVar19 >> 0x3f) * -0x10000000 | *param_2 & 0xefffffff;
      if (-1 < lVar19) {
        plVar10 = *(__int64 **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar20 = *(unsigned int *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar20 - 1);
        if ((__int64)((unsigned __int64)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar19) {
          *param_2 = *param_2 & 0xf8ffffff;
          return 0;
        }
        plVar10 = *(__int64 **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar20 = *(unsigned int *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((unsigned __int64)uVar20 - 1);
        if ((__int64)((unsigned __int64)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar19) {
          *param_2 = *param_2 & 0xf8ffffff | 0x1000000;
          return 0;
        }
        *param_2 = *param_2 & 0xf8ffffff | 0x2000000;
      }
    }
  }
  return 0;
}

