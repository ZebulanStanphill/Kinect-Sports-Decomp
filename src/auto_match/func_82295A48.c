extern int fn_82297DB0();
extern int memmove();


unsigned int * fn_82295A48(unsigned int *param_1,unsigned int *param_2)

{
  if (param_1 != param_2) {
    fn_82297DB0(param_1,1,0);
    if ((unsigned int)param_2[5] < 8) {
      memmove(param_1,param_2,((unsigned __int64)(unsigned int)param_2[4] + 1 & 0x7fffffff) << 1);
    }
    else {
      *param_1 = *param_2;
      *param_2 = 0;
    }
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
  }
  return param_1;
}

