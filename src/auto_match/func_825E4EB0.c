extern int fn_8263FB88();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_8320A898;


void fn_825E4EB0(float *param_1,float *param_2,unsigned __int64 param_3,float *param_4,float *param_5,
                  unsigned int param_6,unsigned int *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  
  if (param_7 == (unsigned int *)0x0) {
    pfVar10 = (float *)fn_8263FB88(lbl_8320A898,0xd,4,0x14);
    if ((__int64)-(unsigned __int64)(pfVar10 == (float *)0x0) < 0) {
      return;
    }
  }
  else {
    pfVar10 = (float *)*param_7;
  }
  fVar1 = *param_4;
  fVar2 = param_5[1];
  fVar3 = *param_5;
  fVar7 = *param_2 * lbl_821916FC;
  fVar8 = param_2[1] * lbl_821916FC;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar9 = (float)(param_6 << 0x18 | param_6 >> 8);
  fVar6 = param_4[1];
  *pfVar10 = fVar4;
  pfVar10[3] = fVar1;
  pfVar10[2] = fVar9;
  pfVar10[4] = fVar2;
  pfVar10[7] = fVar9;
  pfVar10[8] = fVar3;
  pfVar10[0xc] = fVar9;
  pfVar10[9] = fVar2;
  pfVar10[0x11] = fVar9;
  pfVar10[0xb] = fVar5;
  fVar7 = fVar4 + fVar7;
  pfVar10[5] = fVar7;
  fVar8 = fVar5 + fVar8;
  pfVar10[1] = fVar8;
  pfVar10[6] = fVar8;
  pfVar10[10] = fVar7;
  pfVar10[0xd] = fVar3;
  pfVar10[0xe] = fVar6;
  pfVar10[0xf] = fVar4;
  pfVar10[0x10] = fVar5;
  pfVar10[0x12] = fVar1;
  pfVar10[0x13] = fVar6;
  if (param_7 == (unsigned int *)0x0) {
    *(unsigned int *)(lbl_8320A898 + 0x30) = *(unsigned int *)(lbl_8320A898 + 0x3554);
  }
  else {
    *param_7 = pfVar10 + 0x14;
  }
  return;
}

