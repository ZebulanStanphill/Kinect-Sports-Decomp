extern int fn_82230300();
extern int fn_822315A0();
extern unsigned int lbl_821AE394;
extern unsigned int lbl_821AF1C8;


void fn_822EB548(unsigned int *param_1)

{
  *param_1 = &lbl_821AE394;
  fn_82230300(param_1 + 10,1,0);
  if (param_1[7] != 0) {
    fn_822315A0(param_1[7]);
  }
  *param_1 = &lbl_821AF1C8;
  return;
}

