extern int fn_8265C990();
extern int fn_82A29A38();


void fn_82AA06F0(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    fn_82A29A38();
  }
  else if (param_1[2] != 0) {
    fn_8265C990(*param_1,0x24870000);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

