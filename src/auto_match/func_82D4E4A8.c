extern unsigned int fStack_74;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CED488();
extern int fn_82CED6A8();
extern int fn_82D41D58();
extern int fn_82D42730();
extern int fn_82D42908();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82138924;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323BF84;
extern unsigned int lbl_8323C344;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82D4E4A8(int param_1,int param_2)

{
  unsigned char uVar1;
  short sVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  __int64 lVar6;
  int iVar7;
  int in_r0;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned short *puVar15;
  unsigned char *puVar16;
  unsigned int uVar17;
  unsigned short *puVar18;
  int *piVar20;
  unsigned __int64 uVar19;
  unsigned int *puVar21;
  unsigned int *puVar22;
  __int64 lVar23;
  double dVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  float fStack_74;
  
  iVar8 = fn_82D42908();
  puVar10 = (unsigned int *)(param_2 + -4);
  puVar22 = (unsigned int *)(iVar8 + -4);
  lVar23 = 5;
  do {
    puVar10 = puVar10 + 1;
    puVar22 = puVar22 + 1;
    *puVar22 = *puVar10;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  *(unsigned int *)(iVar8 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  *(unsigned int *)(iVar8 + 0x18) = *(unsigned int *)(param_2 + 0x18);
  *(unsigned int *)(iVar8 + 0x1c) = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned int *)(iVar8 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  puVar10 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar25 = puVar10[1];
  uVar26 = puVar10[2];
  uVar27 = puVar10[3];
  puVar22 = (unsigned int *)(iVar8 + 0x30U & 0xfffffff0);
  *puVar22 = *puVar10;
  puVar22[1] = uVar25;
  puVar22[2] = uVar26;
  puVar22[3] = uVar27;
  *(unsigned int *)(iVar8 + 0x40) = *(unsigned int *)(param_2 + 0x40);
  *(unsigned int *)(iVar8 + 0x44) = *(unsigned int *)(param_2 + 0x44);
  *(unsigned char *)(iVar8 + 0x48) = *(unsigned char *)(param_2 + 0x48);
  *(unsigned char *)(iVar8 + 0x49) = *(unsigned char *)(param_2 + 0x49);
  *(unsigned int *)(iVar8 + 0x4c) = *(unsigned int *)(param_2 + 0x4c);
  *(unsigned int *)(iVar8 + 0x50) = *(unsigned int *)(param_2 + 0x50);
  iVar9 = fn_82CE5410();
  puVar10 = (unsigned int *)(**(int (***)())(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x68);
  *(unsigned short *)(puVar10 + 1) = 0x68;
  *puVar10 = &lbl_82138924;
  *(unsigned short *)((int)puVar10 + 6) = 1;
  puVar10[2] = 0;
  puVar10[3] = 0;
  piVar20 = (int *)(param_1 + 0xf0);
  puVar10[4] = 0x80000000;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0x80000000;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0x80000000;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0x80000000;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0x80000000;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0x80000000;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0x80000000;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0x80000000;
  iVar9 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0xf4) == (*(unsigned int *)(param_1 + 0xf8) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),piVar20,4);
  }
  *(unsigned int **)(*(int *)(param_1 + 0xf4) * 4 + *piVar20) = puVar10;
  iVar9 = *(int *)(param_1 + 0xf4) + 1;
  *(int *)(param_1 + 0xf4) = iVar9;
  iVar9 = *(int *)(iVar9 * 4 + *piVar20 + -4);
  uVar4 = *(unsigned int *)(param_2 + 0x20);
  piVar20 = (int *)(iVar9 + 8);
  iVar11 = fn_82CE5410();
  uVar17 = *(unsigned int *)(iVar9 + 0xc);
  lVar23 = (unsigned __int64)uVar17 + (unsigned __int64)uVar4;
  iVar14 = (int)lVar23;
  if ((int)(*(unsigned int *)(iVar9 + 0x10) & 0x3fffffff) < iVar14) {
    lVar6 = ((unsigned __int64)*(unsigned int *)(iVar9 + 0x10) & 0x3fffffff) << 1;
    if (iVar14 < (int)lVar6) {
      lVar23 = lVar6;
    }
    fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),piVar20,lVar23,0x10);
  }
  iVar14 = 0;
  *(unsigned int *)(iVar9 + 0xc) = uVar4 + *(int *)(iVar9 + 0xc);
  iVar11 = uVar17 * 0x10 + *piVar20;
  dVar24 = (double)lbl_821AAD20;
  puVar10 = *(unsigned int **)(param_2 + 0x18);
  if (0 < *(int *)(param_2 + 0x20)) {
    fStack_74 = lbl_821AAD20;
    do {
      uStack_78 = puVar10[2];
      iVar14 = iVar14 + 1;
      uStack_80 = *puVar10;
      uStack_7c = puVar10[1];
      puVar22 = (unsigned int *)((int)&uStack_80 + in_r0 & 0xfffffff0);
      uVar25 = puVar22[1];
      uVar26 = puVar22[2];
      uVar27 = puVar22[3];
      puVar21 = (unsigned int *)(in_r0 + iVar11 & 0xfffffff0);
      *puVar21 = *puVar22;
      puVar21[1] = uVar25;
      puVar21[2] = uVar26;
      puVar21[3] = uVar27;
      iVar11 = iVar11 + 0x10;
      puVar10 = (unsigned int *)((int)puVar10 + *(int *)(param_2 + 0x1c));
    } while (iVar14 < *(int *)(param_2 + 0x20));
  }
  iVar11 = *piVar20;
  *(unsigned int *)(iVar8 + 0x1c) = 0x10;
  *(int *)(iVar8 + 0x18) = iVar11;
  *(unsigned int *)(iVar8 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x48) == '\x01') {
    iVar11 = *(int *)(param_2 + 0x44);
    iVar14 = iVar11;
    if (2 < iVar11) {
      iVar14 = 4;
    }
    *(int *)(iVar8 + 0x44) = iVar14;
    iVar14 = *(int *)(param_2 + 0x14);
    if (iVar11 == 1) {
      iVar14 = iVar14 + 2;
    }
    else if (iVar11 == 2) {
      iVar14 = iVar14 * 2 + 1;
    }
    else {
      iVar14 = iVar14 << 2;
    }
    iVar12 = fn_82CE5410();
    iVar11 = *(int *)(iVar9 + 0x18);
    iVar13 = iVar11 + iVar14;
    if ((int)(*(unsigned int *)(iVar9 + 0x1c) & 0x3fffffff) < iVar13) {
      iVar7 = (*(unsigned int *)(iVar9 + 0x1c) & 0x3fffffff) << 1;
      if (iVar13 < iVar7) {
        iVar13 = iVar7;
      }
      fn_82CE6310(*(unsigned int *)(iVar12 + 0x10),(int *)(iVar9 + 0x14),iVar13,1);
    }
    puVar21 = (unsigned int *)(*(int *)(iVar9 + 0x14) + iVar11);
    *(int *)(iVar9 + 0x18) = iVar14 + *(int *)(iVar9 + 0x18);
    thunk_FUN_82f691f0(puVar21,0,iVar14);
    puVar16 = *(unsigned char **)(param_2 + 0x40);
    iVar11 = 0;
    puVar10 = puVar21;
    if (0 < *(int *)(param_2 + 0x14)) {
      do {
        iVar11 = iVar11 + 1;
        *(unsigned char *)puVar10 = *puVar16;
        *(unsigned char *)((int)puVar10 + 1) = puVar16[1];
        *(unsigned char *)((int)puVar10 + 2) = puVar16[2];
        puVar16 = puVar16 + *(int *)(param_2 + 0x44);
        puVar10 = (unsigned int *)(*(int *)(iVar8 + 0x44) + (int)puVar10);
      } while (iVar11 < *(int *)(param_2 + 0x14));
    }
  }
  else if (*(char *)(param_2 + 0x48) == '\x02') {
    uVar4 = *(unsigned int *)(param_2 + 0x44) >> 1;
    uVar17 = uVar4;
    if (2 < uVar4) {
      uVar17 = 4;
    }
    *(unsigned int *)(iVar8 + 0x44) = uVar17 << 1;
    uVar17 = *(unsigned int *)(param_2 + 0x14);
    if (uVar4 == 1) {
      uVar19 = (unsigned __int64)uVar17 + 2;
    }
    else if (uVar4 == 2) {
      uVar19 = ((unsigned __int64)uVar17 & 0x7fffffff) * 2 + 1;
    }
    else {
      uVar19 = ((unsigned __int64)uVar17 & 0x3fffffff) << 2;
    }
    iVar11 = fn_82CE5410();
    uVar4 = *(unsigned int *)(iVar9 + 0x24);
    lVar23 = uVar4 + uVar19;
    iVar14 = (int)lVar23;
    if ((int)(*(unsigned int *)(iVar9 + 0x28) & 0x3fffffff) < iVar14) {
      lVar6 = ((unsigned __int64)*(unsigned int *)(iVar9 + 0x28) & 0x3fffffff) << 1;
      if (iVar14 < (int)lVar6) {
        lVar23 = lVar6;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),(int *)(iVar9 + 0x20),lVar23,2);
    }
    puVar21 = (unsigned int *)(uVar4 * 2 + *(int *)(iVar9 + 0x20));
    *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + (int)uVar19;
    thunk_FUN_82f691f0(puVar21,0,(uVar19 & 0x7fffffff) << 1);
    puVar18 = *(unsigned short **)(param_2 + 0x40);
    iVar11 = 0;
    puVar10 = puVar21;
    if (0 < *(int *)(param_2 + 0x14)) {
      do {
        iVar11 = iVar11 + 1;
        *(unsigned short *)puVar10 = *puVar18;
        *(unsigned short *)((int)puVar10 + 2) = puVar18[1];
        *(unsigned short *)(puVar10 + 1) = puVar18[2];
        puVar10 = (unsigned int *)(*(int *)(iVar8 + 0x44) + (int)puVar10);
        puVar18 = (unsigned short *)((int)puVar18 + *(int *)(param_2 + 0x44));
      } while (iVar11 < *(int *)(param_2 + 0x14));
    }
  }
  else {
    uVar4 = *(unsigned int *)(param_2 + 0x44) >> 2;
    uVar17 = uVar4;
    if (2 < uVar4) {
      uVar17 = 4;
    }
    *(unsigned int *)(iVar8 + 0x44) = uVar17 << 2;
    uVar17 = *(unsigned int *)(param_2 + 0x14);
    if (uVar4 == 1) {
      uVar19 = (unsigned __int64)uVar17 + 2;
    }
    else if (uVar4 == 2) {
      uVar19 = ((unsigned __int64)uVar17 & 0x7fffffff) * 2 + 1;
    }
    else {
      uVar19 = ((unsigned __int64)uVar17 & 0x3fffffff) << 2;
    }
    iVar11 = fn_82CE5410();
    uVar4 = *(unsigned int *)(iVar9 + 0x30);
    lVar23 = uVar4 + uVar19;
    iVar14 = (int)lVar23;
    if ((int)(*(unsigned int *)(iVar9 + 0x34) & 0x3fffffff) < iVar14) {
      lVar6 = ((unsigned __int64)*(unsigned int *)(iVar9 + 0x34) & 0x3fffffff) << 1;
      if (iVar14 < (int)lVar6) {
        lVar23 = lVar6;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),(int *)(iVar9 + 0x2c),lVar23,4);
    }
    puVar21 = (unsigned int *)(uVar4 * 4 + *(int *)(iVar9 + 0x2c));
    *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + (int)uVar19;
    thunk_FUN_82f691f0(puVar21,0,(uVar19 & 0x3fffffff) << 2);
    puVar10 = *(unsigned int **)(param_2 + 0x40);
    iVar11 = 0;
    puVar22 = puVar21;
    if (0 < *(int *)(param_2 + 0x14)) {
      do {
        iVar11 = iVar11 + 1;
        *puVar22 = *puVar10;
        puVar22[1] = puVar10[1];
        puVar22[2] = puVar10[2];
        puVar22 = (unsigned int *)(*(int *)(iVar8 + 0x44) + (int)puVar22);
        puVar10 = (unsigned int *)((int)puVar10 + *(int *)(param_2 + 0x44));
      } while (iVar11 < *(int *)(param_2 + 0x14));
    }
  }
  *(unsigned char *)(iVar8 + 0x48) = *(unsigned char *)(param_2 + 0x48);
  *(unsigned int *)(iVar8 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  uVar1 = *(unsigned char *)(param_2 + 0x49);
  *(unsigned int **)(iVar8 + 0x40) = puVar21;
  *(unsigned char *)(iVar8 + 0x49) = uVar1;
  *(unsigned char *)(iVar8 + 1) = *(unsigned char *)(param_2 + 1);
  puVar18 = *(unsigned short **)(param_2 + 4);
  if (puVar18 == (unsigned short *)0x0) {
    *(unsigned short *)(iVar8 + 8) = 0;
    *(unsigned int *)(iVar8 + 4) = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\x01') {
      piVar20 = (int *)(iVar9 + 0x38);
      if (*(short *)(param_2 + 8) == 0) {
        iVar11 = fn_82CE5410();
        if (*(unsigned int *)(iVar9 + 0x3c) == (*(unsigned int *)(iVar9 + 0x40) & 0x3fffffff)) {
          fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),piVar20,1);
        }
        *(unsigned char *)(*piVar20 + *(int *)(iVar9 + 0x3c)) = *(unsigned char *)puVar18;
        iVar11 = *(int *)(iVar9 + 0x3c);
        *(int *)(iVar9 + 0x3c) = iVar11 + 1;
        *(int *)(iVar8 + 4) = iVar11 + *piVar20;
      }
      else {
        iVar11 = *(int *)(param_2 + 0x14);
        iVar12 = fn_82CE5410();
        iVar14 = *(int *)(iVar9 + 0x3c);
        iVar13 = iVar14 + iVar11;
        if ((int)(*(unsigned int *)(iVar9 + 0x40) & 0x3fffffff) < iVar13) {
          iVar7 = (*(unsigned int *)(iVar9 + 0x40) & 0x3fffffff) << 1;
          if (iVar13 < iVar7) {
            iVar13 = iVar7;
          }
          fn_82CE6310(*(unsigned int *)(iVar12 + 0x10),piVar20,iVar13,1);
        }
        iVar13 = 0;
        iVar14 = *piVar20 + iVar14;
        *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + iVar11;
        *(int *)(iVar8 + 4) = iVar14;
        puVar16 = *(unsigned char **)(param_2 + 4);
        if (0 < *(int *)(param_2 + 0x14)) {
          do {
            *(unsigned char *)(iVar13 + iVar14) = *puVar16;
            iVar13 = iVar13 + 1;
            puVar16 = puVar16 + *(unsigned short *)(param_2 + 8);
          } while (iVar13 < *(int *)(param_2 + 0x14));
        }
      }
    }
    else {
      piVar20 = (int *)(iVar9 + 0x5c);
      if (*(short *)(param_2 + 8) == 0) {
        iVar11 = fn_82CE5410();
        if (*(unsigned int *)(iVar9 + 0x60) == (*(unsigned int *)(iVar9 + 100) & 0x3fffffff)) {
          fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),piVar20,2);
        }
        *(unsigned short *)(*(int *)(iVar9 + 0x60) * 2 + *piVar20) = *puVar18;
        iVar11 = *(int *)(iVar9 + 0x60);
        *(int *)(iVar9 + 0x60) = iVar11 + 1;
        *(int *)(iVar8 + 4) = (iVar11 + 1) * 2 + *piVar20 + -2;
      }
      else {
        uVar4 = *(unsigned int *)(param_2 + 0x14);
        iVar11 = fn_82CE5410();
        uVar17 = *(unsigned int *)(iVar9 + 0x60);
        lVar23 = (unsigned __int64)uVar17 + (unsigned __int64)uVar4;
        iVar14 = (int)lVar23;
        if ((int)(*(unsigned int *)(iVar9 + 100) & 0x3fffffff) < iVar14) {
          lVar6 = ((unsigned __int64)*(unsigned int *)(iVar9 + 100) & 0x3fffffff) << 1;
          if (iVar14 < (int)lVar6) {
            lVar23 = lVar6;
          }
          fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),piVar20,lVar23,2);
        }
        iVar11 = uVar17 * 2 + *piVar20;
        *(unsigned int *)(iVar9 + 0x60) = uVar4 + *(int *)(iVar9 + 0x60);
        iVar14 = 0;
        *(int *)(iVar8 + 4) = iVar11;
        puVar18 = *(unsigned short **)(param_2 + 4);
        if (0 < *(int *)(param_2 + 0x14)) {
          puVar15 = (unsigned short *)(iVar11 + -2);
          do {
            iVar14 = iVar14 + 1;
            puVar15 = puVar15 + 1;
            *puVar15 = *puVar18;
            puVar18 = (unsigned short *)((unsigned int)*(unsigned short *)(param_2 + 8) + (int)puVar18);
          } while (iVar14 < *(int *)(param_2 + 0x14));
        }
      }
    }
    sVar2 = *(short *)(param_2 + 8);
    *(short *)(iVar8 + 8) = sVar2;
    if (sVar2 != 0) {
      if (*(char *)(iVar8 + 1) == '\x01') {
        *(unsigned short *)(iVar8 + 8) = 1;
      }
      else if (*(char *)(iVar8 + 1) == '\x02') {
        *(unsigned short *)(iVar8 + 8) = 2;
      }
    }
  }
  if (*(int *)(iVar8 + 4) != 0) {
    if (*(unsigned char **)(param_2 + 0x10) == &lbl_8323C344) {
      uVar3 = *(unsigned short *)(param_2 + 10);
      uVar19 = (unsigned __int64)uVar3;
      piVar20 = (int *)(iVar9 + 0x50);
      iVar11 = fn_82CE5410();
      uVar4 = *(unsigned int *)(iVar9 + 0x54);
      lVar23 = uVar4 + uVar19;
      iVar14 = (int)lVar23;
      if ((int)(*(unsigned int *)(iVar9 + 0x58) & 0x3fffffff) < iVar14) {
        lVar6 = ((unsigned __int64)*(unsigned int *)(iVar9 + 0x58) & 0x3fffffff) << 1;
        if (iVar14 < (int)lVar6) {
          lVar23 = lVar6;
        }
        fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),piVar20,lVar23,8);
      }
      puVar10 = (unsigned int *)(*(int *)(iVar9 + 0x54) * 8 + *piVar20);
      if (uVar3 != 0) {
        do {
          if (puVar10 != (unsigned int *)0x0) {
            fn_82CED488(puVar10 + 1,0xffffffff82005e80);
            *puVar10 = 0;
          }
          uVar19 = uVar19 - 1;
          puVar10 = puVar10 + 2;
        } while (uVar19 != 0);
      }
      iVar11 = 0;
      puVar22 = (unsigned int *)(uVar4 * 8 + *piVar20);
      *(unsigned int *)(iVar9 + 0x54) = (unsigned int)uVar3 + *(int *)(iVar9 + 0x54);
      puVar10 = *(unsigned int **)(param_2 + 0xc);
      if (*(short *)(param_2 + 10) != 0) {
        do {
          if (puVar22 == (unsigned int *)0x0) {
            puVar21 = (unsigned int *)0x0;
          }
          else {
            fn_82CED488(puVar22 + 1,0xffffffff82005e80);
            *puVar22 = 0;
            puVar21 = puVar22;
          }
          *puVar21 = *puVar10;
          fn_82CED6A8(puVar21 + 1,puVar10 + 1);
          iVar11 = iVar11 + 1;
          puVar22 = puVar22 + 2;
          puVar10 = (unsigned int *)((int)*(short *)(param_2 + 2) + (int)puVar10);
        } while (iVar11 < (int)(unsigned int)*(unsigned short *)(param_2 + 10));
      }
      *(int *)(iVar8 + 0xc) = *piVar20;
      if (*(short *)(param_2 + 2) != 0) {
        *(unsigned short *)(iVar8 + 2) = 8;
        *(unsigned short *)(iVar8 + 10) = *(unsigned short *)(param_2 + 10);
        goto LAB_82d4ef44;
      }
    }
    else {
      uVar3 = *(unsigned short *)(param_2 + 10);
      piVar20 = (int *)(iVar9 + 0x44);
      iVar13 = fn_82CE5410();
      iVar11 = *(int *)(iVar9 + 0x48);
      iVar14 = iVar11 + (unsigned int)uVar3;
      if ((int)(*(unsigned int *)(iVar9 + 0x4c) & 0x3fffffff) < iVar14) {
        iVar12 = (*(unsigned int *)(iVar9 + 0x4c) & 0x3fffffff) << 1;
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
        }
        fn_82CE6310(*(unsigned int *)(iVar13 + 0x10),piVar20,iVar14,0xc);
      }
      iVar14 = 0;
      *(unsigned int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0x48) + (unsigned int)uVar3;
      uVar25 = lbl_82002AE0;
      puVar22 = (unsigned int *)(iVar11 * 0xc + *piVar20);
      puVar10 = *(unsigned int **)(param_2 + 0xc);
      if (*(short *)(param_2 + 10) != 0) {
        do {
          puVar5 = *(unsigned char **)(param_2 + 0x10);
          *puVar22 = *puVar10;
          if (puVar5 == &lbl_8323BF84) {
            puVar22[1] = puVar10[1];
            puVar22[2] = puVar10[2];
          }
          else {
            *(short *)((int)puVar22 + 6) = (short)((unsigned int)uVar25 >> 0x10);
            *(short *)(puVar22 + 1) = (short)((unsigned int)(float)dVar24 >> 0x10);
          }
          iVar14 = iVar14 + 1;
          puVar22 = puVar22 + 3;
          puVar10 = (unsigned int *)((int)*(short *)(param_2 + 2) + (int)puVar10);
        } while (iVar14 < (int)(unsigned int)*(unsigned short *)(param_2 + 10));
      }
      *(int *)(iVar8 + 0xc) = *piVar20;
      if (*(short *)(param_2 + 2) != 0) {
        *(unsigned short *)(iVar8 + 2) = 0xc;
        *(unsigned short *)(iVar8 + 10) = *(unsigned short *)(param_2 + 10);
        goto LAB_82d4ef44;
      }
    }
    *(unsigned short *)(iVar8 + 10) = 1;
    *(unsigned short *)(iVar8 + 2) = 0;
  }
LAB_82d4ef44:
  fn_82D41D58(param_1);
  iVar8 = fn_82D42730(param_1,iVar8,(unsigned __int64)*(unsigned int *)(param_1 + 0xb8) - 1);
  *(int *)(param_1 + 0xe0) = iVar8 + *(int *)(param_1 + 0xe0);
  return;
}

