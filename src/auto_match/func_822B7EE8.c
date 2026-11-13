extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822980B0();
extern int fn_822B7E80();
extern int fn_8234AF90();
extern int fn_8234B900();
extern int fn_8234D8D0();
extern int fn_8251FA58();
extern unsigned int lbl_821A7E94;


void fn_822B7EE8(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  int iVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  fn_822B7E80(param_1 + 0x36c);
  *(unsigned char ***)(param_1 + 0x358) = &lbl_821A7E94;
  *(unsigned char ***)(param_1 + 0x34c) = &lbl_821A7E94;
  *(unsigned char ***)(param_1 + 0x340) = &lbl_821A7E94;
  if (*(int *)(param_1 + 0x338) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x330) != 0) {
    fn_822315A0();
  }
  fn_8234AF90(param_1 + 0x2c0);
  lVar2 = 1;
  iVar3 = param_1 + 0x2c0;
  do {
    iVar3 = iVar3 + -0x2c;
    fn_8234B900(iVar3);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  *(unsigned char ***)(param_1 + 0x154) = &lbl_821A7E94;
  *(unsigned char ***)(param_1 + 0x150) = &lbl_821A7E94;
  fn_8234D8D0(param_1 + 0x70);
  fn_82230300(param_1 + 0x34,1,0);
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_822315A0();
  }
  fn_8251FA58(*(unsigned int *)(param_1 + 0x24));
  fn_822980B0(param_1 + 0x14);
  puVar1 = *(unsigned int **)(param_1 + 4);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  return;
}

