extern int fn_8263C620();


unsigned __int64 fn_826760A0(int self,unsigned __int64 param_2)

{
  int lVar1;
  unsigned int *piVar2;
  
  fn_8263C620(*(unsigned int *)(self + 0x28));
  piVar2 = (int *)(self + 0x3c);
  lVar1 = 3;
  do {
    if (*piVar2 != 0) {
      fn_8263C620(*piVar2,param_2);
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 3;
  } while (lVar1 != 0);
  return 1;
}

