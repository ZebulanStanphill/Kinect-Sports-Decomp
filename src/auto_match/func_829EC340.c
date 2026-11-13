extern int fn_82F6F868();


unsigned __int64 fn_829EC340(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned __int64 uVar4;
  
  uVar1 = param_1;
  if ((param_1 & 0xffffffff) != 0) {
    uVar4 = 0;
    piVar3 = (int *)0x83218a38;
    do {
      if ((*piVar3 != 0) && (iVar2 = fn_82F6F868(param_1), iVar2 == 0)) {
        return (uVar4 & 0x7ffffff) * 0x20 - 0x7cde75c8;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 8;
      uVar1 = 0;
    } while ((uVar4 & 0xffffffff) < 10);
  }
  return uVar1;
}

