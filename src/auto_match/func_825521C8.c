extern unsigned int lbl_831C1CEC;


void fn_825521C8(int param_1,int param_2)

{
  *(unsigned int *)(param_1 + 0x2ed8) = (&lbl_831C1CEC)[param_2 * 2];
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x80000;
  return;
}

