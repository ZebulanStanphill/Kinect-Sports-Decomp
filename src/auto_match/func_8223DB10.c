extern int fn_8223DA98();
extern int fn_82F62528();
extern unsigned int lbl_8202115C;


void fn_8223DB10(unsigned int *param_1)

{
  *param_1 = &lbl_8202115C;
  if (param_1[0xe] != 0) {
    fn_8223DA98(param_1[0xe],1);
  }
  fn_82F62528(param_1 + 1);
  return;
}

