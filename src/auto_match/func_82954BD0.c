extern int fn_82965430();
extern int memset();
extern unsigned int lbl_82037BF8;


void fn_82954BD0(unsigned int *param_1)

{
  fn_82965430();
  *param_1 = &lbl_82037BF8;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x6e,0,0x1c);
}

