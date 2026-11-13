extern int fn_82FB04A0();
extern int fn_83007AE8();


void fn_830320D0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  param_2 = param_2 + 4;
  iVar1 = fn_83007AE8(param_1,&param_2,&param_3,0);
  if (iVar1 == 1) {
    fn_82FB04A0(param_1,&param_2,&param_3);
  }
  return;
}

