extern int fn_828D5420();
extern int fn_828D8190();
extern unsigned int uStack_20;


unsigned int * fn_828D83F0(unsigned int *param_1,int *param_2)

{
  char cVar2;
  unsigned int uVar1;
  unsigned char uStack_20;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_828D5420(param_1,(param_2[1] - *param_2) / 0x1c);
  if (cVar2 != '\0') {
    uVar1 = fn_828D8190(*param_2,param_2[1],*param_1,param_1 + 3,uStack_20);
    param_1[1] = uVar1;
  }
  return param_1;
}

