extern int fn_8267BE38();
extern int fn_82764140();
extern unsigned int lbl_8200BD80;


unsigned int * fn_826D8140(unsigned int *param_1,unsigned int param_2)

{
  fn_82764140(param_1 + 4);
  *param_1 = &lbl_8200BD80;
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

