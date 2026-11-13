extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FAFA90(int param_1)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 4) != 0) {
      *(int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
      fn_82FA5190(lbl_831BC768,*(unsigned int *)(iVar1 + 4));
      *(unsigned int *)(iVar1 + 4) = 0;
      *(unsigned int *)(iVar1 + 8) = 0;
      *(unsigned int *)(iVar1 + 0xc) = 0;
    }
    uVar3 = lbl_831BC768;
    puVar2 = *(unsigned int **)(param_1 + 0x9c);
    if (puVar2 != (unsigned int *)0x0) {
      (*(int (**)())*puVar2)(puVar2,0);
      fn_82FA5190(uVar3,puVar2);
    }
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

