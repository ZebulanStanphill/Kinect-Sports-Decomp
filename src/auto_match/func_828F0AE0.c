extern int fn_828F0618();


void fn_828F0AE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  
  iVar1 = fn_828F0618();
  if ((iVar1 == -0x7789f494) && ((param_4 & 4) == 0)) {
    fn_828F0618(param_1,param_2,param_3,param_4 | 4,param_5,param_6,param_7,param_8);
  }
  return;
}

