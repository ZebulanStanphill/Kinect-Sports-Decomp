extern int fn_829548C8();
extern int fn_8295A330();


unsigned int fn_829A16A8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_8295A330(param_1,*(unsigned int *)(param_1 + 200));
  if ((int)uVar1 >= 0) {
    uVar1 = fn_829548C8(param_1);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}

