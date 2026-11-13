extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_824A2220();
extern int fn_827F4038();
extern int fn_827F4048();
extern int fn_827F4068();
extern int fn_82F52520();
extern unsigned int uStack_58;


void fn_824A2128(int param_1)

{
  float *pfVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  float fVar5;
  unsigned int uVar6;
  float fVar7;
  unsigned int uVar8;
  float fVar9;
  unsigned int uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  unsigned int auStack_60 [2];
  unsigned int uStack_58;
  unsigned char auStack_50 [24];
  
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0xb8) + 4))();
  if (iVar3 == 0) {
    pfVar1 = (float *)(param_1 + 0xc0U & 0xfffffff0);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
  }
  else {
    fn_82F52520(*(unsigned int *)(param_1 + 0xb8),auStack_50);
    pfVar1 = (float *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar3 = fn_824A2220(auStack_60,param_1);
      puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      uVar8 = puVar2[2];
      uVar10 = puVar2[3];
      *(unsigned int *)(param_1 + 0xd0) = 1;
      puVar2 = (unsigned int *)(param_1 + 0xc0U & 0xfffffff0);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      puVar2[2] = uVar8;
      puVar2[3] = uVar10;
    }
  }
  pfVar1 = (float *)(in_r0 + param_1 + 0xc0 & 0xfffffff0);
  fVar5 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar11 = pfVar1[3];
  pfVar1 = (float *)(in_r0 + param_1 + 0xc0 & 0xfffffff0);
  *pfVar1 = fVar12;
  pfVar1[1] = fVar13;
  pfVar1[2] = fVar14;
  pfVar1[3] = fVar15;
  pfVar1 = (float *)((int)auStack_60 + in_r0 & 0xfffffff0);
  *pfVar1 = fVar12 - fVar5;
  pfVar1[1] = fVar13 - fVar7;
  pfVar1[2] = fVar14 - fVar9;
  pfVar1[3] = fVar15 - fVar11;
  iVar3 = fn_827F4038(param_1);
  *(unsigned int *)(iVar3 + 0x10) = auStack_60[0];
  *(unsigned char *)(iVar3 + 0x1c) = 0x50;
  *(unsigned int *)(iVar3 + 0x18) = uStack_58;
  iVar3 = fn_827F4048(param_1);
  *(unsigned char *)(iVar3 + 0x1c) = 0x50;
  fn_827F4068(param_1);
  return;
}

