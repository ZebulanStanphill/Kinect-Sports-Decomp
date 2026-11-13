unsigned __int64 fn_82963618(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 & 0xfff00000;
  if ((((uVar1 != 0x73100000) && (uVar1 != 0x73300000)) && (uVar1 != 0x73d00000)) &&
     (((uVar1 != 0x73e00000 && (uVar1 != 0x73f00000)) && (uVar1 != 0x74000000)))) {
    return 0;
  }
  return 1;
}

