extern int fn_82522D98();
extern int fn_8262F8D8();
extern int fn_8262FEC8();
extern int fn_82630040();


void fn_825D95F0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x20);
    if (uVar1 == 0) {
      lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28) * 0x28;
    }
    else {
      if ((uVar1 != 1) && (2 < uVar1)) {
        if (uVar1 != 3) {
          return;
        }
        lVar3 = fn_82630040((unsigned __int64)*(unsigned int *)(param_1 + 0x28) * 0x28,0,0);
        *(int *)(param_1 + 0x134) = (int)lVar3;
        if ((__int64)-(unsigned __int64)(lVar3 == 0) < 0) {
          return;
        }
        *(unsigned int *)(param_1 + 0x13c) = 0;
        iVar2 = *(int *)(param_1 + 0x134);
        if (*(int *)(param_1 + 0x13c) == 0) {
          fn_8262FEC8();
          *(unsigned int *)(param_1 + 0x134) = 0;
          return;
        }
        uVar1 = *(unsigned int *)(iVar2 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
        fn_8262F8D8(iVar2,10,0,uVar1,0,uVar1,*(unsigned int *)(iVar2 + 0x1c) & 0x3fffffc,0);
      }
      lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0x7ffffff) << 5;
    }
    lVar3 = fn_82630040(lVar3,0,0);
    *(int *)(param_1 + 0x134) = (int)lVar3;
    if (-1 < (__int64)-(unsigned __int64)(lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98((unsigned __int64)*(unsigned int *)(param_1 + 0x34) * 0x58);
    }
  }
  return;
}

