extern unsigned int *auStack_40;
extern int fn_823AC9D8();
extern unsigned int ltcg_pool_0_0f;


int fn_823ACC70(int param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  unsigned int in_register_00010410;
  unsigned int in_register_00010414;
  unsigned int in_register_00010418;
  unsigned int in_vr65;
  unsigned int in_register_00010440;
  unsigned int in_register_00010444;
  unsigned int in_register_00010448;
  unsigned int in_vr68;
  unsigned int in_register_00010470;
  unsigned int in_register_00010474;
  unsigned int in_register_00010478;
  unsigned int in_vr71;
  unsigned char auStack_40 [16];
  float afStack_30 [6];
  
  fn_823AC9D8(afStack_30);
  fVar4 = ltcg_pool_0_0f;
  if (*(float *)(param_2 + 0x38) <= ltcg_pool_0_0f) {
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010470;
    puVar2[1] = in_register_00010474;
    puVar2[2] = in_register_00010478;
    puVar2[3] = in_vr71;
  }
  else {
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010440;
    puVar2[1] = in_register_00010444;
    puVar2[2] = in_register_00010448;
    puVar2[3] = in_vr68;
  }
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  fVar1 = fVar5 * 0.0 + *(float *)(((unsigned int)(auStack_40 + in_r0) & 0xfffffff0) + 4) * fVar6 +
          *(float *)(((unsigned int)(auStack_40 + in_r0) & 0xfffffff0) + 8) * fVar7;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  if (afStack_30[0] <= fVar4) {
    fVar8 = (float)((unsigned int)fVar8 ^ in_vr65);
    fVar7 = (float)((unsigned int)fVar7 ^ in_register_00010418);
    fVar6 = (float)((unsigned int)fVar6 ^ in_register_00010414);
    fVar5 = (float)((unsigned int)fVar5 ^ in_register_00010410);
  }
  pfVar3 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar3 = fVar5;
  pfVar3[1] = fVar6;
  pfVar3[2] = fVar7;
  pfVar3[3] = fVar8;
  return param_1;
}

