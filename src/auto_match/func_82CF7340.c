void fn_82CF7340(int self,int param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (iVar1 <= 0x2000) {
    if (iVar1 <= 0x220) {
      iVar1 = (int)*(char *)((iVar1 + 0xf >> 4) + self + 0xd8);
    }
    else {
      iVar1 = *(int *)(((iVar1 + -1 >> 10) + 0x3f) * 4 + self);
    }
    param_3 = *(unsigned int *)((iVar1 + 0x25) * 4 + self);
  }
                    /* WARNING: Could not recover jumptable at 0x82cf7398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(self + 4) + 0x2c))(*(int **)(self + 4),param_2,param_3);
  return;
}

