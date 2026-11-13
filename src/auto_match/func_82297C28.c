extern int fn_8223DA98();
extern int fn_82F62528();
extern unsigned int lbl_821AA92C;


void fn_82297C28(unsigned int *param_1)

{
  *param_1 = &lbl_821AA92C;
  if (param_1[0xe] != 0) {
    fn_8223DA98(param_1[0xe],1);
  }
  fn_82F62528(param_1 + 1);
  return;
}

