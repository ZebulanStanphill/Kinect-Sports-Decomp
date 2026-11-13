extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CEC730();


void fn_82D9B678(int param_1,unsigned __int64 param_2)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [32];
  
  pfVar1 = (float *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar2 = (float *)(param_1 + 0x20U & 0xfffffff0);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar10 = pfVar2[3];
  pfVar2 = (float *)(param_1 + 0x30U & 0xfffffff0);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar2 = (float *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * *pfVar1;
  pfVar2[1] = in_register_000100d4 * fVar11;
  pfVar2[2] = in_register_000100d8 * fVar12;
  pfVar2[3] = in_vr13 * fVar13;
  pfVar1 = (float *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_000100b0 * fVar7;
  pfVar1[1] = in_register_000100b4 * fVar8;
  pfVar1[2] = in_register_000100b8 * fVar9;
  pfVar1[3] = in_vr11 * fVar10;
  pfVar1 = (float *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_00010090 * fVar3;
  pfVar1[1] = in_register_00010094 * fVar4;
  pfVar1[2] = in_register_00010098 * fVar5;
  pfVar1[3] = in_vr9 * fVar6;
  fn_82CEC730(param_2,auStack_40);
  return;
}

