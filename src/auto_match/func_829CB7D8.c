extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;


unsigned __int64 fn_829CB7D8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321732c);
  uVar4 = 1;
  if (param_1 != 0) {
    lbl_83217334 = 1;
  }
  piVar3 = &lbl_83217324;
  lVar5 = 2;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) == 0)) {
      *(unsigned int *)(iVar1 + 0x34) = 1;
    }
    piVar3 = piVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  sync(0);
  if ((lbl_83217324 == 0) && (lbl_83217328 == 0)) {
    uVar4 = 0;
  }
  KfReleaseSpinLock(0xffffffff8321732c,uVar2);
  return uVar4;
}

