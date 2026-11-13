extern int fn_8260A120();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED6A8();
extern int fn_82D94B58();
extern int fn_82D962A8();
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int iStack_b0;
extern unsigned int iStack_c0;
extern unsigned int lbl_821CA9D8;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


unsigned int * fn_82609AA8(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar3;
  int iVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar10;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  unsigned int uVar17;
  int iStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  struct { int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;

  iVar4 = fn_82CE5410();
  puVar5 = (unsigned int *)(**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x44);
  *(unsigned short *)(puVar5 + 1) = 0x44;
  fn_82D94B58();
  *puVar5 = &lbl_821CA9D8;
  fn_82CED6A8(puVar5 + 0xe,param_1 + 0x38);
  piVar14 = puVar5 + 2;
  puVar5[0xf] = *(unsigned int *)(param_1 + 0x3c);
  *(unsigned char *)(puVar5 + 0x10) = *(unsigned char *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[4] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[4] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),piVar14,iVar8,4);
  }
  puVar5[3] = iVar4;
  piVar15 = puVar5 + 0xb;
  iVar4 = *(int *)(param_1 + 0x30);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[0xd] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[0xd] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),piVar15,iVar8,4);
  }
  puVar5[0xc] = iVar4;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[7] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[7] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),puVar5 + 5,iVar8,4);
  }
  puVar5[6] = iVar4;
  piVar16 = puVar5 + 8;
  iVar4 = *(int *)(param_1 + 0x24);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[10] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[10] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),piVar16,iVar8,4);
  }
  puVar5[9] = iVar4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar6 = 0;
    do {
      iVar8 = *piVar14;
      uVar7 = (**(int (***)())(**(int **)(iVar6 + *(int *)(param_1 + 8)) + 0x18))();
      iVar4 = iVar4 + 1;
      *(unsigned int *)(iVar6 + iVar8) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar6 = 0;
    do {
      iVar8 = *piVar15;
      uVar7 = (**(int (***)())(**(int **)(iVar6 + *(int *)(param_1 + 0x2c)) + 0x2c))();
      iVar4 = iVar4 + 1;
      *(unsigned int *)(iVar6 + iVar8) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar6 = 0;
    do {
      iVar13 = 0;
      iVar8 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(iVar6 + *(int *)(param_1 + 0x14));
      if (0 < iVar8) {
        iVar11 = 0;
        do {
          if (*(int *)(iVar11 + *(int *)(param_1 + 8)) == *(int *)(iVar9 + 0x14)) goto LAB_82609d0c;
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar13 < iVar8);
      }
      iVar13 = -1;
LAB_82609d0c:
      iVar11 = 0;
      if (0 < iVar8) {
        iVar12 = 0;
        do {
          if (*(int *)(iVar12 + *(int *)(param_1 + 8)) == *(int *)(iVar9 + 0x18)) goto LAB_82609d44;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < iVar8);
      }
      iVar11 = -1;
LAB_82609d44:
      uVar7 = 0;
      uVar17 = 0;
      if (-1 < iVar13) {
        uVar7 = *(unsigned int *)(iVar13 * 4 + *piVar14);
      }
      if (-1 < iVar11) {
        uVar17 = *(unsigned int *)(iVar11 * 4 + *piVar14);
      }
      uVar3 = fn_8260A120(param_1,*(unsigned int *)(iVar9 + 0xc));
      if (uVar3 == 0) {
        uVar3 = (unsigned __int64)*(unsigned int *)(iVar9 + 0xc);
        fn_82CE4040(uVar3);
      }
      iVar8 = fn_82CE5410();
      iVar8 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x38);
      *(unsigned short *)(iVar8 + 4) = 0x38;
      uVar7 = fn_82D962A8(iVar8,uVar7,uVar17,uVar3,*(unsigned char *)(iVar9 + 0x1c));
      fn_82CE4118(uVar3);
      iVar4 = iVar4 + 1;
      *(unsigned int *)(iVar6 + puVar5[5]) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0x20));
      if (piVar1 == (int *)0x0) {
        *(unsigned int *)(*piVar16 + iVar6) = 0;
      }
      else {
        stack_pair_90.first = 0;
        stack_pair_90.second = 0;
        uStack_88 = 0x80000000;
        (**(int (***)())(*piVar1 + 0x10))(piVar1,&stack_pair_90.first);
        uVar2 = stack_pair_90.second;
        stack_pair_b0.first = 0;
        stack_pair_b0.second = 0;
        uStack_a8 = 0x80000000;
        uVar3 = (unsigned __int64)stack_pair_90.second;
        iVar8 = fn_82CE5410();
        if ((int)(uStack_a8 & 0x3fffffff) < (int)uVar2) {
          uVar10 = ((unsigned __int64)uStack_a8 & 0x3fffffff) << 1;
          if ((int)uVar10 <= (int)uVar2) {
            uVar10 = uVar3;
          }
          fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),&stack_pair_b0.first,uVar10,4);
        }
        stack_pair_b0.second = uVar2;
        if (0 < (int)uVar2) {
          iVar8 = 0;
          do {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0xc)) {
              iVar13 = 0;
              do {
                if (*(int *)(iVar13 + *(int *)(param_1 + 8)) == *(int *)(stack_pair_90.first + iVar8))
                goto LAB_82609eec;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 4;
              } while (iVar9 < *(int *)(param_1 + 0xc));
            }
            iVar9 = -1;
LAB_82609eec:
            *(unsigned int *)(stack_pair_b0.first + iVar8) = *(unsigned int *)(iVar9 * 4 + *piVar14);
            iVar8 = iVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        stack_pair_a0.second = 0;
        uStack_98 = 0x80000000;
        stack_pair_a0.first = 0;
        (**(int (***)())(*piVar1 + 0x14))(piVar1,&stack_pair_a0.first);
        uVar2 = stack_pair_a0.second;
        iStack_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0x80000000;
        uVar3 = (unsigned __int64)stack_pair_a0.second;
        iVar8 = fn_82CE5410();
        if ((int)(uStack_b8 & 0x3fffffff) < (int)uVar2) {
          uVar10 = ((unsigned __int64)uStack_b8 & 0x3fffffff) << 1;
          if ((int)uVar10 <= (int)uVar2) {
            uVar10 = uVar3;
          }
          fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),&iStack_c0,uVar10,4);
        }
        uStack_bc = uVar2;
        if (0 < (int)uVar2) {
          iVar8 = 0;
          do {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x30)) {
              iVar13 = 0;
              do {
                if (*(int *)(*(int *)(param_1 + 0x2c) + iVar13) == *(int *)(stack_pair_a0.first + iVar8))
                goto LAB_82609fcc;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 4;
              } while (iVar9 < *(int *)(param_1 + 0x30));
            }
            iVar9 = -1;
LAB_82609fcc:
            *(unsigned int *)(iStack_c0 + iVar8) = *(unsigned int *)(iVar9 * 4 + *piVar15);
            iVar8 = iVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        iVar8 = *piVar16;
        uVar7 = (**(int (***)())(*piVar1 + 0x1c))(piVar1,&stack_pair_b0.first,&iStack_c0);
        *(unsigned int *)(iVar8 + iVar6) = uVar7;
        iVar8 = fn_82CE5410();
        uStack_bc = 0;
        if ((uStack_b8 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),iStack_c0,uStack_b8 & 0x3fffffff,4);
        }
        iStack_c0 = 0;
        uStack_b8 = 0x80000000;
        iVar8 = fn_82CE5410();
        stack_pair_a0.second = 0;
        if ((uStack_98 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),stack_pair_a0.first,uStack_98 & 0x3fffffff,4);
        }
        stack_pair_a0.first = 0;
        uStack_98 = 0x80000000;
        iVar8 = fn_82CE5410();
        stack_pair_b0.second = 0;
        if ((uStack_a8 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),stack_pair_b0.first,uStack_a8 & 0x3fffffff,4);
        }
        stack_pair_b0.first = 0;
        uStack_a8 = 0x80000000;
        iVar8 = fn_82CE5410();
        stack_pair_90.second = 0;
        if ((uStack_88 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),stack_pair_90.first,uStack_88 & 0x3fffffff,4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  return puVar5;
}
