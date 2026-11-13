extern unsigned int *auStack_30;
extern int fn_82E1D978();
extern int fn_82E1DA50();
extern int fn_82F67FE8();


unsigned __int64 fn_82E1DE88(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int auStack_30 [12];
  
  iVar1 = fn_82E1D978();
  if (iVar1 != 0) {
    auStack_30[0] = 0;
    iVar1 = fn_82F67FE8(*(unsigned int *)(iVar1 + 4),0xffffffff821c54fc,auStack_30);
    if (iVar1 == 1) {
      param_3 = (unsigned __int64)auStack_30[0];
    }
    else {
      fn_82E1DA50(param_1,0xffffffff8214b9a0,param_2);
    }
  }
  return param_3;
}

