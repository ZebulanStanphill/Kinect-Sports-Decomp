extern int fn_82ACADA8();
extern int fn_82ACB390();


void fn_82ACBDA8(__int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (param_2 & 0xffffffff) >> 2 & 0x3ffffffc;
  fn_82ACADA8(param_1 + 4,uVar1,uVar1 + 3,param_2 & 0xf);
  fn_82ACB390(param_1,param_2,0);
  return;
}

