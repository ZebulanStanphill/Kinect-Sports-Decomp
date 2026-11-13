extern int fn_8249ABC0();
extern int fn_825200A8();
extern unsigned int lbl_832765BC;


unsigned __int64 fn_8249D878(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = fn_8249ABC0();
  iVar1 = *(int *)(iVar1 + 0x70);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x844) + 0x358) == 0)) {
    if ((param_1 != 0) && (iVar2 = fn_825200A8(0xffffffff8326597c), iVar2 != 0)) {
      return 1;
    }
    iVar1 = *(int *)(iVar1 + 0xd54);
    if (((iVar1 != -0x10) && (*(int *)(iVar1 + 0x18) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x14), iVar2 != 0)) {
      uVar3 = (unsigned int)(*(int *)(iVar2 + 8) == 9);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        uVar3 = (unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(iVar2 + 0x2c) + 0x2c)) >> 5 & uVar3;
      }
      if (uVar3 != 0) {
        return 1;
      }
    }
    if ((((param_1 != 0) && (iVar1 != -0x10)) &&
        ((*(int *)(iVar1 + 0x18) != 0 || (*(int *)(iVar1 + 0x14) == 0)))) && (lbl_832765BC != 0)) {
      return 1;
    }
  }
  return 0;
}

