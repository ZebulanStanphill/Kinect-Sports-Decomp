extern unsigned int *auStack_40;
extern int fn_82329730();
extern int fn_82359C18();
extern unsigned int uStack_30;


void fn_8238EBF8(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  if ((param_1[0x23] != 0) && (param_1[0x23] != 0)) {
    fn_82359C18(*(unsigned int *)(param_1[0x22] * 4 + param_1[0x20]));
    iVar1 = param_1[0x22];
    param_1[0x22] = iVar1 + 1U;
    if ((unsigned int)param_1[0x21] <= iVar1 + 1U) {
      param_1[0x22] = 0;
    }
    uVar2 = param_1[0x23];
    param_1[0x23] = (int)((unsigned __int64)uVar2 - 1);
    if ((unsigned __int64)uVar2 - 1 == 0) {
      param_1[0x22] = 0;
    }
  }
  uStack_30 = 0;
  fn_82329730((unsigned __int64)(unsigned int)param_1[0x1e] + 0x28,auStack_40);
  fn_82359C18(auStack_40);
  uStack_30 = 0;
  fn_82329730((unsigned __int64)(unsigned int)param_1[0x1e] + 0xc0,auStack_40);
  fn_82359C18(auStack_40);
  uStack_30 = 0;
  fn_82329730((unsigned __int64)(unsigned int)param_1[0x1e] + 0x168,auStack_40);
  fn_82359C18(auStack_40);
  uStack_30 = 0;
  fn_82329730((unsigned __int64)(unsigned int)param_1[0x1e] + 0x1d8,auStack_40);
  fn_82359C18(auStack_40);
  uStack_30 = 0;
  fn_82329730((unsigned __int64)(unsigned int)param_1[0x1e] + 0x268,auStack_40);
  fn_82359C18(auStack_40);
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_1 != piVar3);
    param_1[4] = 0;
  }
  param_1[4] = 0;
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_1 + 6 != piVar3);
    param_1[10] = 0;
  }
  param_1[10] = 0;
  piVar3 = (int *)param_1[0x10];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_1 + 0xc != piVar3);
    param_1[0x10] = 0;
  }
  param_1[0x10] = 0;
  piVar3 = (int *)param_1[0x16];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_1 + 0x12 != piVar3);
    param_1[0x16] = 0;
  }
  param_1[0x16] = 0;
  piVar3 = (int *)param_1[0x1c];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_1 + 0x18 != piVar3);
    param_1[0x1c] = 0;
  }
  param_1[0x1c] = 0;
  return;
}

