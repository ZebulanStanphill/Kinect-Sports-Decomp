extern int fn_82E569B0();
extern int fn_82EEDEA0();
extern unsigned int lbl_82154D80;
extern unsigned int lbl_82160240;
extern unsigned int lbl_82160294;


void fn_82EEE500(unsigned int *param_1)

{
  *param_1 = &lbl_82160294;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82160240;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x78;
  fn_82EEDEA0();
  param_1[2] = &lbl_82154D80;
  if (param_1[3] == 0) {
    fn_82E569B0(param_1 + 2,0);
  }
  return;
}

