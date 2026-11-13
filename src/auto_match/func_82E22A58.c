unsigned __int64 fn_82E22A58(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  uVar2 = ((unsigned __int64)uVar1 + (__int64)(int)(uVar1 / 0x1f31d) * -0x1f31d) * 0x41a7 +
          ((unsigned __int64)uVar1 / 0x1f31d) * -0xb14;
  if ((__int64)uVar2 < 1) {
    uVar2 = uVar2 - 0x80000001;
  }
  *(int *)(param_1 + 4) = (int)uVar2;
  uVar2 = uVar2 & 0xffffffff;
  return (uVar2 >> 0x18 ^ uVar2 >> 0x10 ^ uVar2 >> 8 ^ uVar2) & 0xff;
}

