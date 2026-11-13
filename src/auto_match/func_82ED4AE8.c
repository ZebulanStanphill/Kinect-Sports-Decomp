extern int fn_8265C990();
extern int fn_82ED49B0();
extern unsigned int lbl_8215F980;
extern unsigned int lbl_83248EC4;


void fn_82ED4AE8(unsigned int *param_1)

{
  *param_1 = &lbl_8215F980;
  if (param_1[0xf] != 0) {
    fn_8265C990(param_1[0xf],0x248c8000);
    param_1[0xf] = 0;
  }
  if (lbl_83248EC4 != 0) {
    fn_8265C990(lbl_83248EC4,0x248c8000);
    lbl_83248EC4 = 0;
  }
  fn_82ED49B0(param_1);
  return;
}

