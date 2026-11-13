extern int fn_829548C8();
extern int fn_8295A330();


unsigned int fn_82940470(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 200);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 200) & 0x7fffffff;
  }
  uVar1 = fn_8295A330(param_1,uVar1);
  if (-1 < (int)uVar1) {
    uVar1 = fn_829548C8(param_1);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}

