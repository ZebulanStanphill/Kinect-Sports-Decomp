extern int fn_822315A0();
extern int fn_827E27F0();
extern unsigned int lbl_8201D200;


void fn_827E2BC8(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201D200;
  puStack00000014 = param_1;
  if (param_1[0x11] != 0) {
    fn_822315A0();
  }
  fn_827E27F0(param_1);
  return;
}

