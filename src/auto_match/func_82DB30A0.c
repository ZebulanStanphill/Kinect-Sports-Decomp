extern int fn_8265CA20();
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134B98;
extern unsigned int lbl_82134BA4;
extern unsigned int lbl_82134BB0;


unsigned int * fn_82DB30A0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = param_1 + -3;
  *param_1 = &lbl_82134BB0;
  *puVar1 = &lbl_82134B98;
  param_1[-1] = &lbl_821347BC;
  param_1[-2] = &lbl_82134BA4;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(puVar1);
  }
  return puVar1;
}

