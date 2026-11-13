void fn_827DECE0(int param_1,int (**UNRECOVERED_JUMPTABLE)())

{
  unsigned int uVar1;
  int *piVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < 0x40) {
      piVar2 = *(int **)((uVar1 + 0x295) * 4 + *(int *)(param_1 + 0xc));
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x827da650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(*piVar2 + 0x24))(piVar2,*(unsigned int *)(param_1 + 4),UNRECOVERED_JUMPTABLE);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x827da65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(unsigned int *)(param_1 + 4),0);
  return;
}

