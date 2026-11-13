extern int fn_82A1F2F8();
extern int fn_82E23978();


unsigned __int64 fn_82E23230(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x17c) != 0)) {
    uVar2 = 0x15;
  }
  else {
    lVar1 = fn_82A1F2F8(param_1,param_2,0xffffffffffffffff);
    uVar2 = fn_82E23978(param_1 + 0x30,param_2,
                              (lVar1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x164)) -
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x154),param_3,0);
  }
  return uVar2;
}

