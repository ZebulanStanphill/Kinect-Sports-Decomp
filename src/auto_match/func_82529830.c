extern int fn_82522838();
extern int fn_82522A48();
extern int fn_82587B68();
extern int XMemSet();
extern unsigned int lbl_832767CC;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82529830(void)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar2;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  iVar3 = fn_82587B68();
  puVar4 = (unsigned int *)(**(int (***)())(iVar3 + 8))();
  uStack_1c = 0;
  uStack_20 = 0;
  (*(int (**)())*puVar4)(&uStack_20);
  uVar1 = uStack_20;
  if (lbl_832767CC == 0) {
    fn_82522838();
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
  }
  lVar2 = fn_82522A48(lbl_832767CC,uVar1);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    XMemSet(lVar2,0,uVar1);
  }
  return 0;
}

