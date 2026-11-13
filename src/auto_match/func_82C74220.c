extern int fn_82C53960();
extern int fn_82C562F0();
extern int memset();


unsigned __int64 fn_82C74220(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0x3c4c) == 0) {
    uVar1 = fn_82C53960(0x48,0);
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(uVar1,0,0x48);
    }
    *(int *)(param_1 + 0x3c4c) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) goto LAB_82c74280;
LAB_82c74274:
    uVar2 = 0xfffffffffffffff7;
  }
  else {
LAB_82c74280:
    if (*(int *)(param_1 + 0x3c58) == 0) {
      iVar3 = fn_82C562F0(lVar4,0x38,0xffffffff82196582);
      *(int *)(param_1 + 0x3c58) = iVar3;
      if (iVar3 == 0) goto LAB_82c74274;
    }
    if (*(int *)(param_1 + 0x3c60) == 0) {
      iVar3 = fn_82C562F0(lVar4,400,0xffffffff82196582);
      *(int *)(param_1 + 0x3c60) = iVar3;
      if (iVar3 == 0) {
        return 0xfffffffffffffff7;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

