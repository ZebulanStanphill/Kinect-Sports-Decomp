extern int fn_8305F258();
extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;


void fn_830686B0(unsigned int *param_1)

{
  fn_8305F258(param_1 + 4);
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  return;
}

