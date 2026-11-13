extern int fn_82E4FE40();
extern int fn_82E57B08();
extern int fn_82F37588();


unsigned __int64 fn_82E58880(int param_1)

{
  unsigned int uVar1;
  int * apiStack_30;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar1 = 0;
    do {
      fn_82E57B08(param_1 + 0x48,uVar1,&apiStack_30);
      if (*apiStack_30 != 0) {
        fn_82E4FE40();
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < *(unsigned int *)(param_1 + 0xb0));
  }
  fn_82F37588(param_1 + 0x48,0);
  *(unsigned int *)(param_1 + 0xb0) = 0;
  return 0;
}

