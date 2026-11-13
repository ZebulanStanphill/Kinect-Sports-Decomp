extern int fn_82BF2490();
extern int fn_82F691F0();


unsigned __int64 fn_82BF2560(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 900;
    *(unsigned int *)(param_1 + 4) = 0;
  }
  else {
    if (param_2 != *(int *)(param_1 + 4)) {
      if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
        fn_82BF2490(param_1,0x400);
      }
      *(int *)(param_1 + 4) = param_2;
      *(unsigned int *)(param_1 + 0x30) = 0;
      *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
    }
    uVar1 = 0;
  }
  return uVar1;
}

