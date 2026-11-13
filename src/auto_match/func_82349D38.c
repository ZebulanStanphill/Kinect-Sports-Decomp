extern int fn_82250A18();
extern int fn_8242E460();
extern int fn_8242E560();
extern unsigned int lbl_832975B0;


unsigned __int64 fn_82349D38(int param_1)

{
  int iVar1;
  
  iVar1 = fn_8242E560(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc));
  if (((iVar1 == 0) &&
      (iVar1 = fn_8242E460(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc))
      , iVar1 == 0)) &&
     ((iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) + 0xa0),
      iVar1 == 0 || (*(unsigned int *)(iVar1 + 0x40) != 1)))) {
    iVar1 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar1 = fn_82250A18();
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      return 1;
    }
  }
  return 0;
}

