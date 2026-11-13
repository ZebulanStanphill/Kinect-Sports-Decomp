extern unsigned int *auStack_30;
extern int fn_82696330();
extern int fn_82696B20();


unsigned int * fn_826AB6F8(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
  char cVar1;
  unsigned char auStack_30 [24];
  
  auStack_30[0] = 0;
  cVar1 = (**(int (***)())(*param_2 + 0x2c))(param_2,param_3,(unsigned __int64)*param_3 + 0x138,auStack_30);
  if (cVar1 == '\0') {
    *(unsigned char *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    fn_82696B20(param_1,auStack_30,0);
  }
  fn_82696330(auStack_30);
  return param_1;
}

