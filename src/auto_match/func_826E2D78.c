extern unsigned int *auStack_40;
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826E17F0();
extern int fn_826E1870();
extern int fn_826E7A08();
extern int fn_826F6710();
extern int fn_826F6798();
extern int fn_826FA590();


void fn_826E2D78(int param_1)

{
  __int64 lVar1;
  char cVar3;
  __int64 lVar2;
  int iVar4;
  unsigned int auStack_40 [16];
  
  fn_826A9280(param_1 + 0x14,0xffffffff8200d0a8);
  iVar4 = *(int *)(param_1 + 0x314);
  if (iVar4 == 0) {
    iVar4 = param_1 + 0x28;
  }
  lVar1 = fn_826FA590(iVar4,*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x2c));
  cVar3 = fn_826F6710(iVar4);
  if (cVar3 != '\0') {
    lVar1 = lVar1 + 4;
  }
  if (*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x2c) < 6) {
    lVar2 = fn_826E1870(param_1,lVar1);
  }
  else {
    lVar2 = fn_826E17F0();
  }
  if (cVar3 == '\0') {
    fn_826E7A08(iVar4,lVar2 + 4,lVar1);
  }
  else {
    fn_826E7A08(iVar4,lVar2 + 8,lVar1 + -4);
    fn_826F6798(lVar2 + 4);
  }
  auStack_40[0] = (unsigned int)lVar2;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_40);
  return;
}

