extern int fn_8265C990();
extern int fn_82A5DD00();
extern unsigned int lbl_820E870C;


unsigned int * fn_82BD9440(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820E870C;
  fn_82A5DD00();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x608a2002);
  }
  return param_1;
}

