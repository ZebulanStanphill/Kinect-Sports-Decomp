extern int fn_830615A8();
extern int fn_8306AB80();
extern unsigned int lbl_8217E6BC;
extern unsigned int lbl_8217E8A8;
extern unsigned int lbl_831BCA54;


void fn_8305F258(unsigned int *param_1)

{
  *param_1 = &lbl_8217E6BC;
  if (param_1[10] != 0) {
    fn_830615A8(param_1[10],param_1);
  }
  if (param_1[4] != 0) {
    (*(int (**)())(*(int *)lbl_831BCA54 + 4))(lbl_831BCA54,param_1[4]);
  }
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  return;
}

