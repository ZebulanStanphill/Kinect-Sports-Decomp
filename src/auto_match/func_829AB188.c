extern unsigned int *auStack_60;
extern int fn_829AAFE0();


void fn_829AB188(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_60 [80];
  
  fn_829AAFE0(param_1,auStack_60,param_2);
  if (*(int (***)())(param_1 + 0x544) != (int (**)())0x0) {
    (*(int (**)())(param_1 + 0x544))(param_1,auStack_60);
  }
  return;
}

