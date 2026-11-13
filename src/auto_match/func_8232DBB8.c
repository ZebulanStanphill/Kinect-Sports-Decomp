void fn_8232DBB8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[2];
  piVar1[2] = 2;
                    /* WARNING: Could not recover jumptable at 0x8232dbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 0x14))(piVar1,iVar2,2);
  return;
}

