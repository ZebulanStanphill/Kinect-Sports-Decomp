extern int fn_82F678E0();
extern int fn_82F6ACF0();
extern int fn_82F71CD0();
extern int fn_82F8399C();
extern int fn_82F839EC();
extern unsigned int lbl_8329F734;
extern unsigned int uStack_2c;


int fn_82F838C0(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uStack_2c;
  
  uStack_2c = 0;
  fn_82F71CD0(1);
  uVar2 = 0xffffffff8329f738;
  for (iVar3 = 0; iVar3 < *(int *)uVar2; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(iVar3 * 4 + lbl_8329F734);
    if ((iVar1 != 0) && ((*(unsigned int *)(iVar1 + 0xc) & 0x83) != 0)) {
      fn_82F6ACF0(iVar3);
      iVar1 = *(int *)(iVar3 * 4 + lbl_8329F734);
      if (((*(unsigned int *)(iVar1 + 0xc) & 0x83) != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
        fn_82F678E0();
        uStack_2c = uStack_2c + 1;
      }
      fn_82F839EC();
    }
  }
  fn_82F8399C();
  return uStack_2c;
}

