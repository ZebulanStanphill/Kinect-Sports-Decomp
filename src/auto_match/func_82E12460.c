int fn_82E12460(int self)

{
  int uVar1;
  
  if (*(int **)(self + 0x18) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82e1247c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(self + 0x18) + 0xc))(*(int **)(self + 0x18));
    return uVar1;
  }
  return 0;
}

