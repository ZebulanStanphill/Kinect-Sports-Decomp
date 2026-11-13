void fn_82BD97C0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x48);
    piVar2 = *(int **)(param_1 + 0x48);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x50);
    piVar2 = *(int **)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x82bd980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*piVar2 + 0x18))(uVar1,param_3,param_4,param_5,0);
  return;
}

