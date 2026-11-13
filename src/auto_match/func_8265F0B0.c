extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern unsigned int *auStack_3c;
extern int fn_82230180();
extern int fn_822402E8();
extern int fn_8265C9E0();
extern int fn_8265F1B0();
extern int fn_8265F1E0();
extern int fn_8265F798();
extern int fn_8265F8D8();
extern int fn_8265F9A0();
extern int fn_8265FA90();
extern int fn_8265FAD0();
extern int fn_8265FB98();
extern int fn_826666A0();
extern unsigned int iStack_18;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_14;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8265F0B0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int iVar3;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_40;
  unsigned char auStack_3c [12];
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  int iStack_18;
  unsigned int uStack_14;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  puVar2 = (unsigned int *)fn_8265F9A0(auStack_20,param_1,&stack0x0000001c);
  stack_pair_50.first = *puVar2;
  uVar1 = fn_8265F8D8(auStack_1c,uStack00000014);
  cVar4 = fn_8265FA90(&stack_pair_50.first,uVar1);
  if (cVar4 == '\0') {
    iStack_18 = fn_8265C9E0(0x10);
    if (iStack_18 == 0) {
      uStack_14 = 0;
    }
    else {
      uStack_14 = fn_8265FAD0(iStack_18);
    }
    stack_pair_50.second = uStack_14;
    puVar2 = (unsigned int *)fn_8265F798(uStack00000014,&stack0x0000001c);
    *puVar2 = stack_pair_50.second;
  }
  else {
    iVar3 = fn_826666A0(&stack_pair_50.first);
    stack_pair_50.second = *(unsigned int *)(iVar3 + 4);
  }
  fn_8265F1B0(&uStack_40);
  uStack_40 = uStack00000024;
  fn_822402E8(auStack_3c,uStack0000002c);
  fn_8265FB98(stack_pair_50.second,&uStack_40);
  fn_8265F1E0(&uStack_40);
  fn_82230180(uStack0000002c);
  return;
}

