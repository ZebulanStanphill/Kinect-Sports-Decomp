extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_82686488();
extern int fn_82768D80();
extern int fn_82768F38();
extern int fn_8276B138();
extern unsigned int lbl_82014CD0;
extern unsigned int lbl_82015068;


void fn_8276E010(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = param_1 + 8;
  *param_1 = &lbl_82015068;
  fn_8276B138(puVar1,0);
  if (param_1[6] != 0) {
    fn_8267BE38(param_1[6]);
    param_1[6] = 0;
  }
  fn_82686488(param_1 + 0xf);
  fn_8267BE38(param_1[0xc]);
  fn_82768F38(param_1 + 0xb);
  fn_82768D80(*puVar1,puVar1[1]);
  fn_8267BE38(*puVar1);
  if (param_1[7] != 0) {
    fn_8267C498(param_1[7]);
  }
  *param_1 = &lbl_82014CD0;
  fn_8267C488(param_1);
  return;
}

