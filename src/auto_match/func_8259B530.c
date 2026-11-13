extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8259A3A8();
extern int fn_8259AF08();
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827DE858();
extern int fn_82811400();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CA78C;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned int * fn_8259B530(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  struct { unsigned int first; int second; } stack_pair_60;

  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned char auStack_50 [16];

  stack_pair_60.first = fn_827D96A0(param_2);
  lVar2 = fn_8259AF08(param_1,&stack_pair_60.first);
  if (lVar2 == 0) {
    puVar6 = (unsigned int *)0x0;
    *param_3 = 0;
  }
  else {
    iVar1 = *(int *)lbl_83156AA0;
    uVar3 = fn_82811400(auStack_50,4);
    uVar4 = (**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x1b8,uVar3);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      stack_pair_60.first = 0;
      uVar5 = fn_8259A3A8(uVar4,lVar2,*(unsigned int *)(param_1 + 0x70),&stack_pair_60.first,param_2,0);
    }
    *param_3 = uVar5;
    puVar6 = (unsigned int *)fn_8265C9E0(0x30);
    if (puVar6 == (unsigned int *)0x0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      stack_pair_60.first = 0;
      stack_pair_60.second = 0;
      fn_82517978(&stack_pair_60.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      iVar1 = stack_pair_60.second;
      stack_pair_58.first = 0;
      stack_pair_58.second = 0;
      uVar5 = *param_3;
      fn_82517978(&stack_pair_58.first,stack_pair_60.first,stack_pair_60.second,0);
      fn_827DE858(puVar6,&stack_pair_58.first,uVar5);
      *puVar6 = &lbl_821CA78C;
      fn_827D9630(puVar6 + 6,param_2);
      if (iVar1 != 0) {
        fn_822315A0(iVar1);
      }
    }
  }
  return puVar6;
}
