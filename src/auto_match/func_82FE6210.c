extern int fn_82F65350();
extern unsigned int lbl_82006848;
extern unsigned int lbl_82015CF0;


unsigned __int64
fn_82FE6210(int param_1,unsigned __int64 param_2,int *param_3,int param_4,unsigned int *param_5)

{
  float fVar1;
  float fVar2;
  unsigned short uVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  
  *(int **)(param_1 + 0x20) = param_3;
  *(unsigned int *)(param_1 + 4) = *param_5;
  *(unsigned int *)(param_1 + 8) = (unsigned int)param_5[1] >> 0xb & 7;
  uVar4 = (**(int (***)())(*param_3 + 4))(param_3);
  *(unsigned short *)(param_1 + 0x14) = uVar4;
  *(int *)(param_1 + 0x1c) = param_4;
  dVar6 = (double)*(float *)(param_4 + 0xc);
  dVar5 = (double)*(float *)(param_4 + 8);
  iVar3 = fn_82F65350();
  fVar2 = lbl_82006848;
  fVar1 = (float)((double)((float)(__int64)iVar3 * lbl_82015CF0) * (double)(float)(dVar6 - dVar5) +
                 dVar5);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + fVar1;
  *(float *)(param_1 + 0x18) = fVar1;
  if (fVar1 < fVar2) {
    *(float *)(param_1 + 0x18) = fVar2;
  }
  return 1;
}

