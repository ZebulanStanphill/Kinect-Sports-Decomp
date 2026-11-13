extern int fn_82F643F8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217EB68;
extern unsigned int lbl_821AAD20;


void fn_8306EC10(double param_1)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if ((param_1 < dVar1) || (dVar1 = (double)lbl_82002AE0, dVar1 < param_1)) {
    param_1 = dVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8((double)(float)(param_1 * (double)lbl_8217EB68));
}

