extern int fn_8251FA58();
extern int fn_827F5F50();
extern int fn_827F6010();
extern unsigned int lbl_821C52A4;


unsigned int * fn_8255FA10(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C52A4;
  if (param_1[0x77] != 0) {
    fn_8251FA58(param_1[0x78]);
    param_1[0x77] = 0;
  }
  fn_827F6010(param_1);
  if ((param_2 & 1) != 0) {
    fn_827F5F50(param_1);
  }
  return param_1;
}

