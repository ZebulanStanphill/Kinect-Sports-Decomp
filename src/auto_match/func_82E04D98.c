extern int fn_82CED5B8();


void fn_82E04D98(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if (0 < (int)*(unsigned int *)(param_1 + 0xc)) {
    do {
      fn_82CED5B8(uVar2 + 4);
      fn_82CED5B8(uVar2);
      uVar1 = uVar1 - 1;
      uVar2 = uVar2 + 8;
    } while (uVar1 != 0);
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

