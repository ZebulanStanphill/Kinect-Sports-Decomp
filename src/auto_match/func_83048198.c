extern int fn_8304D6F0();


__int64 fn_83048198(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int aiStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(unsigned char *)(iVar1 + 0xda) & 2) == 0) {
    uVar2 = 48000;
  }
  else {
    uVar2 = 0x177;
  }
  trapDoubleWordImmediate(6,uVar2,0);
  fn_8304D6F0(param_1,((unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x6c) + 0x20) *
                       (unsigned __int64)*(unsigned int *)(iVar1 + 0xd0)) / uVar2 & 0xffffffff,aiStack_20,
               param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(iVar1 + 0xd0) = 0;
  *(unsigned char *)(iVar1 + 0xdb) = *(unsigned char *)(iVar1 + 0xdb) & 0x7f;
  uVar2 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x3c) * (__int64)aiStack_20[0] +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x28) = (int)uVar2;
  return 2 - (unsigned __int64)
             (uVar2 < (unsigned __int64)*(unsigned int *)(param_1 + 0x34) + (unsigned __int64)*(unsigned int *)(param_1 + 0x38));
}

