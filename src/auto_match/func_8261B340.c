extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825C2E68();
extern int fn_82CE5040();
extern int fn_82D41968();
extern int fn_82D80A40();
extern int fn_82D93168();


void fn_8261B340(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int in_r0;
  int iVar11;
  __int64 lVar10;
  unsigned int uVar12;
  unsigned char uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [16];
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [64];
  unsigned char auStack_90 [144];
  unsigned int *puVar4;
  
  if (*(float *)(param_2 + 0x1c) < *(float *)(param_1 + 4)) {
    piVar16 = *(int **)(param_2 + 0x24);
    iVar11 = *(int *)(*piVar16 + 0xc);
    piVar15 = (int *)piVar16[3];
    while (piVar1 = piVar15, piVar1 != (int *)0x0) {
      piVar16 = piVar1;
      piVar15 = (int *)piVar1[3];
    }
    if (*(char *)(piVar16 + 6) == '\x01') {
      iVar18 = (int)*(char *)(piVar16 + 4) + (int)piVar16;
    }
    else {
      iVar18 = 0;
    }
    if ((iVar18 != 0) && (0 < iVar11)) {
      if (2 < iVar11) {
        if (iVar11 == 3) {
          piVar16 = *(int **)(*(int *)(param_2 + 0x24) + 0xc);
          if (*(int *)(*piVar16 + 0xc) == 10) {
            uVar19 = (**(int (***)())(*(int *)*piVar16 + 0x10))();
            lVar10 = uVar19 - 0x10;
            if ((uVar19 & 0xffffffff) == 0) {
              lVar10 = 0;
            }
            iVar11 = fn_82D41968(lVar10,*(unsigned int *)(*(int *)(param_2 + 0x24) + 4));
            puVar2 = *(unsigned int **)(param_2 + 0x24);
            puVar9 = (unsigned int *)puVar2[3];
            puVar3 = puVar2;
            while (puVar4 = puVar9, puVar4 != (unsigned int *)0x0) {
              puVar3 = puVar4;
              puVar9 = (unsigned int *)puVar4[3];
            }
            if (*(char *)(puVar3 + 6) == '\x01') {
              iVar14 = (int)*(char *)(puVar3 + 4) + (int)puVar3;
            }
            else {
              iVar14 = 0;
            }
            iVar17 = 0;
            if (iVar14 != 0) {
              iVar17 = *(int *)(iVar14 + 0xc);
            }
            uVar5 = *(unsigned int *)(iVar11 + 8);
            if ((*(unsigned int *)(param_1 + 0x14) & uVar5) == 0) {
              return;
            }
            uVar6 = *(unsigned int *)(param_1 + 0x18);
            if (((uVar6 & 0xfef1bfff) != 0) && ((uVar6 & uVar5) != 0)) {
              return;
            }
            if (((uVar5 & 0x10e4000) != 0) && ((uVar5 & ~uVar6 & 0x10e4000) == 0)) {
              return;
            }
            for (piVar16 = *(int **)(param_1 + 8); piVar16 < *(int **)(param_1 + 0xc);
                piVar16 = piVar16 + 1) {
              if (iVar17 == *piVar16) {
                return;
              }
              if (iVar18 == *piVar16) {
                return;
              }
            }
            uVar19 = (unsigned __int64)*puVar2;
            fn_82D80A40(*(unsigned int *)(iVar18 + 8));
            fn_82D93168(iVar18 + 0xe0);
            fn_82CE5040(auStack_130,auStack_90,uVar19 + 0x20);
            fn_82CE5040(auStack_120,auStack_90,uVar19 + 0x30);
            fn_82CE5040(auStack_100,auStack_90,uVar19 + 0x40);
            iVar14 = *(int *)(param_1 + 0x10);
            *(unsigned int *)(iVar14 + 0x34) = 0x40;
            *(unsigned int *)(iVar14 + 0x30) = 0;
            *(unsigned int *)(iVar14 + 0x38) = 1;
            puVar7 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(iVar14 + 0x40U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)((unsigned int)(auStack_120 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(iVar14 + 0x50U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
            uVar12 = *puVar7;
            uVar20 = puVar7[1];
            uVar21 = puVar7[2];
            uVar22 = puVar7[3];
            *(unsigned int *)(iVar14 + 0x34) = 0x40;
            puVar7 = (unsigned int *)(iVar14 + 0x60U & 0xfffffff0);
            *puVar7 = uVar12;
            puVar7[1] = uVar20;
            puVar7[2] = uVar21;
            puVar7[3] = uVar22;
            *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x23) = *(unsigned char *)(iVar11 + 4);
            *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = *(unsigned int *)(iVar11 + 8);
            *(unsigned short *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
            puVar7 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 0x1c);
            *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
            *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
            *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar17;
            *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x78) =
                 *(unsigned int *)(*(int *)(param_2 + 0x24) + 4);
            iVar11 = *(int *)(*(int *)(param_2 + 0x24) + 4);
          }
          else {
            if (*(int *)(*piVar16 + 0xc) != 0xe) {
              return;
            }
            iVar11 = fn_82D41968(**(unsigned int **)(*(int *)(param_2 + 0x24) + 0xc),
                                  *(unsigned int *)(*(int *)(param_2 + 0x24) + 4));
            puVar2 = *(unsigned int **)(param_2 + 0x24);
            puVar9 = (unsigned int *)puVar2[3];
            puVar3 = puVar2;
            while (puVar4 = puVar9, puVar4 != (unsigned int *)0x0) {
              puVar3 = puVar4;
              puVar9 = (unsigned int *)puVar4[3];
            }
            if (*(char *)(puVar3 + 6) == '\x01') {
              iVar14 = (int)*(char *)(puVar3 + 4) + (int)puVar3;
            }
            else {
              iVar14 = 0;
            }
            iVar17 = 0;
            if (iVar14 != 0) {
              iVar17 = *(int *)(iVar14 + 0xc);
            }
            uVar5 = *(unsigned int *)(iVar11 + 8);
            if ((*(unsigned int *)(param_1 + 0x14) & uVar5) == 0) {
              return;
            }
            uVar6 = *(unsigned int *)(param_1 + 0x18);
            if (((uVar6 & 0xfef1bfff) != 0) && ((uVar6 & uVar5) != 0)) {
              return;
            }
            if (((uVar5 & 0x10e4000) != 0) && ((uVar5 & ~uVar6 & 0x10e4000) == 0)) {
              return;
            }
            for (piVar15 = *(int **)(param_1 + 8); piVar15 < *(int **)(param_1 + 0xc);
                piVar15 = piVar15 + 1) {
              if (iVar17 == *piVar15) {
                return;
              }
              if (iVar18 == *piVar15) {
                return;
              }
            }
            uVar19 = (unsigned __int64)*puVar2;
            fn_82D80A40(*(unsigned int *)(iVar18 + 8));
            fn_82D93168(iVar18 + 0xe0);
            fn_82CE5040(auStack_f0,auStack_d0,uVar19 + 0x20);
            fn_82CE5040(auStack_110,auStack_d0,uVar19 + 0x30);
            fn_82CE5040(auStack_e0,auStack_d0,uVar19 + 0x40);
            iVar14 = *(int *)(param_1 + 0x10);
            *(unsigned int *)(iVar14 + 0x34) = 0x40;
            *(unsigned int *)(iVar14 + 0x30) = 0;
            *(unsigned int *)(iVar14 + 0x38) = 1;
            puVar7 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(iVar14 + 0x40U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(iVar14 + 0x50U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
            uVar12 = *puVar7;
            uVar20 = puVar7[1];
            uVar21 = puVar7[2];
            uVar22 = puVar7[3];
            *(unsigned int *)(iVar14 + 0x34) = 0x40;
            puVar7 = (unsigned int *)(iVar14 + 0x60U & 0xfffffff0);
            *puVar7 = uVar12;
            puVar7[1] = uVar20;
            puVar7[2] = uVar21;
            puVar7[3] = uVar22;
            *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x23) = *(unsigned char *)(iVar11 + 4);
            *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = *(unsigned int *)(iVar11 + 8);
            *(unsigned short *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
            puVar7 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (unsigned int *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 0x1c);
            *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
            *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
            *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar17;
            if (((int *)piVar16[3] == (int *)0x0) || (*(int *)(*(int *)piVar16[3] + 0xc) != 9)) {
              *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x78) =
                   *(unsigned int *)(*(int *)(param_2 + 0x24) + 4);
              iVar11 = *(int *)(*(int *)(param_2 + 0x24) + 4);
            }
            else {
              *(int *)(*(int *)(param_1 + 0x10) + 0x78) = piVar16[1];
              iVar11 = piVar16[1];
            }
          }
          uVar13 = 1;
          uVar12 = fn_825C2E68(iVar18,iVar11);
          *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar12;
          *(unsigned char *)(param_1 + 0x1c) = uVar13;
          return;
        }
        if (iVar11 < 4) {
          return;
        }
        if (6 < iVar11) {
          if (iVar11 < 0xb) {
            return;
          }
          if (0xc < iVar11) {
            return;
          }
        }
      }
      iVar14 = *(int *)(*(int *)(param_2 + 0x24) + 0xc);
      iVar11 = *(int *)(param_2 + 0x24);
      while (iVar17 = iVar14, iVar17 != 0) {
        iVar11 = iVar17;
        iVar14 = *(int *)(iVar17 + 0xc);
      }
      if (*(char *)(iVar11 + 0x18) == '\x01') {
        iVar11 = *(char *)(iVar11 + 0x10) + iVar11;
      }
      else {
        iVar11 = 0;
      }
      iVar14 = 0;
      if (iVar11 != 0) {
        iVar14 = *(int *)(iVar11 + 0xc);
      }
      for (piVar16 = *(int **)(param_1 + 8); piVar16 < *(int **)(param_1 + 0xc);
          piVar16 = piVar16 + 1) {
        if (iVar14 == *piVar16) {
          return;
        }
        if (iVar18 == *piVar16) {
          return;
        }
      }
      *(unsigned char *)(param_1 + 0x1c) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x23) = 0;
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = 4;
      *(unsigned short *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
      puVar7 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (unsigned int *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      puVar7 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (unsigned int *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      iVar11 = *(int *)(param_1 + 0x10);
      *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 0x1c);
      *(unsigned int *)(iVar11 + 0x34) = 0x30;
      *(unsigned int *)(iVar11 + 0x30) = 5;
      *(unsigned int *)(iVar11 + 0x38) = 1;
      puVar7 = (unsigned int *)(in_r0 + iVar11 & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (unsigned int *)(iVar11 + 0x40U & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      puVar7 = (unsigned int *)(in_r0 + iVar11 + 0x10 & 0xfffffff0);
      uVar12 = *puVar7;
      uVar20 = puVar7[1];
      uVar21 = puVar7[2];
      uVar22 = puVar7[3];
      *(unsigned int *)(iVar11 + 0x34) = 0x40;
      puVar7 = (unsigned int *)(iVar11 + 0x50U & 0xfffffff0);
      *puVar7 = uVar12;
      puVar7[1] = uVar20;
      puVar7[2] = uVar21;
      puVar7[3] = uVar22;
      *(unsigned char *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
      *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
      *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar14;
      piVar16 = *(int **)(*(int *)(param_2 + 0x24) + 0xc);
      if (piVar16 == (int *)0x0) {
        *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x78) = 0xffffffff;
        *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x2c) = 0;
      }
      else {
        iVar11 = *(int *)(*piVar16 + 0xc);
        if (((iVar11 == 0xb) || (iVar11 == 0xc)) || (iVar11 == 0xf)) {
          *(int *)(*(int *)(param_1 + 0x10) + 0x78) = piVar16[1];
        }
        else {
          *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x78) =
               *(unsigned int *)(*(int *)(param_2 + 0x24) + 4);
          piVar16 = *(int **)(param_2 + 0x24);
        }
        uVar12 = fn_825C2E68(iVar18,piVar16[1]);
        *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar12;
      }
    }
  }
  return;
}

