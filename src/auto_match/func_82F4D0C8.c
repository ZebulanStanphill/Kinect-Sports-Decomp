extern unsigned int *auStack_330;
extern int fn_82F4C068();
extern int fn_82F4C8A0();


void fn_82F4D0C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7)

{
  unsigned char auStack_330 [784];
  
  fn_82F4C068(param_1,param_2,auStack_330,0x18,(param_7 + 1U & 0x1fffffff) << 3);
  fn_82F4C8A0(auStack_330,0x18,param_3,param_4);
  return;
}

