#define NAN(x) ((x) != (x))
extern unsigned int *auStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x824a5404) */
/* WARNING: Removing unreachable block (ram,0x824a5418) */
/* WARNING: Removing unreachable block (ram,0x824a541c) */
/* WARNING: Removing unreachable block (ram,0x824a547c) */
/* WARNING: Removing unreachable block (ram,0x824a5488) */
/* WARNING: Removing unreachable block (ram,0x824a5498) */

void fn_824A5348(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  float *pfVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned char auStack_58 [8];
  float afStack_50 [20];
  
  (**(int (***)())*param_2)(param_2,auStack_58,&uStack_60);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_60,&iStack_5c);
  iVar2 = *(int *)(iStack_5c + 0x40);
  iVar3 = ((-(unsigned int)(*(char *)(param_1 + 0x38) != '\0') & 5) + 10) * 0x40;
  puVar4 = (unsigned int *)(iVar2 + 0x140U & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (unsigned int *)(iVar3 + iVar2 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  *(unsigned char *)(param_1 + 0x74) = 0;
  if (*(char *)(param_1 + 0x74) != '\0') {
    fVar1 = *(float *)(param_1 + 0x6c);
    puVar4 = (unsigned int *)(iVar3 + iVar2 + 0x10U & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    uVar6 = (int)afStack_50 + in_r0 & 0xfffffff0;
    fVar8 = *(float *)(uVar6 + 4);
    fVar9 = *(float *)(uVar6 + 8);
    fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
    pfVar7 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar7 = fVar8;
    pfVar7[1] = fVar8;
    pfVar7[2] = fVar8;
    pfVar7[3] = fVar8;
    if (fVar1 < afStack_50[0]) {
      *(float *)(param_1 + 0x6c) = afStack_50[0];
    }
    if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x40)) {
      *(unsigned char *)(param_1 + 0x74) = 0;
    }
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    fVar1 = *(float *)(param_1 + 0x48);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x44);
  }
  fVar1 = *(float *)(param_1 + 0x6c) - fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = ltcg_pool_0_0f;
  }
  fVar8 = lbl_82005748;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 - lbl_82005748 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1 - lbl_82005748) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar8 = fVar1;
  }
  *(float *)(param_1 + 0x6c) = fVar8;
  if (*(char *)(param_1 + 0x74) == '\0') {
    *(unsigned int *)(param_1 + 0x68) = 0;
    *(unsigned char *)(param_1 + 0x74) = 0;
  }
  return;
}

