typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800E60(double param_1,float *param_2)

{
  double dVar1;
  float fVar2;
  unsigned short uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  short sStack_a;
  
  dVar1 = (double)param_2[3] * param_1 + (double)*param_2;
  fVar2 = (float)dVar1;
  fVar4 = param_2[4];
  param_2[1] = *param_2;
  *param_2 = fVar2;
  *(unsigned short *)((int)param_2 + 0x16) = 0;
  fVar5 = lbl_82002AE0;
  if (fVar4 == 0.0) {
    if (fVar2 < lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar2) {
        return;
      }
      sStack_a = (short)(int)dVar1;
      sStack_a = sStack_a + -1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    else {
      sStack_a = (short)(int)dVar1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    fVar2 = fVar2 - (float)(__int64)sStack_a;
  }
  else if (fVar4 == 1.4013e-45) {
    if (fVar2 <= lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar2) {
        return;
      }
      sStack_a = (short)(int)dVar1;
      sStack_a = sStack_a + -1;
      fVar2 = lbl_821AAD20;
    }
    else {
      sStack_a = (short)(int)dVar1;
      fVar2 = lbl_82002AE0;
    }
    *(short *)((int)param_2 + 0x16) = sStack_a;
  }
  else {
    if (2 < (unsigned int)fVar4) {
      return;
    }
    if ((lbl_821AAD20 < fVar2) && (fVar2 < lbl_82002AE0)) {
      return;
    }
    sStack_a = (short)(int)dVar1;
    bVar6 = fVar2 <= lbl_821AAD20;
    *(short *)((int)param_2 + 0x16) = sStack_a;
    if (bVar6) {
      *(short *)((int)param_2 + 0x16) = sStack_a + -1;
    }
    uVar3 = *(unsigned short *)((int)param_2 + 0x16);
    fVar2 = fVar2 - (float)(__int64)(short)uVar3;
    *param_2 = fVar2;
    if ((__int64)(short)uVar3 ==
        ((__int64)((int)(short)uVar3 >> 1) + (unsigned __int64)((short)uVar3 < 0 && (uVar3 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    fVar2 = fVar5 - fVar2;
    param_2[3] = -param_2[3];
  }
  *param_2 = fVar2;
  return;
}

