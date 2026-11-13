extern int fn_82869CD0();


unsigned __int64 fn_82866690(__int64 param_1,unsigned int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if ((unsigned int)param_2[5] >= 0x10) {
    param_2 = (unsigned int *)*param_2;
  }
  iVar2 = fn_82869CD0(param_1 + 100,param_2);
  if (iVar2 == 1 || iVar2 == 0x16) return 0x200a0000;
  return 0xffffffffa00a0000;
}

