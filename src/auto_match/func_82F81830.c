extern int free();
extern int fn_82F67988();
extern int fn_82F71CD0();
extern int fn_82F818F0();
extern unsigned int lbl_8329F734;
extern unsigned int lbl_8329F738;
extern unsigned int uStack_40;


int fn_82F81830(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uStack_40;
  
  iVar3 = 0;
  uStack_40 = 0;
  fn_82F71CD0(1);
  for (iVar4 = 3; iVar4 < lbl_8329F738; iVar4 = iVar4 + 1) {
    iVar1 = iVar4 * 4;
    if (*(int *)(iVar1 + lbl_8329F734) != 0) {
      if (((*(unsigned int *)(*(int *)(iVar1 + lbl_8329F734) + 0xc) & 0x83) != 0) &&
         (iVar2 = fn_82F67988(), iVar2 != -1)) {
        iVar3 = iVar3 + 1;
        uStack_40 = iVar3;
      }
      if (0x13 < iVar4) {
        free(*(unsigned int *)(iVar1 + lbl_8329F734));
        *(unsigned int *)(iVar1 + lbl_8329F734) = 0;
      }
    }
  }
  fn_82F818F0();
  return uStack_40;
}

