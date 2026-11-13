extern int fn_82587C30();
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CA460;


double fn_82621800(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821CA460;
  dVar1 = (double)fn_82587C30((double)(float)(dVar2 - param_4),
                               (double)(float)(param_3 * (double)lbl_821955AC));
  return (double)(float)((double)(float)(dVar2 - dVar1) * (double)(float)(param_2 - param_1) +
                        param_1);
}

