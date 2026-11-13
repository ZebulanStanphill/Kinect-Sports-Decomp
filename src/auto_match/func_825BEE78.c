extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256BE68();
extern int fn_8265C9E0();
extern int fn_827D9ED8();
extern int fn_827DE858();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CAC64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned int * fn_825BEE78(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  struct { unsigned int first; int second; } stack_pair_60;

  struct { unsigned int first; unsigned int second; } stack_pair_58;


  puVar6 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    fn_82517978(&stack_pair_60.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    uVar1 = param_2[0x1a];
    uVar2 = *(unsigned int *)(param_1 + 0x54);
    uVar7 = fn_827D9ED8(param_2);
    iVar5 = stack_pair_60.second;
    stack_pair_58.first = 0;
    stack_pair_58.second = 0;
    uVar3 = *(unsigned int *)(param_1 + 0x38);
    uVar4 = *(unsigned int *)(param_1 + 0x34);
    fn_82517978(&stack_pair_58.first,stack_pair_60.first,stack_pair_60.second,0);
    fn_827DE858(puVar6,&stack_pair_58.first,uVar2);
    puVar6[5] = uVar4;
    puVar6[6] = uVar3;
    puVar6[7] = 0;
    *puVar6 = &lbl_821CAC64;
    puVar6[9] = uVar7;
    puVar6[10] = uVar1;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    fn_8256BE68(puVar6 + 0xb,0);
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    (**(int (***)())*param_2)(param_2,1);
  }
  return puVar6;
}
