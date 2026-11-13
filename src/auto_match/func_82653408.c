extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_82645688();
extern int fn_82657168();


void fn_82653408(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = KeGetCurrentProcessType();
  if (iVar1 != 2) {
    fn_82657168(param_1);
  }
  if (*(unsigned int *)(param_1 + 0x30) != 0) {
    fn_8263A508(param_1,0);
    uVar2 = 0;
    do {
      fn_8263A1B8(param_1,uVar2,0);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < 4);
    fn_82645688(param_1);
  }
  if (*(unsigned int *)(param_1 + 0x3ac0) != 0) {
    fn_8262FEC8(*(unsigned int *)(param_1 + 0x3ac0));
    *(unsigned int *)(param_1 + 0x3ac0) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x3ac4) != 0) {
    fn_8262FEC8(*(unsigned int *)(param_1 + 0x3ac4));
    *(unsigned int *)(param_1 + 0x3ac4) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x3abc) != 0) {
    fn_8262FEC8(*(unsigned int *)(param_1 + 0x3abc));
    *(unsigned int *)(param_1 + 0x3abc) = 0;
  }
  return;
}

