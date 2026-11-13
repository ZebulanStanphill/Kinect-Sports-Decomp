extern int fn_82250A18();
extern unsigned int lbl_832975B0;


void fn_82436568(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  *(int *)(*(int *)(param_1 + 0x40) + 0x1a0) = param_2;
  if (iVar1 == 0) {
    iVar1 = fn_82250A18();
  }
  if ((*(char *)(iVar1 + 4) != '\0') && (param_2 != 0)) {
    *(int *)(*(int *)(param_1 + 0x40) + 0x168) = *(int *)(*(int *)(param_1 + 0x40) + 0x168) + -1;
  }
  return;
}

