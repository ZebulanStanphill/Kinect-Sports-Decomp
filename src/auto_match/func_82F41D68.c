unsigned __int64 fn_82F41D68(unsigned char *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  
  bVar3 = *param_1;
  while (bVar3 != 0) {
    bVar1 = *param_2;
    if (bVar3 != bVar1) {
      bVar2 = bVar3;
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar2 = bVar3 & 0xdf;
      }
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 & 0xdf;
      }
      if (bVar2 != bVar1) break;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar3 = *param_1;
  }
  if ((bVar3 == 0) && (*param_2 == 0)) {
    return 1;
  }
  return 0;
}

