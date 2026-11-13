extern int fn_8265C990();
extern int fn_82E4D860();
extern unsigned int lbl_82153C64;


unsigned int * fn_82E4E160(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82153C64;
  fn_82E4D860();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x248c8000);
  }
  return param_1;
}

