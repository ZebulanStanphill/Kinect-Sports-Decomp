extern unsigned int *auStack_40;
extern int fn_8280E418();
extern int fn_828100D0();


void fn_827FA888(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char auStack_40 [16];
  
  fn_8280E418(param_1 + 0x34,auStack_40);
  fn_828100D0(auStack_40,param_3,param_4,param_5,param_2);
  return;
}

