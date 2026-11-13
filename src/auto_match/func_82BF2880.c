extern int fn_82BE6638();
extern int fn_82BE6BD8();
extern int fn_82BF2298();
extern int fn_82BF23F8();
extern int fn_82BF26B0();
extern int memset();


void fn_82BF2880(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) != 0x300)) {
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    memset(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x30) == 0) {
      fn_82BF26B0(param_1);
    }
    else if (*(int *)(param_1 + 0x34) == 0) {
      fn_82BF23F8(param_1);
    }
    else {
      fn_82BF2298();
    }
    return;
  }
  *(unsigned int *)(param_1 + 8) = 1;
  if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x40) == *(int *)(iVar1 + 0x24))) {
    fn_82BE6BD8();
  }
  else {
    fn_82BE6638(iVar1,6);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
}

