extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_827DE858();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CB850;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_8260CEE0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    fn_82517978(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    iVar2 = stack_pair_40.second;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar1 = *(unsigned int *)(param_1 + 0x40);
    fn_82517978(&uStack_38,stack_pair_40.first,stack_pair_40.second,0);
    fn_827DE858(puVar3,&uStack_38,param_2);
    puVar3[5] = uVar1;
    *puVar3 = &lbl_821CB850;
    puVar3[6] = 0;
    puVar3[7] = 0;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
  }
  return puVar3;
}

