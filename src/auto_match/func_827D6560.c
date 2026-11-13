extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E34D0();
extern int fn_82811438();
extern unsigned int iStack_7c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_80;


unsigned __int64
fn_827D6560(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_90 [8];
  unsigned char auStack_88 [8];
  struct { unsigned int first; int second; } stack_pair_80;

  unsigned char auStack_78 [8];
  unsigned char auStack_70 [112];
  
  fn_827D5158(&stack_pair_80.first);
  fn_82811438(auStack_70,auStack_90,0x10);
  lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x48,auStack_70,param_6);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_78,stack_pair_80.first,stack_pair_80.second,0);
    uVar2 = fn_827E34D0(lVar1,param_2,param_3,param_4,param_5,param_6,auStack_78);
  }
  fn_82517978(auStack_88,stack_pair_80.first,stack_pair_80.second,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_88,0);
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}

