extern int fn_82397F88();
extern int fn_825604A0();


void fn_82492ED0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x860) != 1) {
    *(unsigned int *)(iVar1 + 0x860) = 1;
    iVar2 = fn_82397F88(iVar1);
    if (iVar2 != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x30) + 8);
      if (*(int *)(iVar1 + 0x22c) != 0) {
        fn_825604A0(iVar1 + 0x20);
        *(unsigned int *)(iVar1 + 0x22c) = 0;
      }
    }
  }
  return;
}

