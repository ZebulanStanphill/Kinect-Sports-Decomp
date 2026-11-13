extern int fn_82CE2988();
extern int fn_82CE3440();


__int64 fn_82CE2AE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                      unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  __int64 lVar2;
  
  *param_1 = (int)param_2;
  param_1[1] = param_5;
  lVar1 = fn_82CE2988(param_1 + 7,param_2,param_3,1);
  if (lVar1 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x10e] = 0;
  }
  else {
    param_1[0x10e] = param_4;
    fn_82CE3440(param_1 + 2,param_6,param_7,param_7,param_8);
    param_1 = param_1 + 0xe;
    lVar2 = 0x40;
    do {
      *param_1 = 0;
      param_1[1] = 0;
      *(unsigned __int64 *)(param_1 + 2) = 0;
      param_1 = param_1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return lVar1;
}

