extern int fn_82594590();
extern int fn_82809950();


void fn_825946B8(int param_1,unsigned int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  
  iVar3 = 0;
  lVar4 = 0;
  pfVar5 = (float *)(param_1 + 0xc);
  do {
    dVar6 = (double)fn_82809950((double)pfVar5[-1]);
    dVar7 = (double)(float)(dVar6 * (double)*pfVar5 + (double)pfVar5[1]);
    dVar6 = (double)fn_82594590(param_1,pfVar5 + -3,
                                    (unsigned __int64)*(unsigned int *)(param_1 + 0x28) + lVar4 + 4,
                                    (param_2 & 0xff) * 0x30 + -0x7cd93d30);
    iVar2 = ((param_2 & 0xff) * 0xc + iVar3) * 4;
    fVar1 = (float)(dVar6 * (double)(float)((double)pfVar5[-3] * dVar7));
    if (*(float *)(iVar2 + -0x7cd93d18) < fVar1) {
      *(float *)(iVar2 + -0x7cd93d18) = fVar1;
    }
    lVar4 = lVar4 + 0x6c;
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 5;
  } while ((int)lVar4 < 0xd8);
  return;
}

