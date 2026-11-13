extern int fn_8265C990();
extern int fn_8306D168();
extern unsigned int lbl_8217EB38;
extern unsigned int lbl_8217EB64;
extern unsigned int lbl_821B9BC8;


void fn_8306CF50(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)(unsigned int)param_1[0x6c8];
  *param_1 = &lbl_8217EB64;
  param_1[2] = &lbl_8217EB38;
  if (uVar1 != 0) {
    fn_8306D168(uVar1 + 0x7110);
    fn_8265C990(uVar1,0x20980000);
    param_1[0x6c8] = 0;
  }
  *param_1 = &lbl_821B9BC8;
  return;
}

