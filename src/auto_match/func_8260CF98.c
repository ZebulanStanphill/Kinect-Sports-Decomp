extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D98C8();
extern int fn_827DE948();
extern int fn_82811438();
extern unsigned int iStack_64;
extern unsigned int lbl_821CB868;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


unsigned int * fn_8260CF98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int auStack_70;
  struct { unsigned int first; int second; } stack_pair_68;

  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned char auStack_50 [32];

  auStack_70 = 0;
  fn_82811438(auStack_50,&auStack_70,0x10);
  puVar2 = (unsigned int *)
           (**(int (***)())(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x18,auStack_50,param_3);
  if ((int)param_4 == -1) {
    param_4 = fn_827D98C8(param_1);
  }
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    stack_pair_68.first = 0;
    stack_pair_68.second = 0;
    fn_82517978(&stack_pair_68.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    iVar1 = stack_pair_68.second;
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    fn_82517978(&stack_pair_60.first,stack_pair_68.first,stack_pair_68.second,0);
    fn_827DE948(puVar2,param_2,&stack_pair_60.first,param_4);
    puVar2[5] = 0;
    *puVar2 = &lbl_821CB868;
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return puVar2;
}
