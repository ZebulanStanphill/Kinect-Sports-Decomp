extern int fn_8265C990();
extern unsigned int lbl_8202971C;


unsigned int * fn_828F99F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8202971C;
  fn_8265C990(param_1[3],0x24810000);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x24810000);
  }
  return param_1;
}

