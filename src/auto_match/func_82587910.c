extern int fn_82522D98();
extern int fn_82522ED8();
extern unsigned int lbl_821BF4BC;
extern unsigned int lbl_831C0BB4;
extern unsigned int lbl_831C0BC0;
extern unsigned int lbl_831C0BC4;
extern unsigned int lbl_831C0BCC;
extern unsigned int lbl_831C0BD0;


void fn_82587910(void)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  
  if (lbl_831C0BCC != 0) {
    fn_82522ED8();
    lbl_831C0BCC = 0;
    lbl_831C0BD0 = 0;
  }
  (&lbl_831C0BC4)[lbl_831C0BC0] = &lbl_821BF4BC;
  lVar1 = (unsigned __int64)lbl_831C0BC0 + 1;
  uVar3 = (unsigned __int64)lbl_831C0BB4;
  lbl_831C0BC0 = (unsigned int)lVar1;
  if (lVar1 != 0) {
    piVar2 = (int *)&lbl_831C0BC0;
    do {
      piVar2 = piVar2 + 1;
      uVar3 = *(unsigned int *)(*piVar2 + 4) + uVar3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(uVar3 * 0xc);
}

