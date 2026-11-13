extern int fn_82ABE8C8();
extern int fn_82ACBFC0();


unsigned __int64 fn_82ACC088(int param_1,int param_2,int param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    fn_82ACBFC0();
  }
  uVar3 = *(unsigned int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x2c8) == 0) {
    uVar2 = fn_82ABE8C8(param_1 + 0x3cc,0xf94);
    *(unsigned int *)(param_1 + 0x2c8) = uVar2;
  }
  iVar4 = (uVar3 % 0x3e5) * 4;
  *(unsigned int *)(param_2 + 0x1c) = *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x2c8));
  *(int *)(iVar4 + *(int *)(param_1 + 0x2c8)) = param_2;
  uVar3 = *(int *)(param_1 + 0x2cc) + 1;
  *(unsigned int *)(param_1 + 0x2cc) = uVar3;
  if (uVar3 < 0x61a9) {
    for (uVar3 = *(unsigned int *)(param_3 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
        uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28)) {
      if ((*(unsigned int *)(uVar3 + 8) >> 0x1a & 1) != 0) {
        iVar4 = (*(unsigned int *)(uVar3 + 0x10) >> 0x14 & 0x780 | *(unsigned int *)(uVar3 + 0x14) >> 0x19) * 4 +
                *(int *)(param_1 + 0x2d4);
        *(int *)(iVar4 + -4) = *(int *)(iVar4 + -4) + 1;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

