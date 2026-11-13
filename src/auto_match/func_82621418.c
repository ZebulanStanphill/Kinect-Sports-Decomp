extern unsigned int lbl_82195590;
extern float lbl_821955A0;


void fn_82621418(double param_1,int param_2)

{
  if (*(int *)(param_2 + 0x24) != 0) {
    *(float *)(param_2 + 0xc) =
         (float)(((double)(float)(param_1 * (double)lbl_82195590) -
                 (double)(__int64)(param_1 * (double)lbl_82195590)) * lbl_821955A0);
    return;
  }
  *(float *)(param_2 + 0xc) = (float)param_1;
  return;
}

