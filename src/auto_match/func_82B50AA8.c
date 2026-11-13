extern int fn_82B4DE70();
extern int fn_82B507E0();


unsigned __int64 fn_82B50AA8(int param_1)

{
  unsigned __int64 uVar1;
  
  if (((*(unsigned int *)(param_1 + 0x1c) & 1) == 0) && (*(unsigned int *)(param_1 + 0x1c) != 0)) {
    uVar1 = fn_82B4DE70(param_1);
    uVar1 = fn_82B507E0(param_1,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

