extern int fn_82F63228();


unsigned short * fn_82297070(__int64 param_1,unsigned short *param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = fn_82F63228(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

