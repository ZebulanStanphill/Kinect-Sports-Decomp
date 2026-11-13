extern int fn_8251FA58(void *);
extern int fn_82627DB0();


void fn_825FBDB8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(void **)(param_1 + 0x25c) != 0) && (*(int *)(param_1 + 0x24c) == 0)) {
    fn_8251FA58(*(void **)(param_1 + 0x25c));
    *(unsigned int *)(param_1 + 0x25c) = 0;
  }
  if ((*(void **)(param_1 + 0x260) != 0) && (*(int *)(param_1 + 0x250) == 0)) {
    fn_8251FA58(*(void **)(param_1 + 0x260));
    *(unsigned int *)(param_1 + 0x260) = 0;
  }
  if (*(int **)(param_1 + 0x274) != (int *)0x0) {
    (*(int (**)())(**(int **)(param_1 + 0x274) + 8))(*(int **)(param_1 + 0x274));
    puVar1 = *(unsigned int **)(param_1 + 0x274);
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
    iVar2 = 0;
    *(unsigned int *)(param_1 + 0x274) = 0;
    if (0 < *(short *)(param_1 + 6)) {
      iVar3 = param_1 + 0x2a0;
      do {
        if (*(short *)(iVar3 + 0xa2) == -2) {
          fn_82627DB0(param_1,iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1d0;
      } while (iVar2 < *(short *)(param_1 + 6));
    }
  }
  if (*(void **)(param_1 + 0x294) != 0) {
    fn_8251FA58(*(void **)(param_1 + 0x294));
    *(unsigned int *)(param_1 + 0x294) = 0;
  }
  return;
}

