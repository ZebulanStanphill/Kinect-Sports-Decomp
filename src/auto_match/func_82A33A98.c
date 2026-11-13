extern unsigned int lbl_83150000;


void _rtinit(void)

{
  int iVar1;
  unsigned int *puVar2;
  
  puVar2 = &lbl_83150000;
  iVar1 = 0;
  do {
    if (iVar1 != 0) {
      return;
    }
    if ((int (**)())*puVar2 != (int (**)())0x0) {
      iVar1 = (*(int (**)())*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (unsigned int *)0x8315000c);
  return;
}

