extern unsigned int lbl_82153188;


unsigned __int64 fn_82E24C38(unsigned int param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  
  pbVar4 = &lbl_82153188;
  pbVar3 = param_2 + 0x10;
  do {
    bVar1 = *param_2;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  } while (param_2 != pbVar3);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0xffffffff80004002;
}

