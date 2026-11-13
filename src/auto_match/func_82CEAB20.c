extern int fn_82CEA6F8();
extern int fn_82CEA7A8();


unsigned __int64 fn_82CEAB20(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82CEA6F8();
  if ((int)uVar1 <= *(int *)(param_1 + 8)) {
    fn_82CEA7A8(param_1,uVar1);
    return 0;
  }
  return 1;
}

