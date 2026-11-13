unsigned __int64 fn_829A1750(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  char cVar2;
  unsigned int uVar3;
  
  bVar1 = *(unsigned char *)(param_2 + 0x6e);
  cVar2 = *(char *)(param_2 + 0x6f);
  *param_3 = (unsigned int)bVar1;
  if (cVar2 == '\x01') {
    if (*(unsigned int *)(param_1 + 0x28) <= (unsigned int)bVar1) {
      return 0xffffffff80004005;
    }
    uVar3 = 1;
  }
  else {
    if (cVar2 != '\x03') {
      return 0xffffffff80004005;
    }
    if (*(unsigned int *)(param_1 + 0x3c) <= (unsigned int)bVar1) {
      return 0xffffffff80004005;
    }
    uVar3 = 3;
  }
  *param_4 = uVar3;
  return 0;
}

