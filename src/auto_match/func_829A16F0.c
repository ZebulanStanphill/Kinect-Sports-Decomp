unsigned __int64 fn_829A16F0(int param_1,int param_2,unsigned int *param_3)

{
  unsigned char cVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  
  cVar1 = *(char *)(param_2 + 0x6f);
  bVar2 = *(unsigned char *)(param_2 + 0x6e);
  uVar3 = (unsigned int)bVar2;
  if (cVar1 == '\x01') {
    if ((unsigned int)bVar2 < *(unsigned int *)(param_1 + 0x28)) goto LAB_829a1740;
  }
  else if (cVar1 == '\x03') {
    if ((unsigned int)bVar2 < *(unsigned int *)(param_1 + 0x3c)) {
      uVar3 = bVar2 + 2;
LAB_829a1740:
      *param_3 = uVar3;
      return 0;
    }
  }
  else if (cVar1 == '\x05') {
    uVar3 = 0xc;
    goto LAB_829a1740;
  }
  return 0xffffffff80004005;
}

