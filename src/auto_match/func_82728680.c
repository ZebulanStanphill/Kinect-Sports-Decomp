extern int fn_8267C5B0();
extern int fn_826829A0();
extern int fn_826A71D8();
extern int fn_826C0910();
extern unsigned int lbl_82010F60;
extern unsigned int lbl_82010FB4;


unsigned int * fn_82728680(unsigned int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar3;
  __int64 lVar2;
  
  uVar1 = fn_826A71D8(param_2);
  fn_826C0910(param_1,uVar1);
  *param_1 = &lbl_82010FB4;
  param_1[4] = &lbl_82010F60;
  if (param_3 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8267C5B0(param_3);
  }
  param_1[0xc] = uVar3;
  lVar2 = (**(int (***)())(*param_3 + 0x5c))(param_3);
  fn_826829A0(param_1 + 4,lVar2 + 0x78,param_3[0x1b]);
  param_1[0xd] = 0;
  return param_1;
}

