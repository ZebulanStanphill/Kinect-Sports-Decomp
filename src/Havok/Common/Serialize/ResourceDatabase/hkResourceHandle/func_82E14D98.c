extern int fn_82CED5B8();


void fn_82E14D98(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  if (0 < (int)*(unsigned int *)(param_1 + 0x14)) {
    do {
      fn_82CED5B8(uVar2 + 4);
      fn_82CED5B8(uVar2);
      uVar1 = uVar1 - 1;
      uVar2 = uVar2 + 8;
    } while (uVar1 != 0);
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}

