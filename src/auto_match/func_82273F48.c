extern int fn_82279AF0();
extern int fn_822848B8();
extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821A7FEC;


unsigned int * fn_82273F48(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_821A7FEC;
  if (param_1[0x58] != 0) {
    fn_822848B8(param_1[0x58]);
    param_1[0x58] = 0;
  }
  fn_82359C18(param_1 + 0x52);
  fn_82279AF0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

