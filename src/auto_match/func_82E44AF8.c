extern int fn_82E7BFF8();


int fn_82E44AF8(int param_1,unsigned int param_2,short *param_3)

{
  int uVar1;
  
  if ((param_2 != 0) && (param_3 != (short *)0x0)) {
    if (*param_3 == 0) {
      return 0xc00d36b2;
    }
    uVar1 = fn_82E7BFF8(param_1 + 8,0,param_2,param_3);
    return uVar1;
  }
  return 0x80004003;
}

