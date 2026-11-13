extern int fn_82AC8B10();
extern int fn_82AC8CE8();


unsigned __int64 fn_82AEA2D0(unsigned int *param_1)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar3 = *(unsigned int *)((*param_1 & 0xfffffffe) + 0x24);
  if (((uVar3 & 1) == 0) && (uVar5 = (uVar3 & 0xfffffffe) - 0x28, uVar3 = uVar5, uVar5 != 0)) {
    while (uVar4 = uVar3, (*(unsigned int *)(uVar4 + 0x24) & 1) == 0) {
      uVar1 = *(unsigned int *)(uVar4 + 0x24) & 0xfffffffe;
      uVar3 = uVar1 - 0x28;
      if ((uVar3 == 0) || (((*(unsigned int *)(uVar1 - 0x14) ^ *(unsigned int *)(uVar4 + 0x14)) & 0x1fff) != 0))
      break;
    }
    *param_1 = uVar4;
    while (cVar2 = fn_82AC8B10(param_1 + 1,uVar5), cVar2 != '\0') {
      fn_82AC8CE8(param_1 + 1,uVar5);
      if (uVar5 == *param_1) {
        return 1;
      }
      if ((*(unsigned int *)(uVar5 + 0x24) & 1) == 0) {
        uVar5 = (*(unsigned int *)(uVar5 + 0x24) & 0xfffffffe) - 0x28;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return 0;
}

