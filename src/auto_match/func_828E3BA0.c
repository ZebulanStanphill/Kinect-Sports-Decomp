extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_828E6EC0();
extern int fn_828E7140();
extern unsigned int iStack_34;
extern unsigned int lbl_820271B0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828E3BA0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned char auStack_38 [4];
  int iStack_34;

  puVar2 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    fn_828E6EC0(puVar2,0xffffffff8315a2ec,param_1 + 8);
    *puVar2 = &lbl_820271B0;
    puVar2[6] = *(unsigned int *)(param_2 + 0x30);
  }
  puVar2 = (unsigned int *)fn_828E7140(auStack_38,puVar2);
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  fn_82517978(&stack_pair_40.first,*puVar2,puVar2[1],0);
  iVar1 = *(int *)(param_2 + 0xc);
  *(unsigned int *)(param_2 + 0xc) = stack_pair_40.second;
  *(unsigned int *)(param_2 + 8) = stack_pair_40.first;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  *(int *)(*(int *)(param_2 + 0x30) * 4 + *(int *)(param_1 + 0x28)) = param_2;
  return;
}
