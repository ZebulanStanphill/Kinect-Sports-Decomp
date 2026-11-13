extern int fn_82CEA220();
extern int fn_82CEA358();


unsigned __int64 fn_82CEAAA0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82CEA220();
  if ((int)uVar1 <= *(int *)(param_1 + 8)) {
    fn_82CEA358(param_1,uVar1);
    return 0;
  }
  return 1;
}

