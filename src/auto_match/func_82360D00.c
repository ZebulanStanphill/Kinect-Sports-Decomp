extern int fn_82250A18();
extern int fn_82358810();
extern int fn_82417F58();
extern int fn_82419C70();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


unsigned __int64 fn_82360D00(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82417F58(*(unsigned int *)(param_1 + 0x2b20));
  if (param_2 == 0) {
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar4 = *(unsigned int *)(iVar2 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (((uVar4 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
         ((iVar3 = fn_82419C70(*(unsigned int *)(param_1 + 0x2b20)), iVar3 != 0 ||
          ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))))) {
        uVar1 = fn_82358810(param_1,0);
        return uVar1;
      }
    }
  }
  else {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (((*(char *)(iVar3 + 4) == '\0') || (*(int *)(iVar2 + 0x398) == 0)) && (iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar4 = *(unsigned int *)(iVar2 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if ((uVar4 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

