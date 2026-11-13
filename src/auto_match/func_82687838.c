extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_82687628();
extern int fn_82768F38();
extern unsigned int lbl_82005B5C;


void fn_82687838(unsigned int *param_1)

{
  *param_1 = &lbl_82005B5C;
  if (param_1[2] != 0) {
    fn_82687628(param_1[2]);
    fn_8267C4F0(param_1[2]);
  }
  fn_82768F38(param_1 + 3);
  fn_8267C488(param_1);
  return;
}

