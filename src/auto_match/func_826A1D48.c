extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82695750();
extern int fn_82696330();


void fn_826A1D48(int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  auStack_40[0] = 3;
  fn_82695750(auStack_30,param_3);
  (*(int (**)())(*param_1 + 0x28))(param_1,param_2,(unsigned __int64)*param_2 + 0x138,auStack_30,auStack_40);
  fn_82696330(auStack_30);
  return;
}

