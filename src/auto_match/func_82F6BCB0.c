extern int fn_82F6ACF0();
extern int fn_82F6BC30();
extern int fn_82F6BDD4();
extern int fn_82F6BE24();
extern int fn_82F71CD0();
extern unsigned int iStack00000014;
extern unsigned int lbl_8329F734;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


int fn_82F6BCB0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iStack00000014;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  uStack_3c = 0;
  uStack_38 = 0;
  iStack00000014 = param_1;
  fn_82F71CD0(1);
  uVar3 = 0xffffffff8329f738;
  for (iVar4 = 0; iVar4 < *(int *)uVar3; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(iVar4 * 4 + lbl_8329F734);
    if ((iVar2 != 0) && ((*(unsigned int *)(iVar2 + 0xc) & 0x83) != 0)) {
      fn_82F6ACF0(iVar4);
      uVar1 = *(unsigned int *)(*(int *)(iVar4 * 4 + lbl_8329F734) + 0xc);
      uVar3 = (unsigned __int64)uVar1 & 0x83;
      if ((int)uVar3 != 0) {
        if (param_1 == 1) {
          iVar2 = fn_82F6BC30();
          if (iVar2 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((param_1 == 0) && ((uVar1 & 2) != 0)) &&
                (iVar2 = fn_82F6BC30(), iVar2 == -1)) {
          uStack_38 = -1;
        }
      }
      fn_82F6BE24();
    }
  }
  fn_82F6BDD4();
  if (iStack00000014 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}

