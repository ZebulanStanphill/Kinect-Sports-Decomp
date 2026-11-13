extern unsigned int ltcg_pool_0_0f;


void fn_82526068(double param_1,double param_2,double param_3,double param_4,int param_5,
                  unsigned char param_6)

{
  unsigned int uVar1;
  
  *(float *)(param_5 + 0x31994) = (float)param_1;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_5 + 0x31984) = 1;
  *(unsigned int *)(param_5 + 0x31988) = uVar1;
  *(float *)(param_5 + 0x3198c) = (float)param_1;
  *(unsigned int *)(param_5 + 0x31990) = uVar1;
  *(unsigned char *)(param_5 + 0x319a4) = param_6;
  *(float *)(param_5 + 0x31998) = (float)param_2;
  *(float *)(param_5 + 0x3199c) = (float)param_3;
  *(float *)(param_5 + 0x319a0) = (float)param_4;
  return;
}

