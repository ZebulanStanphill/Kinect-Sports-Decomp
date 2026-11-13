unsigned __int64 fn_82996A48(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x6c);
  *(unsigned int *)(param_1 + 0x28) = 2;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x10c) = *(unsigned int *)(param_1 + 200);
  *(unsigned int *)(param_1 + 0x2c) = 0x18;
  *(unsigned int *)(param_1 + 0x38) = 8;
  *(unsigned int *)(param_1 + 0x48) = 1;
  *(unsigned int *)(param_1 + 100) = 0x40;
  *(unsigned int *)(param_1 + 0x6c) = uVar1 & 0xbdffffff | 0x289a4734;
  uVar2 = *(unsigned int *)(param_1 + 200) & 0xffff;
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x8000000;
  *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(param_1 + 0xcc) | 0x100;
  if (uVar2 == 0x104) {
    *(unsigned int *)(param_1 + 0x44) = 8;
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 0x3c) = 6;
    *(unsigned int *)(param_1 + 0x4c) = 6;
    *(unsigned int *)(param_1 + 0x6c) = uVar1 & 0xadffc77f | 0x2c9fc734;
  }
  else {
    *(unsigned int *)(param_1 + 0x50) = 2;
    *(unsigned int *)(param_1 + 0x3c) = 4;
    *(unsigned int *)(param_1 + 0x4c) = 4;
    *(unsigned int *)(param_1 + 0x44) = 6;
    *(unsigned int *)(param_1 + 0x6c) =
         (unsigned int)(uVar2 == 0x101) << 0xd | uVar1 & 0xbdfa5fff | 0x289a4734 | 0x14001882;
  }
  return 0;
}

