extern int fn_83022530();


void fn_83022908(int *param_1,float *param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar3 = 0;
  uVar2 = 0;
  for (fVar1 = param_2[1]; pfVar5 = param_2, fVar1 != 0.0;
      fVar1 = (float)((int)fVar1 - 1U & (unsigned int)fVar1)) {
    uVar2 = uVar2 + 1;
  }
  do {
    dVar12 = (double)pfVar5[0x15];
    dVar9 = (double)pfVar5[0x19];
    dVar10 = (double)pfVar5[0x16];
    dVar8 = (double)pfVar5[0x17];
    dVar7 = (double)pfVar5[0x18];
    fVar1 = (float)param_1[3];
    lVar4 = ((__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 3) * (__int64)(int)uVar3 & 0x3fffffffU) * 4
            + (unsigned __int64)(unsigned int)*param_2;
    dVar11 = (double)((float)((double)pfVar5[0xd] - dVar12) * fVar1);
    dVar6 = (double)((float)((double)pfVar5[0x11] - dVar9) * fVar1);
    dVar15 = (double)((float)((double)pfVar5[0xe] - dVar10) * fVar1);
    dVar14 = (double)((float)((double)pfVar5[0xf] - dVar8) * fVar1);
    dVar13 = (double)((float)((double)pfVar5[0x10] - dVar7) * fVar1);
    fn_83022530((double)pfVar5[0x14],
                      (double)((float)((double)pfVar5[0xc] - (double)pfVar5[0x14]) * fVar1),dVar6,
                      param_1,lVar4,*(unsigned int *)*param_1);
    fn_83022530(dVar12,dVar11,param_1,lVar4,
                      (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 4 +
                      (unsigned __int64)*(unsigned int *)*param_1);
    fn_83022530(dVar10,dVar15,param_1,lVar4,
                      (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 8 +
                      (unsigned __int64)*(unsigned int *)*param_1);
    fn_83022530(dVar9,dVar6,param_1,lVar4,
                      (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0x14 +
                      (unsigned __int64)*(unsigned int *)*param_1);
    fn_83022530(dVar8,dVar14,param_1,lVar4,
                      (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0xc +
                      (unsigned __int64)*(unsigned int *)*param_1);
    fn_83022530(dVar7,dVar13,param_1,lVar4,
                      (unsigned __int64)*(unsigned short *)((unsigned int *)*param_1 + 3) * 0x10 +
                      (unsigned __int64)*(unsigned int *)*param_1);
    uVar3 = uVar3 + 1;
    pfVar5 = pfVar5 + 0x10;
  } while (uVar3 < uVar2);
  return;
}

