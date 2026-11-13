extern int fn_82A1DDC0();




unsigned __int64 fn_829DCD90(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *piVar2;
  unsigned int lVar3;
  unsigned int uVar4;
  struct { unsigned int a,b; } header;
  
  if (param_2 != 0) {
    piVar2 = (unsigned int *)(param_1 + 0x9c98);
    uVar1 = *piVar2;
    if ((uVar1 == 0) || (param_3 >= uVar1 * 0x7d4 + 8U)) {
      header.b = uVar1;
      header.a = 0x10001;
      fn_82A1DDC0(param_2,&header.a,8);
      lVar3 = param_2 + 8;
      uVar1 = *(unsigned int *)(param_1 + 0x9c90);
      uVar4 = uVar1 - *piVar2;
      if (uVar4 < uVar1) {
        do {
          fn_82A1DDC0(lVar3,((*(int *)(param_1 + 0x9c94) + uVar4) % 0x14) * 0x7d4 + param_1,
                            0x7d4);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x7d4;
        } while (uVar4 < *(unsigned int *)(param_1 + 0x9c90));
      }
      *piVar2 = 0;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

