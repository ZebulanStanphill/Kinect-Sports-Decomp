unsigned __int64 fn_82E6E5A0(int *param_1,int param_2,__int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if (param_5 == 0) {
    return 0xffffffff80004003;
  }
  if ((param_2 != 0) && (param_2 != 1)) {
    return 0xffffffff80070057;
  }
  lVar2 = param_3;
  if ((param_2 != 0) && (lVar2 = 0, param_2 == 1)) {
    lVar2 = *(__int64 *)(param_1 + 6) + param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x82e6e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(int (***)())(*param_1 + 0x1c))(param_1,lVar2);
  return uVar1;
}

