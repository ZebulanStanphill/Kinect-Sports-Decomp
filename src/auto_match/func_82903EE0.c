extern int fn_828FA8D8();
extern int fn_828FAB00();
extern int fn_82903B88();


void fn_82903EE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  
  if ((int)param_2 == 0) {
    uVar1 = fn_82903B88(param_3,param_2,param_4 + 0x44c,0xffffffff8202c584);
    fn_828FAB00((unsigned __int64)*param_1 + 0x18,uVar1);
  }
  else {
    uVar1 = fn_82903B88(param_3,param_2,param_4 + 0x44c,0xffffffff8202c584);
    fn_828FA8D8((unsigned __int64)*param_1 + 0x18,uVar1);
    param_1[0x13] = 1;
  }
  return;
}

