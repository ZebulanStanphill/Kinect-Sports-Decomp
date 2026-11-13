extern int fn_8265C990();
extern unsigned int lbl_8214C340;


unsigned int * fn_82E24D48(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8214C340;
  fn_8265C990(param_1[4],0x208c804d);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c804d);
  }
  return param_1;
}

