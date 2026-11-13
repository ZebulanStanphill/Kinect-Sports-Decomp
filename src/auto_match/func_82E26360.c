extern int fn_82E260A8();
extern int fn_82E26258();


void fn_82E26360(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = fn_82E260A8(param_1,0,param_3,param_4,param_2,param_1);
  if ((iVar1 != 0) || (uVar2 = 1, (int)param_3 < 0)) {
    uVar2 = 0;
  }
  uVar3 = (unsigned __int64)((int)param_3 >> 0x1f);
  fn_82E26258(param_1,param_2,(param_3 ^ uVar3) - uVar3,uVar2);
  return;
}

