void fn_825CC5D0(int param_1,unsigned __int64 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0xb4);
  fVar2 = *(float *)(param_1 + 0xb8);
  fVar3 = *(float *)(param_1 + 0xbc) + fVar1;
  fVar4 = fVar2 + *(float *)(param_1 + 0xbc);
  *(float *)(param_2 + 0x4ee) = fVar1;
  *(float *)((int)param_2 + 0x2774) = fVar3;
  *(float *)(param_2 + 0x4ef) = fVar2;
  *(float *)((int)param_2 + 0x277c) = fVar4;
  param_2[1] = param_2[1] | 1;
  *(float *)(param_2 + 0x2ee) = fVar1;
  *(float *)((int)param_2 + 0x1774) = fVar3;
  *(float *)(param_2 + 0x2ef) = fVar2;
  *(float *)((int)param_2 + 0x177c) = fVar4;
  *param_2 = *param_2 | 1;
  return;
}

