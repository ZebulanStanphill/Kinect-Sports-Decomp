extern int fn_82A91338();


__int64 fn_82A8B960(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  if (((param_4 & 0xffffffff) == 0) || ((param_5 & 0xffffffff) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    lVar2 = (**(int (***)())(*param_1 + 8))();
    if (lVar2 < 0) {
      altv207_13(in_vs32,in_vs43);
      puVar1 = (unsigned int *)(in_r0 + (int)param_5 & 0xfffffff0);
      *puVar1 = in_register_000103f0;
      puVar1[1] = in_register_000103f4;
      puVar1[2] = in_register_000103f8;
      puVar1[3] = in_vr63;
      puVar1 = (unsigned int *)(in_r0 + (int)param_4 & 0xfffffff0);
      *puVar1 = in_register_000103f0;
      puVar1[1] = in_register_000103f4;
      puVar1[2] = in_register_000103f8;
      puVar1[3] = in_vr63;
    }
    else {
      fn_82A91338(param_1 + 9,param_2,param_3,param_4,param_5);
    }
  }
  return lVar2;
}

