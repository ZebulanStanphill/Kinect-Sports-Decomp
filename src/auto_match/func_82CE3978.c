unsigned __int64 fn_82CE3978(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  if (param_2 >= 0x40) {
    return 0xffffffff80070057;
  }
  puVar2 = (unsigned int *)(param_2 * 0x10 + param_1);
  uVar1 = *puVar2;
  if (((uVar1 & 0x80000000) != 0) && ((uVar1 & 0x40000000) == 0)) {
    *puVar2 = uVar1 | 0x40000000;
    *param_3 = puVar2;
    return 0;
  }
  return 0xffffffff80004005;
}

