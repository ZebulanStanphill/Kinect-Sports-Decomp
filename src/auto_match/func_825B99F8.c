extern unsigned int lbl_821CA460;
extern unsigned int uStack_c;


double fn_825B99F8(double param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned int uStack_c;
  
  uVar1 = *param_2;
  uStack_c = (unsigned int)(__int64)
                   ((float)(param_1 / (double)*(float *)(param_2 + 2)) *
                   ((float)(__int64)(int)(unsigned int)uVar1 - lbl_821CA460));
  if (uVar1 <= uStack_c) {
    uStack_c = uVar1 - 1;
  }
  return (double)*(float *)(uStack_c * 4 + *(int *)(param_2 + 4));
}

