#define true 1
extern unsigned int *lbl_832635C0;


unsigned __int64 fn_82F71D98(void)

{
  char cVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  cVar1 = *lbl_832635C0;
  lVar4 = (__int64)cVar1;
  if (lVar4 != 0) {
    if (('/' < cVar1) && (cVar1 < ':')) {
      lbl_832635C0 = lbl_832635C0 + 1;
      return lVar4 - 0x2f;
    }
    uVar2 = 0;
    while( true ) {
      iVar5 = (int)lVar4;
      if (iVar5 == 0x40) {
        lbl_832635C0 = lbl_832635C0 + 1;
        return uVar2;
      }
      if (iVar5 == 0) break;
      if ((iVar5 < 0x41) || (0x50 < iVar5)) {
        return 0xffffffffffffffff;
      }
      lbl_832635C0 = lbl_832635C0 + 1;
      lVar3 = (uVar2 & 0xfffffff) * 0x10 + lVar4;
      lVar4 = (__int64)*lbl_832635C0;
      uVar2 = lVar3 - 0x41;
    }
  }
  return 0;
}

