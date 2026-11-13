extern int fn_82809558();
extern int fn_82809A88();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021540;


void fn_8284DD18(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)fn_82809A88((double)lbl_82021540,(double)(float)(param_2 - (double)lbl_82002AE0))
  ;
  fn_82809558((double)(float)(param_1 / (double)(float)(dVar1 * param_3)));
  return;
}

