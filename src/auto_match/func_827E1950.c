extern int fn_822315A0();
extern int fn_827E1868();
extern int fn_827E27F0();
extern unsigned int lbl_8201D0B8;


void fn_827E1950(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201D0B8;
  puStack00000014 = param_1;
  fn_827E1868();
  if (param_1[8] != 0) {
    fn_822315A0();
  }
  fn_827E27F0(param_1);
  return;
}

