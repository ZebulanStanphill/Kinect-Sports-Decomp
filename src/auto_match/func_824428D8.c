extern int fn_8251E530();
extern int fn_82575DF0();
extern int fn_82F68B70();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;


void fn_824428D8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int in_r0;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  double dVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned char *)(*(int *)(param_1 + 0x14) + 0x2c) = 0;
  puVar2 = (unsigned int *)(in_r0 + *(int *)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x3c) = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0xb4) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0xcc) = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar7 = **(int **)(iVar4 + 0xe0);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1d0) == 0)) {
    *(unsigned int *)(iVar7 + 0x1d0) = 1;
  }
  *(unsigned int *)(*(int *)(iVar4 + 0xe0) + 0x2c) = 0;
  if (**(int **)(param_1 + 4) == 0) {
    return;
  }
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 0x13c;
  iVar4 = fn_82F68B70();
  piVar3 = (int *)lVar5;
  iVar7 = 0;
  if (0 < piVar3[9]) {
    lVar8 = lVar5 + 0x28;
    do {
      if (*(int *)lVar8 != 0) {
        fn_82575DF0(*(unsigned int *)(*(int *)(iVar4 + 0x4c) + 0x93c));
        *(int *)lVar8 = 0;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < piVar3[9]);
  }
  iVar7 = 0;
  if (0 < *piVar3) {
    dVar9 = (double)lbl_82192734;
    do {
      lVar5 = lVar5 + 4;
      for (uVar6 = *(unsigned int *)(iVar4 + 0x230); uVar6 < *(unsigned int *)(iVar4 + 0x234); uVar6 = uVar6 + 0x60)
      {
        if (*(int *)(uVar6 + 0x3c) == *(int *)lVar5) {
          uVar6 = *(unsigned int *)(uVar6 + 0x34);
          if (uVar6 != 0xffffffff) {
            iVar1 = *(int *)(*(int *)(*(int *)((((int)uVar6 >> 8 & 0xffU) + 0x1ff) * 4 +
                                              *(int *)(iVar4 + 0x4c)) + 4) + (uVar6 & 0xff) * 4);
            *(float *)(iVar1 + 0xc) = (float)dVar9;
            *(unsigned int *)(iVar1 + 0x20) = *(unsigned int *)(iVar1 + 0x20) | 8;
          }
          fn_8251E530((unsigned int *)(iVar4 + 0x230));
          break;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar3);
  }
  *piVar3 = 0;
  piVar3[9] = 0;
  return;
}

