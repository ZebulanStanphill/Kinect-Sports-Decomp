extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800C70(double param_1,float *param_2)

{
  unsigned short uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  short sStack_a;
  
  fVar2 = param_2[4];
  param_2[1] = *param_2;
  *param_2 = (float)param_1;
  *(unsigned short *)((int)param_2 + 0x16) = 0;
  if (fVar2 == 0.0) {
    if (param_1 < (double)lbl_82002AE0) {
      if ((double)lbl_821AAD20 <= param_1) {
        return;
      }
      sStack_a = (short)(int)param_1;
      sStack_a = sStack_a + -1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    else {
      sStack_a = (short)(int)param_1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    dVar3 = (double)(float)(param_1 - (double)(__int64)sStack_a);
  }
  else if (fVar2 == 1.4013e-45) {
    dVar3 = (double)lbl_82002AE0;
    if (param_1 <= dVar3) {
      dVar3 = (double)lbl_821AAD20;
      if (dVar3 <= param_1) {
        return;
      }
      sStack_a = (short)(int)param_1;
      sStack_a = sStack_a + -1;
    }
    else {
      sStack_a = (short)(int)param_1;
    }
    *(short *)((int)param_2 + 0x16) = sStack_a;
  }
  else {
    if (2 < (unsigned int)fVar2) {
      return;
    }
    dVar3 = (double)lbl_821AAD20;
    dVar4 = (double)lbl_82002AE0;
    if ((dVar3 < param_1) && (param_1 < dVar4)) {
      return;
    }
    sStack_a = (short)(int)param_1;
    *(short *)((int)param_2 + 0x16) = sStack_a;
    if (param_1 <= dVar3) {
      *(short *)((int)param_2 + 0x16) = sStack_a + -1;
    }
    uVar1 = *(unsigned short *)((int)param_2 + 0x16);
    fVar2 = (float)(param_1 - (double)(__int64)(short)uVar1);
    *param_2 = fVar2;
    if ((__int64)(short)uVar1 ==
        ((__int64)((int)(short)uVar1 >> 1) + (unsigned __int64)((short)uVar1 < 0 && (uVar1 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    dVar3 = (double)(float)(dVar4 - (double)fVar2);
    param_2[3] = -param_2[3];
  }
  *param_2 = (float)dVar3;
  return;
}

