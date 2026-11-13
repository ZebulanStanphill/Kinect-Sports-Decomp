extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F68048();
extern int fn_82F6E1C8();
extern int fn_82F6F960();


unsigned __int64 fn_82F680A0(unsigned __int64 param_1)

{
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  
  iVar3 = fn_82F6F960();
  if (iVar3 == 0) {
LAB_82f680c4:
    uVar1 = 0xffffffff82168320;
  }
  else {
    if (*(int *)(iVar3 + 0x24) == 0) {
      iVar4 = fn_82F6E1C8(0x86,1);
      *(int *)(iVar3 + 0x24) = iVar4;
      if (iVar4 == 0) goto LAB_82f680c4;
    }
    uVar1 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x24);
    uVar2 = fn_82F68048(param_1);
    iVar3 = fn_82F664B0(uVar1,0x86,uVar2);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return uVar1;
}

