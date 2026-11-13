extern int fn_82B80258();
extern int fn_82F6DF48();
extern unsigned int lbl_82005710;


double fn_82B80EE0(int param_1,int param_2,unsigned __int64 param_3)

{
  double dVar1;
  
  dVar1 = (double)*(float *)((param_2 + 0xb) * 4 + param_1);
  if ((param_3 & 1) != 0) {
    dVar1 = (double)fn_82B80258();
  }
  if ((param_3 & 2) != 0) {
    dVar1 = (double)fn_82F6DF48(dVar1,lbl_82005710);
    dVar1 = (double)(float)dVar1;
  }
  if ((param_3 & 4) != 0) {
    dVar1 = (double)-(float)dVar1;
  }
  return dVar1;
}

