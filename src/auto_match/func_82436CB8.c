extern unsigned int *auStack_d0;
extern int XMemSet();


void fn_82436CB8(int param_1)

{
  int iVar1;
  unsigned char auStack_d0 [208];
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_d0,0,0x40);
}

