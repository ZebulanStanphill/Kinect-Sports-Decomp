extern unsigned int lbl_821CA460;


int fn_825206B8(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return (int)((float)(__int64)(param_3 - param_2) *
               ((float)(uVar1 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)(__int64)param_2);
}

