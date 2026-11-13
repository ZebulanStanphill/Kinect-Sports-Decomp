void fn_82A4FC50(int param_1,unsigned int param_2,int param_3,int param_4,
                  int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  if (param_2 < *(unsigned int *)(param_1 + 0x34)) {
    puVar2 = *(unsigned int **)(param_1 + 0x2c);
    uVar1 = param_2 & 0xffffffff;
    while (uVar1 != 0) {
      puVar2 = (unsigned int *)puVar2[1];
      param_2 = param_2 - 1;
      uVar1 = param_2;
    }
    puVar2 = (unsigned int *)*puVar2;
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x82a4fca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*(int *)*puVar2 + 8))((int *)*puVar2,0,param_5,param_3,param_4);
  return;
}

