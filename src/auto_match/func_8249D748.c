extern int fn_8249ABC0();
extern int fn_825200A8();
extern unsigned int lbl_832765BC;


unsigned int fn_8249D748(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = fn_8249ABC0();
  iVar1 = *(int *)(iVar1 + 0x70);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x844) + 0x358) == 0)) {
    iVar2 = fn_825200A8(0xffffffff8326597c);
    if (iVar2 != 0) {
LAB_8249d794:
      uVar4 = 1;
      goto LAB_8249d820;
    }
    uVar4 = *(unsigned int *)(iVar1 + 0xd54);
    if ((unsigned __int64)uVar4 != 0xfffffffffffffff0) {
      if (*(int *)(uVar4 + 0x18) == 0) {
        iVar1 = *(int *)(uVar4 + 0x14);
        if (iVar1 != 0) {
          uVar3 = (unsigned int)(*(int *)(iVar1 + 8) == 9);
          if (*(int *)(iVar1 + 0x2c) != 0) {
            uVar3 = (unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(iVar1 + 0x2c) + 0x2c)) >> 5 & uVar3;
          }
          if (uVar3 != 0) goto LAB_8249d794;
        }
        if (*(int *)(uVar4 + 0x14) != 0) goto LAB_8249d81c;
      }
      uVar4 = 1;
      if (lbl_832765BC != 0) goto LAB_8249d820;
    }
  }
LAB_8249d81c:
  uVar4 = 0;
LAB_8249d820:
  if (*param_1 != param_1[1]) {
    uVar4 = *(unsigned int *)(param_1[1] + -8);
  }
  fn_8249ABC0();
  return (unsigned int)(param_1[0xd] == 0) & uVar4 & 1;
}

