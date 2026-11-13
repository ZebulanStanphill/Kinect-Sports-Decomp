unsigned __int64
fn_829A17A8(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned char bVar1;
  char cVar2;
  unsigned int uVar3;
  
  bVar1 = *(unsigned char *)(param_2 + 0x6e);
  cVar2 = *(char *)(param_2 + 0x6f);
  *param_3 = (unsigned int)bVar1;
  if (cVar2 == '\x01') {
    if (bVar1 != 0) {
      return 0xffffffff80004005;
    }
    uVar3 = 0;
    *param_4 = 0;
    if (param_5 == (unsigned int *)0x0) {
      return 0;
    }
  }
  else {
    if (cVar2 != '\x02') {
      return 0xffffffff80004005;
    }
    if (bVar1 != 0) {
      return 0xffffffff80004005;
    }
    *param_4 = 9;
    if (param_5 == (unsigned int *)0x0) {
      return 0;
    }
    uVar3 = 1;
  }
  *param_5 = uVar3;
  return 0;
}

