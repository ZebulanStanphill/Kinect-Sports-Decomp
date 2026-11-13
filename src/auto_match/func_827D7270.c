extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5158();
extern int fn_827D6C00();
extern int fn_827D98C0();
extern int fn_827E13A0();
extern int fn_82811438();
extern unsigned int iStack_74;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64
fn_827D7270(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned int *puStack0000001c;
  unsigned char auStack_90 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  struct { unsigned int first; int second; } stack_pair_78;

  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned char auStack_60 [32];

  puStack0000001c = param_2;
  fn_827D5158(&stack_pair_78.first);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82517A50(param_6,&stack_pair_78.first);
  }
  piVar3 = (int *)0x0;
  fn_82811438(auStack_60,auStack_90,0x10);
  lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 0xc))(lbl_83156AA0,0x24,auStack_60);
  if (lVar1 != 0) {
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    fn_82517978(&stack_pair_80.first,stack_pair_78.first,stack_pair_78.second,0);
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    fn_82517978(&stack_pair_70.first,*param_2,param_2[1],0);
    piVar3 = (int *)fn_827E13A0(lVar1,&stack_pair_70.first,param_3,param_4,param_5,&stack_pair_80.first);
  }
  (**(int (***)())(*piVar3 + 4))(piVar3,param_1);
  fn_827D6C00(param_1,piVar3);
  uVar2 = fn_827D98C0(*param_2);
  if (stack_pair_78.second != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return uVar2;
}
