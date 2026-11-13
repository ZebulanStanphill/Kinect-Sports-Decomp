extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c;


void fn_82A4C458(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  double dVar4;
  unsigned int uStack_c;
  
  fVar3 = lbl_82002AE0;
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  *(unsigned int *)(param_1 + 0x44) = uVar1 * param_2;
  if (*(float *)(param_1 + 0x38) == fVar3) {
    *(unsigned int *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x34) = lbl_821AAD20;
    uStack_c = param_2;
  }
  else {
    dVar4 = (double)((float)param_2 * *(float *)(param_1 + 0x38));
    if ((*(float *)(param_1 + 0x5c) == fVar3) && (*(float *)(param_1 + 0x60) == fVar3)) {
      uStack_c = (unsigned int)(__int64)(dVar4 + lbl_82005730);
    }
    else {
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar2 = *(unsigned int *)(param_1 + 0x4c);
      trapWord(5,(unsigned __int64)uVar1 &
                 ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),0xffff);
      uStack_c = (unsigned int)(__int64)((double)*(float *)(param_1 + 0x34) + dVar4);
      uStack_c = uStack_c + (int)uVar2 / (int)uVar1 + 1;
    }
  }
  *(unsigned int *)(param_1 + 0x40) = uVar1 * uStack_c;
  return;
}

