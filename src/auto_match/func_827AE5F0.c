extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_827AE550();


void fn_827AE5F0(int param_1)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar2 != 0x1f)) ||
     (cVar3 = (**(int (***)())(**(int **)(param_1 + 8) + 0x40))(), cVar3 != '\0')) {
    uVar1 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x40,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_827AE550(uVar1,*(unsigned int *)(param_1 + 0x18));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar2);
  if (iVar2 != 0) {
    fn_826824B0(iVar2);
  }
  return;
}

