extern int fn_82800080();
extern int fn_828000B0();


void fn_827F9CF8(int *param_1,unsigned int param_2)

{
  int iVar1;
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_2 != 0) {
    if (*(unsigned int *)(*(unsigned int *)(*param_1 + 0x24) + 0x18) != 0) {
      param_1[0x3c] = param_2;
      iVar1 = fn_82800080(*(unsigned int *)(*param_1 + 0x24));
      param_2 = iVar1 + param_2;
      fn_828000B0(param_1[0x3c],*(unsigned int *)(*param_1 + 0x24));
    }
    if (*(unsigned int *)(*(unsigned int *)(*param_1 + 0x28) + 0x18) != 0) {
      param_1[0x3d] = param_2;
      iVar1 = fn_82800080(*(unsigned int *)(*param_1 + 0x28));
      param_2 = iVar1 + param_2;
      fn_828000B0(param_1[0x3d],*(unsigned int *)(*param_1 + 0x28));
    }
    if (*(unsigned int *)(*(unsigned int *)(*param_1 + 0x2c) + 0x18) != 0) {
      param_1[0x3e] = param_2;
      fn_82800080(*(unsigned int *)(*param_1 + 0x2c));
      fn_828000B0(param_1[0x3e],*(unsigned int *)(*param_1 + 0x2c));
    }
  }
  return;
}

