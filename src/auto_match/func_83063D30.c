extern int fn_83061548();
extern int fn_83061F30();
extern int fn_83063A88();
extern unsigned int lbl_8217E88C;


void fn_83063D30(unsigned int *param_1)

{
  *param_1 = &lbl_8217E88C;
  fn_83063A88();
  fn_83061548(param_1 + 0xd,1);
  fn_83061548(param_1 + 0x19,0);
  fn_83061548(param_1 + 0x25,0);
  fn_83061F30(param_1 + 0x25);
  fn_83061F30(param_1 + 0x19);
  fn_83061F30(param_1 + 0xd);
  return;
}

