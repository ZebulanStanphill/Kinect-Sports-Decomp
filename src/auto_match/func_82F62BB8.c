extern int fn_82F62870();
extern int free();
extern unsigned int lbl_82020F28;
extern unsigned int lbl_82167F10;


void fn_82F62BB8(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_82167F10;
  puStack00000014 = param_1;
  fn_82F62870();
  if (param_1[6] != 0) {
    free();
  }
  param_1[6] = 0;
  *param_1 = &lbl_82020F28;
  return;
}

