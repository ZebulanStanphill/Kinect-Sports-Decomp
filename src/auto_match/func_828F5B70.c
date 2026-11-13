extern int fn_8265C990();


int fn_828F5B70(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_828F5B70(*(int *)(param_1 + 4),1);
  }
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x24810000);
  }
  return param_1;
}

