extern unsigned int lbl_82005730;
extern unsigned int lbl_82015408;


__int64 fn_82809560(unsigned int param_1)

{
  unsigned int uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)param_1 * lbl_82005730;
  dVar2 = (double)(float)(0xbe6f0000U - (int)(float)param_1 >> 1);
  dVar2 = dVar2 * lbl_82015408 - dVar2 * dVar2 * dVar2 * dVar3;
  if (0x18b03 < param_1) {
    dVar2 = dVar2 * lbl_82015408 - dVar2 * dVar2 * dVar2 * dVar3;
  }
  uVar1 = (unsigned int)((double)param_1 * dVar2 + lbl_82005730);
  return (__int64)((int)(param_1 - uVar1 * uVar1) >> 0x1f) + (unsigned __int64)uVar1;
}

