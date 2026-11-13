extern unsigned int lbl_821954D0;


void fn_82637F58(int param_1,unsigned int param_2)

{
  *(float *)(param_1 + 0x2904) = (float)param_2 * lbl_821954D0;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x8000000;
  return;
}

