extern int fn_82250A18();
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;


void fn_82436190(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x19c) = param_2;
  if (iVar1 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
  }
  return;
}

