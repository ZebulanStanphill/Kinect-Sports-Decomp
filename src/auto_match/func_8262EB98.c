extern int fn_8253FE20();


void fn_8262EB98(unsigned __int64 param_1,float *param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  __int64 lVar3;
  
  fVar1 = param_2[0xf];
  if (((unsigned int)fVar1 & 1) != 0) {
    lVar3 = fn_8253FE20((double)param_2[5],param_1,param_2,param_3,param_2 + 10);
    fn_8253FE20((double)param_2[6],lVar3 + 4,param_3,lVar3 + 0x2c);
    fn_8253FE20((double)param_2[7],param_2 + 2,param_3,param_2 + 0xc);
  }
  if (((unsigned int)fVar1 & 2) != 0) {
    fn_8253FE20((double)param_2[8],param_2 + 3,param_3,param_2 + 0xd);
  }
  if (((unsigned int)fVar1 & 4) != 0) {
    fn_8253FE20((double)param_2[9],param_2 + 4,param_3,param_2 + 0xe);
  }
  fVar2 = param_2[0x10];
  param_2[0x10] = (float)((int)fVar2 + -1);
  if ((int)fVar2 < 1) {
    if ((((((unsigned int)fVar1 & 1) != 0) && (*param_2 == param_2[5])) && (param_2[1] == param_2[6])) &&
       (param_2[2] == param_2[7])) {
      param_2[0xf] = (float)((unsigned int)param_2[0xf] & 0xfffffffe);
    }
    if ((((unsigned int)fVar1 & 2) != 0) && (param_2[3] == param_2[8])) {
      param_2[0xf] = (float)((unsigned int)param_2[0xf] & 0xfffffffd);
    }
    if ((((unsigned int)fVar1 & 4) != 0) && (param_2[4] == param_2[9])) {
      param_2[0xf] = (float)((unsigned int)param_2[0xf] & 0xfffffffb);
    }
    param_2[0x10] = 7.00649e-45;
  }
  return;
}

