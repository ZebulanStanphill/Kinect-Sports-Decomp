extern int fn_82BD3818();
extern int (*lbl_83223F44)();


unsigned __int64 fn_82BD6260(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x50);
  lVar5 = 4;
  do {
    if (*piVar4 != 0) {
      uVar2 = (unsigned int)(*(int *)(*piVar4 + 4) != 0) << (uVar3 & 0x3f) | uVar2;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((lbl_83223F44 == (int (**)())0x0) &&
     (fn_82BD3818(0x48c,0xffffffff83223f44), lbl_83223F44 == (int (**)())0x0)) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = (*lbl_83223F44)(uVar2,1);
  }
  return uVar1;
}

