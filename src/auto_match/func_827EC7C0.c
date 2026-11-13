extern unsigned int *auStack_30;
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827EC7C0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  double dVar1;
  double dVar2;
  unsigned char auStack_30 [1];
  
  fn_82810328(param_2,param_3,auStack_30);
  dVar1 = (double)fn_82810280(auStack_30,param_4);
  dVar1 = (double)(float)(dVar1 * param_1);
  if (((double)lbl_821AAD20 < dVar1) &&
     (dVar2 = (double)fn_82810308(auStack_30), dVar2 <= (double)(float)(dVar1 * dVar1))) {
    return 1;
  }
  return 0;
}

