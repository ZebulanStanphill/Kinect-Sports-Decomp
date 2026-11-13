extern unsigned int lbl_82005718;
extern unsigned int lbl_82014C48;
extern unsigned int lbl_821AAD20;


double fn_82766A48(int *param_1,unsigned int param_2)

{
  double dVar1;
  
  if (param_2 == 0xffffffff) {
    dVar1 = (double)lbl_82014C48;
  }
  else {
    if ((param_2 < (unsigned int)param_1[0xd]) &&
       (dVar1 = (double)((float)*(unsigned short *)(param_1[0xc] + param_2 * 0xc + 8) * lbl_82005718),
       dVar1 != (double)lbl_821AAD20)) {
      return dVar1;
    }
    dVar1 = (double)(**(int (***)())(*param_1 + 0x20))();
  }
  return dVar1;
}

