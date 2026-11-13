extern int strchr();


unsigned __int64 fn_82E1D888(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char param_3)

{
  unsigned __int64 uVar1;
  char *pcVar3;
  unsigned __int64 uVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = strchr(param_2,param_3);
    uVar2 = param_2;
    do {
      pcVar3 = (char *)uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar3 != '\0');
    if ((((uVar1 & 0xffffffff) != 0) && (0 < (__int64)(uVar1 - param_2))) &&
       ((int)(uVar1 - param_2) < ((int)uVar2 - (int)param_2) + -1)) {
      return uVar1;
    }
  }
  return 0;
}

