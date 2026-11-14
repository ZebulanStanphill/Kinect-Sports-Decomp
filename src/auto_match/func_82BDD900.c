extern int sin();
extern unsigned int lbl_82005730;
extern unsigned int lbl_820E8840;
extern unsigned int lbl_83224480;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BDD900(void)

{
  lbl_83224480 = 1;
                    /* WARNING: Subroutine does not return */
  sin((double)(float)((lbl_82005730 + 0.0) * lbl_820E8840));
}

