extern unsigned int *auStack_330;
extern int fn_82F4C260();
extern int fn_82F4CA88();


void fn_82F4D228(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7,__int64 param_8)

{
  __int64 lVar1;
  unsigned char auStack_330 [768];
  
  lVar1 = (param_7 + 1U & 0x1fffffff) << 3;
  fn_82F4C260(param_1,param_2,auStack_330,0x18,lVar1);
  fn_82F4CA88(auStack_330,0x18,param_3,param_4,lVar1,8 - param_8);
  return;
}

