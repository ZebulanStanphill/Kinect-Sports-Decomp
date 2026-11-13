typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DCC518(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned char auVar4 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar5 [16];
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)(in_r0 + param_1 & 0xfffffff0);
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs42,in_vs41); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(auVar5); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar5,in_vs43); memcpy(auVar5, &_vt2, 16); }
  vectorMultiplyAddFloatingPoint(auVar5,auVar4,auVar4);
  pfVar2 = (float *)(in_r0 + param_3 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_00010000;
  pfVar2[1] = fVar6 * in_ACC;
  pfVar2[2] = fVar7 * in_register_00010008;
  pfVar2[3] = fVar8 * in_vr0;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_00010000;
  pfVar2[1] = fVar6 * in_ACC;
  pfVar2[2] = fVar7 * in_register_00010008;
  pfVar2[3] = fVar8 * in_vr0;
  puVar3 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  *puVar3 = in_register_00010050;
  puVar3[1] = in_register_00010054;
  puVar3[2] = in_register_00010058;
  puVar3[3] = in_vr5;
  return;
}

