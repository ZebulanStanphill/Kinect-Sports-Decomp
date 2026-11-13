extern int fn_82B80258();
extern int fn_82F6DF48();
extern int fn_82F6DF80();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82006268;


double fn_82B80CD0(double param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  if ((param_4 & 1) != 0) {
    param_1 = (double)fn_82B80258((double)(float)param_1);
  }
  if ((param_4 & 2) != 0) {
    param_1 = (double)fn_82F6DF48(param_1,lbl_82005710);
  }
  if ((param_4 & 4) != 0) {
    if (param_3 == 2) {
      param_1 = lbl_82006268 - param_1;
    }
    else {
      param_1 = (double)fn_82F6DF80();
    }
  }
  return param_1;
}

