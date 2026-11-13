extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E2C60();
extern int fn_82811438();
extern unsigned int iStack_8c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


unsigned __int64
fn_827D6260(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int in_stack_00000054;
  unsigned char auStack_a0 [8];
  unsigned char auStack_98 [8];
  struct { unsigned int first; int second; } stack_pair_90;

  struct { unsigned int first; unsigned int second; } stack_pair_88;

  unsigned char auStack_80 [48];

  fn_827D5158(&stack_pair_90.first);
  fn_82811438(auStack_80,auStack_a0,0x10);
  lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))
                    (lbl_83156AA0,0x50,auStack_80,in_stack_00000054);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    stack_pair_88.first = 0;
    stack_pair_88.second = 0;
    fn_82517978(&stack_pair_88.first,stack_pair_90.first,stack_pair_90.second,0);
    uVar2 = fn_827E2C60(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  fn_82517978(auStack_98,stack_pair_90.first,stack_pair_90.second,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_98,0);
  if (stack_pair_90.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}
