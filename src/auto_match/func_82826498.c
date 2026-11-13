extern unsigned int *auStack_38;
extern int fn_828261B0();
extern int fn_82826230();
extern int fn_82826290();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82826498(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,int (**param_4)(),
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38;
  
  fn_828261B0();
  uStack_3c = (unsigned int)param_2;
  uStack_40 = param_3;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    uVar2 = (*param_4)(auStack_38,param_2,uStack_40,param_5);
    fn_82826290(auStack_38,&uStack_3c,&uStack_40,uVar2);
    param_2 = (unsigned __int64)uStack_3c;
    uVar1 = param_2;
  }
  fn_82826230(&auStack_38);
  return;
}

