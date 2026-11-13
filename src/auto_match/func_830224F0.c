extern unsigned int lbl_82002AE0;


unsigned __int64 fn_830224F0(int param_1,unsigned int param_2,unsigned short param_3)

{
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned short *)(param_1 + 8) = param_3;
  *(float *)(param_1 + 0xc) = lbl_82002AE0 / (float)param_3;
  return 1;
}

