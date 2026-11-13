extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FF85F0(double param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  if ((((double)lbl_821AAD20 <= param_1) && (-1 < param_4)) && (param_4 < 'e')) {
    *(float *)(param_2 + 0x20) = (float)param_1;
    *(char *)(param_2 + 0x24) = param_4;
    return 1;
  }
  return 0x1f;
}

