extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern int fn_82F515F0();
extern int fn_82F541C8();
extern unsigned int iStack_3c;
extern unsigned int lbl_82165B20;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_82F51710(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  struct { unsigned int first; unsigned int second; } stack_pair_38;


  puVar3 = (unsigned int *)fn_8265C9E0(4);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_82165B20;
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  fn_82F515F0(&stack_pair_40.first,puVar3);
  iVar2 = stack_pair_40.second;
  uVar1 = stack_pair_40.first;
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  fn_82517978(&stack_pair_38.first,stack_pair_40.first,stack_pair_40.second,0);
  fn_82F541C8(param_2,&stack_pair_38.first);
  *param_1 = 0;
  param_1[1] = 0;
  fn_8256E1D8(param_1,uVar1,iVar2);
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  return param_1;
}
