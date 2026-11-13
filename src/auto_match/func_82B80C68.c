extern int fn_82B80258();
extern int fn_82F6DF48();
extern unsigned int lbl_82005710;


double fn_82B80C68(double param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  
  if ((param_3 & 1) != 0) {
    param_1 = (double)fn_82B80258();
  }
  if ((param_3 & 2) != 0) {
    dVar1 = (double)fn_82F6DF48(param_1,lbl_82005710);
    param_1 = (double)(float)dVar1;
  }
  if ((param_3 & 4) != 0) {
    param_1 = (double)-(float)param_1;
  }
  return param_1;
}

