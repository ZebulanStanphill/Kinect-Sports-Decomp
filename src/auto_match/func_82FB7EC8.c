static __forceinline void clear(unsigned short *f) { *f &= 0x7fff; }


void fn_82FB7EC8(unsigned param_1)

{
 unsigned self = param_1;

  unsigned int iVar1;
  
  iVar1 = *(int *)(self + 0x1c);
  if (iVar1 != *(int *)(self + 0x20)) {
    do {
      (*(int (**)())(**(int **)(iVar1 + 4) + 4))(*(int **)(iVar1 + 4));
      iVar1 = iVar1 + 8;
    } while (iVar1 != *(int *)(self + 0x20));
  }
  *(unsigned int *)(self + 0x20) = *(unsigned int *)(self + 0x1c);
  clear((unsigned short *)(self + 0x28));
  return;
}

