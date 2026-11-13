extern int fn_82E275D0();
extern int fn_82E2D068();


__int64 fn_82EE2C48(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int * apiStack_30;
  
  *param_2 = 0;
  apiStack_30 = (int *)0x0;
  lVar1 = fn_82E2D068(&apiStack_30);
  if (-1 < lVar1) {
    if (apiStack_30 == (int *)0x0) {
      return -0x7fff0001;
    }
    if (param_1 == 0) {
      lVar1 = (**(int (***)())(*apiStack_30 + 0x60))
                        (apiStack_30,0xffffffff82153478,0xffffffff821537a8);
    }
    else {
      lVar1 = fn_82E275D0(apiStack_30,param_1,(unsigned __int64)*(unsigned short *)(param_1 + 0x10) + 0x12
                               );
    }
    if (-1 < lVar1) {
      lVar1 = (**(int (***)())*apiStack_30)(apiStack_30,0xffffffff821531c8,param_2);
    }
  }
  if (apiStack_30 != (int *)0x0) {
    (**(int (***)())(*apiStack_30 + 8))();
  }
  return lVar1;
}

