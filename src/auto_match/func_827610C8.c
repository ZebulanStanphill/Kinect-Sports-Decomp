extern int fn_82730000();


void fn_827610C8(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto code_r0x8276111c;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto code_r0x8276111c;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_82730000(param_1,param_2,uVar1);
code_r0x8276111c:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

