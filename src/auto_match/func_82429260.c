extern int XMemSet();
extern unsigned int lbl_821B9BC8;


void fn_82429260(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[1] = 0;
  *param_1 = &lbl_821B9BC8;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 4,0,0x40);
}

