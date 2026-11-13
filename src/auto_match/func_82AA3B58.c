extern int fn_82AA3148();
extern unsigned int uStack00000044;


__int64 fn_82AA3B58(int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,int param_5,
                      unsigned __int64 param_6,unsigned __int64 param_7,int (**param_8)())

{
  __int64 lVar1;
  unsigned int uStack00000044;
  int (**pcStack0000004c)();
  
  uStack00000044 = (unsigned int)param_7;
  if ((((param_1 == 0) || (param_2 < 4)) || (param_3 == 0)) || (param_5 == 0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    pcStack0000004c = param_8;
    lVar1 = fn_82AA3148();
    if ((lVar1 < 0) && ((int)lVar1 == -0x7789f497)) {
      (*param_8)(param_7,1,0x30,0xffffffff820d3478);
    }
  }
  return lVar1;
}

