extern int fn_828A1D70();


void fn_828A6468(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = fn_828A1D70();
  if ((unsigned int *)(iVar1 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar1 + 0xc) = *param_2;
    *(unsigned char *)(iVar1 + 0x10) = 0;
    if (*(char *)(param_2 + 1) != '\0') {
      if ((unsigned int *)(iVar1 + 0x14) != (unsigned int *)0x0) {
        *(unsigned int *)(iVar1 + 0x14) = param_2[2];
      }
      *(unsigned char *)(iVar1 + 0x10) = 1;
    }
    *(unsigned int *)(iVar1 + 0x18) = param_2[3];
  }
  return;
}

