extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9EA8();
extern int fn_827DE858();
extern int fn_82811400();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CB838;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned int * fn_8260C7F8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  struct { unsigned int first; int second; } stack_pair_60;

  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned char auStack_50 [16];

  iVar1 = *(int *)lbl_83156AA0;
  uVar3 = fn_82811400(auStack_50,4);
  puVar4 = (unsigned int *)(**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x3c,uVar3);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    fn_82517978(&stack_pair_60.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    uVar5 = fn_827D9EA8(param_2);
    iVar1 = stack_pair_60.second;
    stack_pair_58.first = 0;
    stack_pair_58.second = 0;
    uVar2 = *(unsigned int *)(param_1 + 0x40);
    fn_82517978(&stack_pair_58.first,stack_pair_60.first,stack_pair_60.second,0);
    fn_827DE858(puVar4,&stack_pair_58.first,param_2);
    puVar4[5] = uVar2;
    puVar4[6] = uVar5;
    puVar4[7] = 0;
    *puVar4 = &lbl_821CB838;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return puVar4;
}
