extern int fn_8251E4D0();
extern int fn_825A8140();
extern int fn_82A1DD38();
extern unsigned int lbl_821956C0;
extern unsigned int ltcg_pool_0_0f;


void fn_825A7290(int param_1)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar6;
  __int64 lVar9;
  unsigned short *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  
  fn_825A8140(param_1 + 0x600);
  if (*(int *)(param_1 + 0x610) == 0) {
    return;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x48);
  }
  if (iVar7 == 0) {
    return;
  }
  *(unsigned short *)(param_1 + 0x640) = 0;
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x630);
  dVar12 = (double)lbl_821956C0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(unsigned int *)(iVar7 + 0xa0);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(unsigned int *)(iVar7 + 0xa4);
  }
  if (((uVar5 != 0) && (uVar8 != 0)) && (uVar5 < uVar8)) {
    puVar10 = (unsigned short *)(uVar5 + 0x48);
    lVar9 = (unsigned __int64)((uVar8 - uVar5) - 1) / 0x560 + 1;
    dVar13 = dVar12;
    do {
      puVar4 = (unsigned short *)fn_8251E4D0(param_1 + 0x630);
      if (puVar4 != (unsigned short *)0x0) {
        *puVar4 = puVar10[-0x23];
        uVar1 = *puVar10;
        puVar4[1] = uVar1;
        *(unsigned int *)(puVar4 + 2) = *(unsigned int *)(puVar10 + 0x10c);
        *(unsigned int *)(puVar4 + 4) = *(unsigned int *)(puVar10 + 0x118);
        dVar11 = (double)(*(float *)(puVar10 + 0x118) - *(float *)(puVar10 + 0x12e));
        *(float *)(puVar4 + 6) = *(float *)(puVar10 + 0x118) - *(float *)(puVar10 + 0x12e);
        puVar2 = (unsigned int *)((unsigned int)(puVar10 + 300) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(puVar4 + 8) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        if ((uVar1 & 1) != 0) {
          if ((float)(dVar13 - dVar11) < 0.0) {
            dVar11 = dVar13;
          }
          dVar13 = (double)(float)dVar11;
        }
      }
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 0x2b0;
    } while (lVar9 != 0);
    if (dVar13 != dVar12) goto LAB_825a73e8;
  }
  dVar13 = (double)ltcg_pool_0_0f;
LAB_825a73e8:
  *(float *)(param_1 + 0x62c) = (float)dVar13;
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x610) + 0x1c);
  lVar9 = uVar6 + 0x160;
  if (uVar6 == 0) {
    lVar9 = 0;
  }
  fn_82A1DD38(param_1 + 0x644,lVar9,0x100);
  return;
}

