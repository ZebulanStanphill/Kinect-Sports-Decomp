extern int fn_82F643F8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005730;
extern unsigned int lbl_820E88E0;


/* WARNING: Removing unreachable block (ram,0x82be1118) */
/* WARNING: Removing unreachable block (ram,0x82be112c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BE1050(void)

{
  int in_r6;
  double dVar1;
  
  fn_82F6A548();
  dVar1 = lbl_820E88E0 / (double)(__int64)(in_r6 << 2);
  if (0 < in_r6) {
                    /* WARNING: Subroutine does not return */
    fn_82F643F8((lbl_82005730 + 0.0) * dVar1);
  }
  if (in_r6 < 1) {
    fn_82F6A594();
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8((lbl_82005730 + 0.0) * dVar1);
}

