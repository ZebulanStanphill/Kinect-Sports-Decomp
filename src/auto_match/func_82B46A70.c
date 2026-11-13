extern int fn_82B468D0();
extern int fn_82B46988();
extern int fn_82B469D8();


void fn_82B46A70(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = fn_82B468D0(param_1,param_3,param_4);
  uVar2 = fn_82B469D8(param_1,param_2,uVar1,param_4);
  iVar3 = fn_82B46988(param_1);
  *(unsigned int *)(iVar3 + 0x14) = uVar2;
  *(unsigned int *)(iVar3 + 0x10) = 0;
  return;
}

