extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82489D60();
extern int fn_82517978();
extern int fn_82522588();
extern int fn_82522ED8();
extern int fn_827D5070();
extern int fn_827D50B8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int uStack_38;


void fn_8259AC38(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int auStack_40 [2];
  struct { unsigned int first; int second; } stack_pair_38;

  int iStack_30;
  int iStack_2c;
  
  fn_82522588(&iStack_30,param_2 + 0x134);
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  fn_82517978(&stack_pair_38.first,*param_1,param_1[1],0);
  uVar1 = stack_pair_38.first;
  iVar2 = fn_827D50B8(stack_pair_38.first);
  if (iVar2 == 0) {
    auStack_40[0] = fn_827D5070(uVar1);
    fn_82489D60(iStack_30 + 0xac,auStack_40);
  }
  else if (*(char *)(iStack_30 + 0xc2) == '\0') {
    *(int *)(iStack_30 + 0x90) = iVar2;
    *(unsigned char *)(iStack_30 + 0xc2) = 1;
  }
  *(int *)(iStack_30 + 0x8c) = *(int *)(iStack_30 + 0x8c) + 1;
  if (stack_pair_38.second != 0) {
    fn_822315A0();
  }
  fn_82522ED8(param_2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

