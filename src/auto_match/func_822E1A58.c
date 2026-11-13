extern float fRam831cd458;
extern float fRam831cd45c;
extern int fn_822AA770();
extern int fn_822AA7E0();
extern int fn_822CF300();
extern int fn_822CFA38();
extern int fn_822D14B8();
extern int fn_822E2D18();
extern int fn_822E2E30();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_83265A28;


void fn_822E1A58(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  double dVar9;
  
  fVar5 = fRam831cd458;
  fVar4 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar8 = lbl_83265A28 & 0x7fffff;
  fVar3 = fRam831cd45c - fRam831cd458;
  *(unsigned int *)(param_1 + 0x38) = 0xffffffff;
  *(float *)(param_1 + 0x2c) = fVar3 * ((float)(uVar8 | 0x3f800000) - fVar4) + fVar5;
  fn_822E2D18(param_1,1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x118);
  *(unsigned char *)(iVar6 + 0x1d4) = 0;
  *(unsigned char *)(iVar6 + 0x254) = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x2e0);
  if ((0x17 < iVar6) || (*(int *)(&lbl_831DCD58 + iVar6 * 4) != 0)) {
    iVar6 = fn_822CFA38(*(int *)(param_1 + 0x14),6);
    if (iVar6 == 0) {
      uVar7 = fn_822CFA38(*(unsigned int *)(param_1 + 0x14),5);
      iVar6 = ((unsigned int)LZCOUNT(uVar7) >> 5) + 1;
    }
    else {
      iVar6 = 0;
    }
  }
  *(int *)(param_1 + 0x30) = iVar6;
  if (iVar6 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x1c);
    puVar2 = (unsigned int *)**(int **)(*(int *)(param_1 + 0x10) + 8);
    if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) == 0) {
      uVar7 = puVar2[1];
    }
    else {
      uVar7 = *puVar2;
    }
    iVar6 = fn_822AA7E0(uVar7);
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar8 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
        goto LAB_822e1bbc;
      }
      goto LAB_822e1bb0;
    }
    iVar6 = fn_822AA770(uVar7);
    if (iVar6 == 0) goto LAB_822e1bb0;
  }
  else {
LAB_822e1bb0:
    iVar6 = fn_822D14B8(param_1);
  }
  uVar8 = *(unsigned int *)(iVar6 + 0x28);
LAB_822e1bbc:
  *(unsigned int *)(param_1 + 0x44) = uVar8;
  *(unsigned int *)(param_1 + 0x48) = 1;
  dVar9 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x54) = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x270) = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x24) == 0) {
    fn_822CF300(*(int *)(param_1 + 0x14),5);
  }
  fn_822E2E30(param_1 + 0x58);
  *(float *)(param_1 + 0x40) = (float)dVar9;
  return;
}

