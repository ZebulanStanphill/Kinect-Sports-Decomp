extern int fn_82467200();
extern int fn_82469800();
extern int fn_8265CA20();
extern unsigned int lbl_82195598;


void fn_82460540(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_8265CA20();
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  iVar5 = fn_82467200(*(unsigned int *)(param_1 + 0x34));
  *(int *)(param_1 + 0x28) = iVar5;
  dVar4 = lbl_82195598;
  fVar1 = *(float *)(iVar5 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x38);
  fVar2 = *(float *)(iVar5 + 0x40);
  dVar6 = (double)fVar2 - lbl_82195598;
  dVar7 = (double)*(float *)(iVar5 + 0x48) - lbl_82195598;
  *(float *)(iVar3 + 0x470) = fVar1;
  *(float *)(iVar3 + 0x474) = fVar2;
  fn_82469800(*(unsigned int *)(iVar3 + 0x3fc),
                    (__int64)(float)(__int64)((double)fVar1 - dVar4) & 0xffffffff,
                    (__int64)(float)(__int64)dVar6 & 0xffffffff,
                    (__int64)(double)(__int64)dVar7 & 0xffffffff);
  return;
}

