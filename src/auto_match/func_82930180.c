extern int fn_8265C990();


void fn_82930180(unsigned int *param_1)

{
  int *piVar1;
  
  while (*param_1 != 0) {
    piVar1 = (int *)*param_1;
    *param_1 = *piVar1;
    fn_8265C990(piVar1,0x24810000);
  }
  return;
}

