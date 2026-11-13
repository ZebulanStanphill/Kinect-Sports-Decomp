extern int fn_828D0F58();
extern int fn_828D1070();


unsigned int * fn_828D1208(unsigned int *param_1,int *param_2)

{
  unsigned char cVar2;
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_828D0F58(param_1,(param_2[1] - *param_2) / 0xc4);
  if (cVar2 != '\0') {
    uVar1 = fn_828D1070(*param_2,param_2[1],*param_1,param_1 + 3);
    param_1[1] = uVar1;
  }
  return param_1;
}

