extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_824656C8(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (((param_1 & 0xffffffff) <= (param_3 & 0xffffffff)) && ((unsigned int)param_3 < param_2)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = ((param_2 - param_1 & 0xffffffff) >> 0x1f) - 1 & param_2 - param_1;
    iVar1 = (int)uVar2;
    param_3 = ((unsigned int)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                           (float)(__int64)(iVar1 + -1) + lbl_821CA460) - param_1) + param_3;
    return (param_3 -
           (__int64)(int)((param_3 & 0xffffffff) / (uVar2 & 0xffffffff)) * (__int64)iVar1) +
           param_1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (unsigned __int64)
         (unsigned int)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(__int64)(int)(param_2 - (int)param_1) + (float)(__int64)(int)param_1)
  ;
}

