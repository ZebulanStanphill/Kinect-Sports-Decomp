extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_827DE858();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CA75C;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_8259B070(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  struct { unsigned int first; unsigned int second; } stack_pair_38;


  puVar3 = (unsigned int *)fn_8265C9E0(0x44);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    fn_82517978(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    iVar2 = stack_pair_40.second;
    stack_pair_38.first = 0;
    stack_pair_38.second = 0;
    iVar1 = *(int *)(param_1 + 0x94);
    fn_82517978(&stack_pair_38.first,stack_pair_40.first,stack_pair_40.second,0);
    fn_827DE858(puVar3,&stack_pair_38.first,param_2);
    puVar3[0xf] = (unsigned int)LZCOUNT(iVar1 + -2) >> 5;
    puVar3[5] = 0;
    puVar3[9] = 0;
    *puVar3 = &lbl_821CA75C;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
  }
  return puVar3;
}
