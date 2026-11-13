extern int memcpy();


unsigned int fn_828D1070(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int lVar1;
  
  if (param_1 != param_2) {
    lVar1 = param_1 - param_3;
    do {
      if (param_3 != 0) {
        memcpy(param_3,lVar1 + param_3,0xc4);
      }
      param_3 = param_3 + 0xc4;
    } while ((lVar1 + param_3 & 0xffffffff) != param_2);
  }
  return param_3;
}

