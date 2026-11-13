int fn_82FB4550(int param_1)

{
  int *piVar1;
  int uVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x74) + 4) + 0x1c);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82fb4570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(int (**)())(*piVar1 + 0x18))(piVar1);
    return uVar2;
  }
  return 0;
}

