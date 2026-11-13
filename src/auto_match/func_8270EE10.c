extern int fn_8270EDB0();
extern int memset();
extern unsigned int lbl_8200DBF8;


void fn_8270EE10(unsigned int *param_1)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DBF8;
  fn_8270EDB0(param_1 + 3);
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x196,0,0x1d);
}

