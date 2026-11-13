extern unsigned int lbl_82195590;
extern float lbl_821955A0;


void fn_826214A8(double param_1,unsigned int *param_2,unsigned __int64 param_3,int param_4)

{
  if (param_2[9] == 0) {
    param_2[1] = (float)param_1;
  }
  else {
    param_2[1] = (float)(((double)(float)(param_1 * (double)lbl_82195590) -
                         (double)(__int64)(param_1 * (double)lbl_82195590)) * lbl_821955A0);
  }
  if (param_4 == 0) {
    return;
  }
  *param_2 = param_2[1];
  return;
}

