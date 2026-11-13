extern int fn_8265C990();


void fn_82ED4140(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_8265C990(*param_1,0x248c8000);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265C990(param_1[1],0x248c8000);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    fn_8265C990(param_1[3],0x248c8000);
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    fn_8265C990(param_1[2],0x248c8000);
    param_1[2] = 0;
  }
  return;
}

