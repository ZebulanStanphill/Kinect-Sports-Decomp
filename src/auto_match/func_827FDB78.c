extern int fn_827F7210();
extern int fn_827FB050();
extern int fn_827FB300();
extern int fn_827FBAC0();


void fn_827FDB78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  short sVar1;
  
  sVar1 = fn_827F7210();
  if (sVar1 != 0) {
    fn_827FBAC0(param_1,param_2,param_3,param_4);
  }
  fn_827FB300(param_1,param_2,param_3,param_4,param_5,0);
  fn_827FB050(param_2,param_3,param_4);
  return;
}

