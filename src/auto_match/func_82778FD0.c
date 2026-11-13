extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_820153F0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1;
extern unsigned int uStack_9;


void fn_82778FD0(double param_1,double param_2,double param_3,int param_4)

{
  unsigned int uVar1;
  unsigned char uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned char uStack_9;
  unsigned char uStack_1;
  
  dVar7 = (double)lbl_821AAD20;
  dVar4 = param_3;
  dVar3 = param_3;
  dVar8 = param_3;
  if (param_2 != dVar7) {
    dVar3 = (double)lbl_82002AE0;
    if (param_1 != dVar3) {
      dVar7 = (double)(float)(param_1 * lbl_820153F0);
    }
    uVar1 = (unsigned int)dVar7;
    dVar6 = (double)(float)((double)(float)(dVar3 - param_2) * param_3);
    dVar5 = (double)(float)(-(double)(float)((double)(float)(dVar7 - (double)(__int64)(int)uVar1) *
                                             param_2 - dVar3) * param_3);
    dVar7 = (double)(float)(-(double)(float)((double)(float)(dVar3 - (double)(float)(dVar7 - (double
                                                  )(__int64)(int)uVar1)) * param_2 - dVar3) *
                           param_3);
    dVar3 = dVar6;
    dVar8 = dVar7;
    if ((((uVar1 != 0) && (dVar4 = dVar5, dVar8 = param_3, uVar1 != 1)) &&
        (dVar4 = dVar6, dVar3 = dVar7, 2 < uVar1)) &&
       ((dVar3 = param_3, dVar8 = dVar5, uVar1 != 3 && (dVar4 = dVar7, dVar8 = dVar6, 4 < uVar1))))
    {
      dVar4 = param_3;
      dVar3 = dVar5;
    }
  }
  dVar7 = (double)lbl_82005CCC;
  uStack_1 = (unsigned char)(__int64)(dVar3 * dVar7);
  uVar2 = uStack_1;
  uStack_9 = (unsigned char)(__int64)(dVar8 * dVar7);
  uStack_1 = (unsigned char)(__int64)(dVar4 * dVar7);
  *(unsigned char *)(param_4 + 3) = uVar2;
  *(unsigned char *)(param_4 + 2) = uStack_9;
  *(unsigned char *)(param_4 + 1) = uStack_1;
  return;
}

