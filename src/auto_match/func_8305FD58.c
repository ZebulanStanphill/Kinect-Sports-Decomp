extern int fn_82F68918();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002C5C;


double fn_8305FD58(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)(param_1 / (double)*param_2);
  dVar1 = (double)fn_82F68918(dVar2);
  dVar1 = (double)(float)dVar1;
  if (lbl_82002C5C <= (float)(dVar2 - dVar1)) {
    dVar1 = (double)fn_82F6B2A8(dVar2);
    dVar1 = (double)(float)dVar1;
  }
  return dVar1;
}

