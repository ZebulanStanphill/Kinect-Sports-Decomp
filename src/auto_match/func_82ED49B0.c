extern int fn_8265C990();
extern int fn_82ED4510();
extern unsigned int lbl_8215F970;


void fn_82ED49B0(unsigned int *param_1)

{
  *param_1 = &lbl_8215F970;
  if (param_1[6] != 0) {
    fn_82ED4510(param_1[6],3);
    param_1[6] = 0;
  }
  if (param_1[8] != 0) {
    fn_8265C990(param_1[8],0x248c8000);
    param_1[8] = 0;
  }
  return;
}

