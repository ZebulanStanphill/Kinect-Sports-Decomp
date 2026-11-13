extern int fn_82F62FD0();


unsigned char * fn_8223C920(__int64 param_1,unsigned char *param_2,unsigned char *param_3)

{
  unsigned char uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = fn_82F62FD0(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

