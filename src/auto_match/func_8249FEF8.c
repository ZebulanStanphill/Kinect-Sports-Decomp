extern int fn_82536288();
extern int XMemSet();


void fn_8249FEF8(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    cVar1 = (**(int (***)())(**(int **)(param_1 + 0x78) + 4))();
    if (cVar1 == '\0') {
      (**(int (***)())**(unsigned int **)(param_1 + 0x78))();
    }
    fn_82536288((unsigned int *)(param_1 + 0x78));
  }
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x10,0,0x14);
}

