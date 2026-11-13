extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_83029008(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 != *(int *)(param_1 + 0x8c)) {
    do {
      uVar2 = lbl_831BC768;
      puVar1 = *(unsigned int **)(iVar3 + 4);
      if (puVar1 != (unsigned int *)0x0) {
        (*(int (**)())*puVar1)(puVar1,0);
        fn_82FA5190(uVar2,puVar1);
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(param_1 + 0x8c));
  }
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x88);
  return;
}

