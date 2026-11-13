extern unsigned int *auStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_78;
extern int fn_823C9098();
extern int fn_823CB830();
extern int fn_82F65018();


void fn_823C6D90(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000107f0;
  float in_register_000107f4;
  float in_register_000107f8;
  float in_vr127;
  float afStack_80 [2];
  float fStack_78;
  float afStack_70 [2];
  float fStack_68;
  unsigned char auStack_60 [16];
  
  fn_823CB830(param_2,*(unsigned int *)(param_1 + 0x2a0),afStack_70,auStack_60,afStack_80,
                    param_5);
  puVar2 = *(unsigned short **)(((*(int *)(param_2 + 0x2c) == 0) + 0xa1) * 4 + *(int *)(param_1 + 0x240));
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    pfVar3 = (float *)((unsigned int)(puVar2 + 0x10) & 0xfffffff0);
    in_register_000107f0 = *pfVar3;
    in_register_000107f4 = pfVar3[1];
    in_register_000107f8 = pfVar3[2];
    in_vr127 = pfVar3[3];
  }
  pfVar3 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
  *pfVar4 = in_register_000107f0 - *pfVar3;
  pfVar4[1] = in_register_000107f4 - fVar6;
  pfVar4[2] = in_register_000107f8 - fVar7;
  pfVar4[3] = in_vr127 - fVar8;
  dVar5 = (double)fn_82F65018(-(double)afStack_70[0],-(double)fStack_68);
  fn_823C9098((double)afStack_80[0],(double)(float)dVar5,(double)fStack_78);
  if (*(int *)(param_1 + 0x260) == 0) {
    pfVar3 = (float *)(param_1 + 0x1c0U & 0xfffffff0);
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
    *pfVar4 = in_register_000107f0 - *pfVar3;
    pfVar4[1] = in_register_000107f4 - fVar6;
    pfVar4[2] = in_register_000107f8 - fVar7;
    pfVar4[3] = in_vr127 - fVar8;
  }
  else {
    pfVar3 = (float *)(in_r0 + param_3 & 0xfffffff0);
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
    *pfVar4 = in_register_000107f0 - *pfVar3;
    pfVar4[1] = in_register_000107f4 - fVar6;
    pfVar4[2] = in_register_000107f8 - fVar7;
    pfVar4[3] = in_vr127 - fVar8;
  }
  dVar5 = (double)fn_82F65018(-(double)afStack_70[0],-(double)fStack_68);
  *(float *)(param_4 + 4) = (float)dVar5;
  return;
}

