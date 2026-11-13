extern int fn_8265C990();


int fn_828F59D0(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_828F59D0(*(int *)(param_1 + 0xc),1);
  }
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x24810000);
  }
  return param_1;
}

