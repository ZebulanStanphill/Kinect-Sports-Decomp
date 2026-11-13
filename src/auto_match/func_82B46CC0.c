extern int fn_82AA66A8();
extern int fn_82B46B88();


__int64 fn_82B46CC0(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if (*(int *)(param_2 + 4) == 1) {
    lVar2 = 0;
    do {
      if (*(int *)(param_2 + 8) != 0) {
        lVar1 = fn_82B46B88(param_1);
        lVar2 = lVar1 + lVar2;
      }
      param_2 = *(int *)(param_2 + 0xc);
      if ((param_2 != 0) && (*(int *)(param_2 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
    } while (param_2 != 0);
  }
  else {
    lVar2 = fn_82B46B88(param_1);
  }
  return lVar2;
}

