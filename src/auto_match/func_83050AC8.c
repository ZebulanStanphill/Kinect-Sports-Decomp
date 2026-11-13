extern int fn_82FA5190();
extern int fn_8304FF88();
extern int fn_83055C98();
extern unsigned int lbl_8217DDF0;
extern unsigned int lbl_831BC978;


void fn_83050AC8(unsigned int *param_1)

{
  *param_1 = &lbl_8217DDF0;
  if ((param_1[0x1d] & 0x4000000) != 0) {
    (*(int (**)())(**(int **)(param_1[0x18] + 0x80) + 4))(*(int **)(param_1[0x18] + 0x80),param_1 + 6)
    ;
  }
  fn_8304FF88(param_1);
  if (param_1[0x19] != 0) {
    fn_82FA5190(lbl_831BC978,param_1[0x19]);
  }
  fn_83055C98(param_1);
  return;
}

