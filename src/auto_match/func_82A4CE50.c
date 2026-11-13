extern int fn_82A3FE48();
extern int fn_82A5F3B8();
extern unsigned int lbl_82089E70;


extern char lbl_8315DDB8[];
extern char lbl_83219D50[];
unsigned int * fn_82A4CE50(unsigned int *param_1)

{
  fn_82A5F3B8(param_1,lbl_8315DDB8);
  param_1[8] = 0;
  *param_1 = &lbl_82089E70;
  param_1[9] = 0;
  param_1[10] = 0;
  fn_82A3FE48(lbl_83219D50);
  return param_1;
}

