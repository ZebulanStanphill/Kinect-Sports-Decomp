extern int fn_82C563B0();


void fn_82CAD2B0(int param_1,unsigned int *param_2)

{
  if (*param_2 != 0) {
    fn_82C563B0(*(unsigned int *)(param_1 + 0x6070) + 8, *param_2);
    *param_2 = 0;
  }
  return;
}

