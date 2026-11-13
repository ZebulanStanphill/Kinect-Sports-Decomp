extern int fn_8261FA78();
extern unsigned int ltcg_pool_0_0f;


void fn_825E13D8(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar3 = param_1[1];
  dVar4 = (double)*(float *)(iVar3 + 0x30);
  fVar1 = *(float *)(iVar3 + 0x34);
  *(unsigned int *)(iVar3 + 0x38) = *(unsigned int *)(*param_1 + 0xc0);
  iVar3 = param_1[1];
  *(float *)(iVar3 + 0x3c) =
       (float)((double)*(float *)(iVar3 + 0x30) - dVar4) + *(float *)(iVar3 + 0x3c);
  iVar3 = param_1[1];
  if (*(int *)(param_2 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_8261FA78((double)*(float *)(iVar3 + 0x38),(double)*(float *)(iVar3 + 0x34),
                              (double)*(float *)(iVar3 + 0x30),(double)*(float *)(*param_1 + 0xc0),
                              param_2);
  }
  iVar2 = param_1[1];
  if (iVar3 == 0) {
    dVar5 = (double)ltcg_pool_0_0f;
    if (*(int *)(param_2 + 0x90) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8261FA78((double)*(float *)(iVar2 + 0x38),(double)*(float *)(iVar2 + 0x34),
                                dVar5,(double)*(float *)(*param_1 + 0xc0),param_2);
    }
    if (iVar3 != 0) {
      iVar3 = param_1[1];
      *(float *)(iVar3 + 0x40) = (fVar1 - *(float *)(iVar3 + 0x34)) + *(float *)(iVar3 + 0x40);
      *(float *)(param_1[1] + 0x34) = fVar1;
      *(float *)(param_1[1] + 0x3c) = (float)((double)*(float *)(param_1[1] + 0x3c) - dVar4);
      *(float *)(param_1[1] + 0x30) = (float)dVar5;
    }
  }
  else {
    *(float *)(iVar2 + 0x40) = (fVar1 - *(float *)(iVar2 + 0x34)) + *(float *)(iVar2 + 0x40);
    *(float *)(param_1[1] + 0x34) = fVar1;
  }
  return;
}

