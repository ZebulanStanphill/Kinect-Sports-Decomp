typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_825792D8();
extern int fn_825797A0();
extern int fn_825CD180();
extern unsigned int lbl_82195680;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64
fn_825795A8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fVar11;
  float fVar12;
  float afStack_40 [16];
  
  uVar1 = in_r0 + (int)param_3 & 0xfffffff0;
  fVar11 = *(float *)(uVar1 + 4);
  fVar12 = *(float *)(uVar1 + 8);
  param_1[1] = 0;
  fVar4 = lbl_82195680;
  puVar2 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
  pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar11;
  pfVar3[1] = fVar11;
  pfVar3[2] = fVar11;
  pfVar3[3] = fVar11;
  if (fVar4 < afStack_40[0]) {
    iVar6 = fn_825792D8((double)ltcg_pool_0_0f,*param_1,param_2,param_3,param_4,1);
    if (iVar6 != 0) {
      iVar6 = fn_825797A0(param_1);
      uVar5 = fn_825CD180(*param_1,param_2,param_3,param_4,iVar6,param_1 + 99,param_1[0x68]);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      param_1[(param_1[1] + 1) * 3] = *(unsigned int *)(iVar6 + 0x74);
      param_1[1] = param_1[1] + 1;
      return uVar5;
    }
  }
  else {
    puVar2 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  return 0;
}

