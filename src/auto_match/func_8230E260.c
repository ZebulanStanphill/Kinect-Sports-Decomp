extern int fn_822BD338();
extern unsigned int lbl_831CC3C8;


unsigned __int64 fn_8230E260(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char **ppuVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x114);
  uVar2 = *(unsigned int *)(iVar1 + 0x28);
  if (uVar2 == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20);
    ppuVar5 = &lbl_831CC3C8;
    do {
      cVar3 = fn_822BD338((unsigned __int64)uVar2 + 4,*ppuVar5);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 4;
      ppuVar5 = ppuVar5 + 1;
    } while ((uVar4 & 0xffffffff) < 8);
  }
  else {
    ppuVar5 = &lbl_831CC3C8;
    do {
      cVar3 = fn_822BD338((unsigned __int64)uVar2 + 4,*ppuVar5);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 4;
      ppuVar5 = ppuVar5 + 1;
    } while ((uVar4 & 0xffffffff) < 8);
  }
  return 0;
}

