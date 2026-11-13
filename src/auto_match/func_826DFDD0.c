extern int fn_826DFA28();
extern int fn_826E7998();


void fn_826DFDD0(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar1 == (int *)0x0) {
    fn_826DFA28(param_1 + 0x14,"Error: Jpeg System is not installed - can't load jpeg image data\n");
  }
  else if (0 < *(int *)(param_2 + 8)) {
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) {
      iVar3 = param_1 + 0x28;
    }
    fn_826E7998(iVar3);
    *(unsigned char *)(iVar3 + 0x38) = 1;
    uVar2 = (*(int (**)())(*piVar1 + 4))(piVar1,*(unsigned int *)(iVar3 + 0x10));
    *(unsigned int *)(param_1 + 0x2b4) = uVar2;
  }
  return;
}

