extern int fn_8267BE38();
extern int fn_82757CE8();
extern unsigned int lbl_8200BD80;


unsigned int * fn_82758330(unsigned int *param_1,unsigned int param_2)

{
  fn_82757CE8(param_1 + 0xe);
  fn_8267BE38(param_1[0xe]);
  *param_1 = &lbl_8200BD80;
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

