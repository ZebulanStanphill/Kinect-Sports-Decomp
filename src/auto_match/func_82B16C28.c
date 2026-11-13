extern int fn_82B81938();


unsigned __int64 fn_82B16C28(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  if (((uVar2 ^ uVar1) & 0x40000000) == 0) {
    uVar6 = (unsigned __int64)(uVar1 >> 0x19) & 7;
    uVar5 = (unsigned __int64)(uVar2 >> 0x19) & 7;
    if (((uVar6 == uVar5) && (((uVar2 ^ uVar1) & 0x1ffe000) == 0)) &&
       (((uVar1 >> 0x19 & 7) == 0 ||
        (((((1 << (int)(uVar5 << 1)) - 1U & uVar2 >> 5 ^ (1 << (int)(uVar6 << 1)) - 1U & uVar1 >> 5)
          & 0xff) == 0 && (((uVar2 ^ uVar1) & 0x1f) == 0)))))) {
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      uVar3 = *(unsigned int *)(uVar1 + 8) >> 0x1d & 1;
      if (uVar3 == (*(unsigned int *)(uVar2 + 8) >> 0x1d & 1)) {
        if (uVar3 == 0) {
          if ((uVar1 == uVar2) || (cVar4 = fn_82B81938(param_2,param_3), cVar4 != '\0')) {
            return 1;
          }
        }
        else if (*(unsigned int *)(uVar1 + 0x20) == uVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

