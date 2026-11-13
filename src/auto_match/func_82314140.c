typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern int fn_822C40E8();
extern unsigned int lbl_82196750;
extern V16 loadVectorLeftIndexed128();


void fn_82314140(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5,
                  unsigned int *param_6,int param_7,unsigned int *param_8)

{
  int iVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned int in_register_00010410;
  unsigned int in_register_00010414;
  unsigned int in_register_00010418;
  unsigned int in_vr65;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  unsigned char auStack_50 [80];
  
  iVar1 = *(int *)(param_4 + 0x24);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x160) == 0)) {
    pfVar2 = (float *)(param_4 + 0x80U & 0xfffffff0);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
  }
  else {
    pfVar2 = (float *)(iVar1 + 0x130U & 0xfffffff0);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
  }
  fn_822C40E8(auStack_50,param_4,param_2,0);
  loadVectorLeftIndexed128(0xffffffff82192438,0x48);
  puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar8 = puVar3[2];
  uVar10 = puVar3[3];
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * (float)(*puVar3 ^ in_register_00010410) + fVar12;
  pfVar2[1] = in_register_000100d4 * (float)(uVar6 ^ in_register_00010414) + fVar13;
  pfVar2[2] = in_register_000100d8 * (float)(uVar8 ^ in_register_00010418) + fVar14;
  pfVar2[3] = in_vr13 * (float)(uVar10 ^ in_vr65) + fVar15;
  puVar4 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar7 = puVar4[1];
  uVar9 = puVar4[2];
  uVar11 = puVar4[3];
  puVar5 = (unsigned int *)(in_r0 + param_7 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar7;
  puVar5[2] = uVar9;
  puVar5[3] = uVar11;
  *param_6 = 0;
  *param_8 = 1;
  return;
}

