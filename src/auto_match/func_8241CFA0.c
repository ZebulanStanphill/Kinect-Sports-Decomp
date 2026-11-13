typedef unsigned char bool;
extern int fn_82250A18();
extern int fn_82359928();
extern int fn_82417D18();
extern int fn_82417F58();
extern int fn_8241EE50();
extern unsigned char fn_8288B760(void *);
extern unsigned int lbl_832975B0;


void fn_8241CFA0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  
  iVar2 = fn_82417F58();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))) {
    if (*(void **)(iVar2 + 0x168) != 0) {
      uVar3 = fn_8288B760(*(void **)(iVar2 + 0x168));
    } else { uVar3 = *(int *)(iVar2 + 0x16c); }
    if (uVar3 != 0) {
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      if (*(char *)(iVar4 + 4) == '\0') {
        fn_8241EE50(param_1,iVar2);
        iVar2 = *param_1;
        if (*(int *)(iVar2 + 0xcb8) != 0) {
          fn_82417D18(param_1,1,0,0);
          fn_82359928(*param_1,0);
        } else {
          fn_82359928(iVar2,1);
        }
      }
    }
  }
  return;
}

