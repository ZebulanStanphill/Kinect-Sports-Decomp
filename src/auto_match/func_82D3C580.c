void fn_82D3C580(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int param_4)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  if (-1 < param_3 + -1) {
    do {
      puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      param_4 = param_4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

