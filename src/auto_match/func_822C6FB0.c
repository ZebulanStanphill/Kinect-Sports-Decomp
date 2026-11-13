extern int fn_82539560();
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_821958E4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_822C6FB0(double param_1,double param_2,double param_3)

{
  param_1 = ABS(param_1);
  if ((param_2 < param_1) && ((double)lbl_821958E4 < param_1)) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(param_1,(double)ltcg_pool_0_0f,(double)(float)(param_3 * (double)lbl_8218E2B0),
                 (double)ltcg_pool_0_0f,(double)lbl_821CA460);
  }
  return (double)ltcg_pool_0_0f;
}

