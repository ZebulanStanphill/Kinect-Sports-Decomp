extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D41960();
extern int fn_82D41D58();
extern int fn_82D43098();
extern int fn_82D43AA0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821388B0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323BF84;


__int64 fn_82D4DE48(int param_1,int param_2)

{
  short sVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  int iVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned char *puVar17;
  unsigned short *puVar18;
  __int64 lVar19;
  unsigned short *puVar20;
  unsigned int *puVar21;
  int *piVar23;
  unsigned __int64 uVar22;
  
  iVar10 = fn_82D43098();
  iVar11 = fn_82CE5410();
  puVar12 = (unsigned int *)
            (**(int (***)())(**(int **)(iVar11 + 0x10) + 4))(*(int **)(iVar11 + 0x10),0x2c);
  *(unsigned short *)(puVar12 + 1) = 0x2c;
  *puVar12 = &lbl_821388B0;
  *(unsigned short *)((int)puVar12 + 6) = 1;
  puVar12[2] = 0;
  puVar12[3] = 0;
  piVar23 = (int *)(param_1 + 0xfc);
  puVar12[4] = 0x80000000;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0x80000000;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0x80000000;
  iVar11 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x100) == (*(unsigned int *)(param_1 + 0x104) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),piVar23,4);
  }
  *(unsigned int **)(*(int *)(param_1 + 0x100) * 4 + *piVar23) = puVar12;
  iVar11 = *(int *)(param_1 + 0x100) + 1;
  *(int *)(param_1 + 0x100) = iVar11;
  iVar11 = *(int *)(iVar11 * 4 + *piVar23 + -4);
  fn_82D43AA0(iVar10,param_2);
  *(unsigned char *)(iVar10 + 1) = *(unsigned char *)(param_2 + 1);
  puVar20 = *(unsigned short **)(param_2 + 4);
  if (puVar20 == (unsigned short *)0x0) {
    *(unsigned short *)(iVar10 + 8) = 0;
    *(unsigned int *)(iVar10 + 4) = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\x01') {
      piVar23 = (int *)(iVar11 + 8);
      if (*(short *)(param_2 + 8) == 0) {
        iVar13 = fn_82CE5410();
        if (*(unsigned int *)(iVar11 + 0xc) == (*(unsigned int *)(iVar11 + 0x10) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar13 + 0x10),piVar23,1);
        }
        *(unsigned char *)(*piVar23 + *(int *)(iVar11 + 0xc)) = *(unsigned char *)puVar20;
        iVar13 = *(int *)(iVar11 + 0xc);
        *(int *)(iVar11 + 0xc) = iVar13 + 1;
        *(int *)(iVar10 + 4) = iVar13 + *piVar23;
      }
      else {
        iVar13 = *(int *)(param_2 + 0x18);
        iVar14 = fn_82CE5410();
        iVar16 = *(int *)(iVar11 + 0xc);
        iVar15 = iVar16 + iVar13;
        if ((int)(*(unsigned int *)(iVar11 + 0x10) & 0x3fffffff) < iVar15) {
          iVar6 = (*(unsigned int *)(iVar11 + 0x10) & 0x3fffffff) << 1;
          if (iVar15 < iVar6) {
            iVar15 = iVar6;
          }
          fn_82CE6310(*(unsigned int *)(iVar14 + 0x10),piVar23,iVar15,1);
        }
        iVar15 = 0;
        iVar16 = *piVar23 + iVar16;
        *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + iVar13;
        *(int *)(iVar10 + 4) = iVar16;
        puVar17 = *(unsigned char **)(param_2 + 4);
        if (0 < iVar13) {
          do {
            *(unsigned char *)(iVar15 + iVar16) = *puVar17;
            iVar15 = iVar15 + 1;
            puVar17 = puVar17 + *(unsigned short *)(param_2 + 8);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
    }
    else {
      piVar23 = (int *)(iVar11 + 0x20);
      if (*(short *)(param_2 + 8) == 0) {
        iVar13 = fn_82CE5410();
        if (*(unsigned int *)(iVar11 + 0x24) == (*(unsigned int *)(iVar11 + 0x28) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar13 + 0x10),piVar23,2);
        }
        *(unsigned short *)(*(int *)(iVar11 + 0x24) * 2 + *piVar23) = *puVar20;
        iVar13 = *(int *)(iVar11 + 0x24) + 1;
        *(int *)(iVar11 + 0x24) = iVar13;
        *(int *)(iVar10 + 4) = iVar13 * 2 + *piVar23 + -2;
      }
      else {
        uVar3 = *(unsigned int *)(param_2 + 0x18);
        uVar22 = (unsigned __int64)uVar3;
        iVar13 = fn_82CE5410();
        uVar4 = *(unsigned int *)(iVar11 + 0x24);
        lVar19 = uVar4 + uVar22;
        iVar16 = (int)lVar19;
        if ((int)(*(unsigned int *)(iVar11 + 0x28) & 0x3fffffff) < iVar16) {
          lVar7 = ((unsigned __int64)*(unsigned int *)(iVar11 + 0x28) & 0x3fffffff) << 1;
          if (iVar16 < (int)lVar7) {
            lVar19 = lVar7;
          }
          fn_82CE6310(*(unsigned int *)(iVar13 + 0x10),piVar23,lVar19,2);
        }
        iVar13 = uVar4 * 2 + *piVar23;
        *(unsigned int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + uVar3;
        *(int *)(iVar10 + 4) = iVar13;
        puVar20 = *(unsigned short **)(param_2 + 4);
        if (0 < (int)uVar3) {
          puVar18 = (unsigned short *)(iVar13 + -2);
          do {
            puVar18 = puVar18 + 1;
            *puVar18 = *puVar20;
            puVar20 = (unsigned short *)((unsigned int)*(unsigned short *)(param_2 + 8) + (int)puVar20);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
    }
    sVar1 = *(short *)(param_2 + 8);
    *(short *)(iVar10 + 8) = sVar1;
    if (sVar1 != 0) {
      if (*(char *)(iVar10 + 1) == '\x01') {
        *(unsigned short *)(iVar10 + 8) = 1;
      }
      else if (*(char *)(iVar10 + 1) == '\x02') {
        *(unsigned short *)(iVar10 + 8) = 2;
      }
    }
  }
  if (*(int *)(iVar10 + 4) != 0) {
    uVar2 = *(unsigned short *)(param_2 + 10);
    piVar23 = (int *)(iVar11 + 0x14);
    iVar15 = fn_82CE5410();
    iVar13 = *(int *)(iVar11 + 0x18);
    iVar16 = iVar13 + (unsigned int)uVar2;
    if ((int)(*(unsigned int *)(iVar11 + 0x1c) & 0x3fffffff) < iVar16) {
      iVar14 = (*(unsigned int *)(iVar11 + 0x1c) & 0x3fffffff) << 1;
      if (iVar16 < iVar14) {
        iVar16 = iVar14;
      }
      fn_82CE6310(*(unsigned int *)(iVar15 + 0x10),piVar23,iVar16,0xc);
    }
    iVar16 = 0;
    *(unsigned int *)(iVar11 + 0x18) = (unsigned int)uVar2 + *(int *)(iVar11 + 0x18);
    uVar9 = lbl_821AAD20;
    uVar8 = lbl_82002AE0;
    puVar21 = (unsigned int *)(iVar13 * 0xc + *piVar23);
    puVar12 = *(unsigned int **)(param_2 + 0xc);
    if (*(short *)(param_2 + 10) != 0) {
      do {
        puVar5 = *(unsigned char **)(param_2 + 0x10);
        *puVar21 = *puVar12;
        if (puVar5 == &lbl_8323BF84) {
          puVar21[1] = puVar12[1];
          puVar21[2] = puVar12[2];
        }
        else {
          *(short *)((int)puVar21 + 6) = (short)((unsigned int)uVar8 >> 0x10);
          *(short *)(puVar21 + 1) = (short)((unsigned int)uVar9 >> 0x10);
        }
        iVar16 = iVar16 + 1;
        puVar21 = puVar21 + 3;
        puVar12 = (unsigned int *)((int)*(short *)(param_2 + 2) + (int)puVar12);
      } while (iVar16 < (int)(unsigned int)*(unsigned short *)(param_2 + 10));
    }
    if (*(short *)(param_2 + 2) == 0) {
      *(unsigned short *)(iVar10 + 2) = 0;
      *(unsigned short *)(iVar10 + 10) = 1;
    }
    else {
      *(unsigned short *)(iVar10 + 2) = 0xc;
      *(unsigned short *)(iVar10 + 10) = *(unsigned short *)(param_2 + 10);
    }
    *(int *)(iVar10 + 0xc) = *piVar23;
  }
  fn_82D41D58(param_1);
  iVar10 = fn_82D41960(param_1,iVar10);
  *(int *)(param_1 + 0xe0) = iVar10 + *(int *)(param_1 + 0xe0);
  return (unsigned __int64)*(unsigned int *)(param_1 + 0xc4) - 1;
}

