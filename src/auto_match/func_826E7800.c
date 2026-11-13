extern int memmove();
extern int memset();


unsigned __int64 fn_826E7800(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      uVar2 = (**(int (***)())(**(int **)(param_1 + 0x10) + 0x10))();
      *(unsigned int *)(param_1 + 0x34) = uVar2;
      *(unsigned char *)(param_1 + 0x38) = 0;
    }
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if (uVar4 < *(unsigned int *)(param_1 + 0x30)) {
    memmove((unsigned __int64)*(unsigned int *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x3c) + uVar4,
                 *(unsigned int *)(param_1 + 0x30) - uVar4);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
  }
  else {
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x40) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
    iVar3 = (**(int (***)())(*piVar1 + 0x28))
                      (piVar1,(unsigned __int64)*(unsigned int *)(param_1 + 0x3c) +
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x30),lVar5);
    if (iVar3 < (int)lVar5) {
      if (0 < iVar3) {
        *(int *)(param_1 + 0x30) = iVar3 + *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
      }
                    /* WARNING: Subroutine does not return */
      memset((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + (unsigned __int64)*(unsigned int *)(param_1 + 0x30),0,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x40) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30));
    }
    *(int *)(param_1 + 0x30) = iVar3 + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
    return 1;
  }
  *(int *)(param_1 + 0x3c) = param_1 + 0x44;
  *(unsigned int *)(param_1 + 0x40) = 0x200;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x44,0,0x200);
}

