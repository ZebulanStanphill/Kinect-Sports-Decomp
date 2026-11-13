extern int fn_827A0C20();
extern int fn_827A3178();
extern int fn_827A8770();


unsigned __int64 fn_827A3440(int param_1,unsigned __int64 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  float *pfVar10;
  
  uVar8 = fn_827A3178();
  if ((uVar8 & 0xff) != 0) {
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x4c);
    uVar9 = fn_827A8770(*(int *)(param_1 + 8) + 0x24);
    fVar1 = -(float)uVar3;
    *param_3 = *param_3 + fVar1;
    param_3[1] = -(float)uVar9 + param_3[1];
    param_3[3] = -(float)uVar9 + param_3[3];
    param_3[2] = fVar1 + param_3[2];
    pfVar10 = (float *)fn_827A0C20(*(unsigned int *)(param_1 + 8));
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x40);
    fVar2 = pfVar10[1];
    fVar4 = (*(float *)(*(int *)(param_1 + 8) + 0x3c) - *pfVar10) + *param_3;
    *param_3 = fVar4;
    fVar5 = (fVar1 - fVar2) + param_3[1];
    param_3[1] = fVar5;
    fVar1 = *pfVar10;
    fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x3c);
    fVar7 = (*(float *)(*(int *)(param_1 + 8) + 0x40) - pfVar10[1]) + param_3[3];
    param_3[3] = fVar7;
    fVar6 = (fVar2 - fVar1) + param_3[2];
    param_3[2] = fVar6;
    fVar1 = pfVar10[1];
    fVar2 = *pfVar10;
    *param_3 = fVar2 + fVar4;
    param_3[2] = fVar2 + fVar6;
    param_3[1] = fVar5 + fVar1;
    param_3[3] = fVar7 + fVar1;
  }
  return uVar8;
}

