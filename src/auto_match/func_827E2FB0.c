extern int fn_822315A0();
extern int fn_827E27F0();
extern unsigned int lbl_8201D2F0;


void fn_827E2FB0(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201D2F0;
  puStack00000014 = param_1;
  if (param_1[0xf] != 0) {
    fn_822315A0();
  }
  fn_827E27F0(param_1);
  return;
}

