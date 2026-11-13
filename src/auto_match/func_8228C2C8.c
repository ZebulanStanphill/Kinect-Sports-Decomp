extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8228C2C8(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  piVar2 = (int *)fn_82279C58(auStack_40,param_1);
  iVar1 = *piVar2;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (iVar1 != 0) {
    fn_82273CD8(&stack_pair_30.first,5);
    uStack_28 = param_2;
    puVar3 = (unsigned int *)fn_82279C58(auStack_38,param_1);
    fn_82672C20(*puVar3,0xffffffff821a89ac,&stack_pair_30.first,1);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
  }
  fn_82273C88(&stack_pair_30.first);
  return;
}

