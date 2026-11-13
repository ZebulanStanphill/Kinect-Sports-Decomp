extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E2940();
extern int fn_82811438();
extern unsigned int iStack_5c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_60;


unsigned __int64 fn_827D5F30(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  struct { unsigned int first; int second; } stack_pair_60;

  unsigned char auStack_58 [8];
  unsigned char auStack_50 [32];
  
  fn_827D5158(&stack_pair_60.first);
  if ((param_4 & 0xffffffff) != 0) {
    fn_82517A50(param_4,&stack_pair_60.first);
  }
  fn_82811438(auStack_50,auStack_70,0x10);
  lVar1 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x14,auStack_50,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_58,stack_pair_60.first,stack_pair_60.second,0);
    uVar2 = fn_827E2940(lVar1,param_2,param_3,auStack_58);
  }
  fn_82517978(auStack_68,stack_pair_60.first,stack_pair_60.second,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_68,1);
  if (stack_pair_60.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}

