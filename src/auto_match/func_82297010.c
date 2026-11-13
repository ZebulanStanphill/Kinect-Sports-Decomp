#define true 1


unsigned short * fn_82297010(int *param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned short *param_4)

{
  unsigned char cVar1;
  
  while( true ) {
    if (param_3 == param_4) {
      return param_3;
    }
    cVar1 = (*(int (**)())(*param_1 + 8))(param_1,param_2,*param_3);
    if (cVar1 == '\0') break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

