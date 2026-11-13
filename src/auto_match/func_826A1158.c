extern unsigned int *auStack_30;
extern int fn_8268CC00();


unsigned __int64 fn_826A1158(unsigned __int64 param_1,int *param_2)

{
  unsigned char auStack_30 [24];
  
  fn_8268CC00(auStack_30);
  (*(int (**)())(*param_2 + 0x28))(param_1,param_2,auStack_30);
  return param_1;
}

