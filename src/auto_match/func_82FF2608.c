extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


unsigned int fn_82FF2608(int param_1)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x48) == 0) {
    uVar1 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xfe0,*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 0x48) = uVar1;
  }
  return *(unsigned int *)(param_1 + 0x48);
}

