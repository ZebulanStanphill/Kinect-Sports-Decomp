extern int fn_82250A18();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D44F8;
extern int (*lbl_83276798)();
extern unsigned int lbl_832975B0;


unsigned __int64 fn_82358810(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) == '\0') {
        if (lbl_83276798 == (int (**)())0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*lbl_83276798)();
        }
        if ((iVar2 != 0) && (lbl_831D44F8 == ltcg_pool_0_0f)) {
          return 1;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

