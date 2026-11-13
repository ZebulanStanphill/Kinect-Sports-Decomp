extern int fn_82529320();
extern int fn_82545810();
extern int fn_825D50C0();
extern unsigned int lbl_821CB8A4;


void fn_8262ACD0(unsigned int *param_1)

{
  unsigned int iVar1;
  
  *param_1 = &lbl_821CB8A4;
  if (param_1[0x14] != 0) {
    fn_82545810(param_1 + 0x14);
  }
  iVar1 = param_1[0x3832];
  if ((iVar1 != 0) && (((int *)param_1)[0x3833] != 0)) {
    fn_82529320(iVar1,0);
    param_1[0x3832] = 0;
  }
  fn_825D50C0(param_1);
  return;
}

