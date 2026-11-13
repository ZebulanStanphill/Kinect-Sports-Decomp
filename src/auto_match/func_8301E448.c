extern int fn_82F65350();
extern unsigned int lbl_82015CF0;


double fn_8301E448(double param_1,double param_2)

{
  int iVar1;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  iVar1 = fn_82F65350();
  return (double)(float)((double)((float)(__int64)iVar1 * lbl_82015CF0) *
                         (double)(float)(param_2 - param_1) + param_1);
}

