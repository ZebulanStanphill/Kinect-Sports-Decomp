extern int fn_82F65E20();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82054148;


double fn_829C7D80(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82F65E20((double)((float)(__int64)param_1 * lbl_82054148));
  dVar2 = (double)(float)dVar1;
  dVar1 = (double)fn_82F65E20(lbl_82002C40);
  return (double)(float)(dVar2 / (double)(float)dVar1);
}

