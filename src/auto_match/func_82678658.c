extern int fn_82F68CC0();


void fn_82678658(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
                  int param_5)

{
  if (((param_3 == (unsigned int *)0x0) && (param_3 = param_4, param_4 == (unsigned int *)0x0)) &&
     (param_5 == 0)) {
    fn_82F68CC0(param_1 + 0x222c,param_1 + 0x134,0x20);
    *(unsigned int *)(param_1 + 0x224c) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x2220) = 2;
    *(unsigned int *)(param_1 + 0x224c) = *param_3;
    *(unsigned int *)(param_1 + 0x2250) = param_3[1];
    *(unsigned int *)(param_1 + 0x2254) = param_3[2];
    *(unsigned int *)(param_1 + 0x2258) = param_3[3];
    *(unsigned int *)(param_1 + 0x225c) = param_3[4];
    *(unsigned int *)(param_1 + 0x2260) = param_3[5];
    *(unsigned int *)(param_1 + 0x2264) = param_3[6];
    *(unsigned int *)(param_1 + 0x2268) = param_3[7];
    *(unsigned int *)(param_1 + 0x226c) = param_3[8];
    *(unsigned int *)(param_1 + 0x2228) = 0xffffffff;
    fn_82F68CC0(param_1 + 0x222c,param_1 + 0x134,0x20);
    if (param_4 != (unsigned int *)0x0) {
      *(unsigned int *)(param_1 + 0x2270) = *param_4;
      *(unsigned int *)(param_1 + 0x2274) = param_4[1];
      *(unsigned int *)(param_1 + 0x2278) = param_4[2];
      *(unsigned int *)(param_1 + 0x227c) = param_4[3];
      *(unsigned int *)(param_1 + 0x2280) = param_4[4];
      *(unsigned int *)(param_1 + 0x2284) = param_4[5];
      *(unsigned int *)(param_1 + 0x2288) = param_4[6];
      *(unsigned int *)(param_1 + 0x228c) = param_4[7];
      *(unsigned int *)(param_1 + 0x2290) = param_4[8];
    }
  }
  *(unsigned int *)(param_1 + 0x2224) = param_2;
  *(unsigned int *)(param_1 + 0x2220) = 3;
  return;
}

