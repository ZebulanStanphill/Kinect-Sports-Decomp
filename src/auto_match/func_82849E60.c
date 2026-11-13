extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8265C9E0();
extern int fn_8284A0B8();
extern int fn_8284A7C0();
extern int fn_8284C288();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_b0;
extern unsigned int lbl_832112EC;


unsigned int fn_82849E60(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iStack00000014;
  int iStack_b0;
  unsigned int *puStack_ac;
  unsigned char auStack_a0 [28];
  struct { int first; int second; } stack_pair_84;

  unsigned char auStack_70 [64];
  int iStack_30;
  int iStack_2c;
  unsigned int *puStack_18;
  
  iStack00000014 = param_1;
  fn_82230110(auStack_a0,*(unsigned int *)(param_1 + 0x20));
  fn_8284A7C0(&iStack_b0,lbl_832112EC,auStack_a0);
  fn_82230300(auStack_a0,1,0);
  iStack_2c = lbl_832112EC;
  stack_pair_84.first = *(int *)(lbl_832112EC + 4);
  iStack_30 = stack_pair_84.first;
  fn_82BA02A8(&stack_pair_84.first,lbl_832112EC);
  if (stack_pair_84.first == iStack_b0) {
    stack_pair_84.second = fn_8265C9E0(8);
    if (stack_pair_84.second == 0) {
      puStack_18 = (unsigned int *)0x0;
    }
    else {
      puStack_18 = (unsigned int *)fn_8284A0B8(stack_pair_84.second,iStack00000014);
    }
    puStack_ac = puStack_18;
    fn_82230110(auStack_70,*(unsigned int *)(iStack00000014 + 0x20));
    puVar2 = (unsigned int *)fn_8284C288(lbl_832112EC,auStack_70);
    *puVar2 = puStack_ac;
    fn_82230300(auStack_70,1,0);
    uVar1 = *puStack_ac;
  }
  else {
    puVar2 = *(unsigned int **)(iStack_b0 + 0x28);
    puVar2[1] = puVar2[1] + 1;
    uVar1 = *puVar2;
  }
  return uVar1;
}

