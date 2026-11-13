unsigned __int64 fn_83000608(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if ((*(unsigned char *)(param_1 + 0x3e) & 0x80) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x83000634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(int (***)())(*piVar1 + 0xfc))(piVar1);
      return uVar2;
    }
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
}

