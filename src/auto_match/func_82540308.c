extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int XMemSet();
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;


void fn_82540308(void)

{
  int *piVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  
  if (lbl_832767CC == (int *)0x0) {
    fn_82522838();
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
    }
  }
  piVar1 = lbl_832767CC;
  if (*lbl_832767CC == 0) {
    fn_82522838();
  }
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(piVar1 + 2,1,lVar2 + 1);
  fn_82A1BB18();
  iVar4 = fn_8259A230();
  iVar4 = fn_8259C458(*(unsigned int *)(&lbl_8326B7D0 + iVar4 * 4));
  uVar5 = *(unsigned int *)(iVar4 + 0x28);
  *(unsigned int *)(iVar4 + 0x28) = 0x10;
  uVar3 = fn_82522CF8(iVar4,0xac40);
  if (0x10 < uVar5) {
    uVar5 = 0x10;
  }
  *(unsigned int *)(iVar4 + 0x28) = uVar5;
  fn_82A1BB18();
  fn_8259C738(piVar1 + 2);
                    /* WARNING: Subroutine does not return */
  XMemSet(uVar3,0,0xac40);
}

