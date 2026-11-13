extern int fn_82F643F8();
extern int fn_82F6A534();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821878A8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323C860;
extern unsigned int lbl_8323C864;


void fn_8308A0E0(unsigned __int64 param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82F6A534();
  dVar2 = (double)(float)((double)lbl_821878A8 * 0.0 - (double)lbl_8201DD74);
  if ((double)lbl_821AAD20 <= dVar2) {
                    /* WARNING: Subroutine does not return */
    fn_82F643F8(dVar2);
  }
  lbl_8323C860 = lbl_82002AE0;
  lbl_8323C864 = lbl_821AAD20;
  dVar1 = (double)(float)((double)(float)((double)lbl_8201DD74 - ABS(dVar2)) - dVar1);
  if ((dVar1 <= param_2) && (param_2 = dVar1, dVar1 < 0.0)) {
    param_2 = (double)lbl_821AAD20;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8(param_2);
}

