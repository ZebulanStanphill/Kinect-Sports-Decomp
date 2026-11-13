extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_825604A0();
extern unsigned int lbl_832975B0;


void fn_82373380(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x9d8) != param_2) {
    *(int *)(param_1 + 0x9d8) = param_2;
    iVar1 = fn_8225F160();
    if (((*(int *)(param_1 + 0x9d8) != 0) && (*(int *)(iVar1 + 0x40) == 1)) &&
       (*(int *)(*(int *)(param_1 + 0x30) + 8) != 0)) {
      iVar1 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar1 = fn_82250A18();
      }
      if (*(char *)(iVar1 + 4) == '\0') {
        iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 8);
        if (*(int *)(iVar1 + 0x22c) != 0) {
          fn_825604A0(iVar1 + 0x20);
          *(unsigned int *)(iVar1 + 0x22c) = 0;
        }
      }
    }
  }
  return;
}

