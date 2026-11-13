extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E6BA8();
extern int fn_827E6F28();
extern unsigned int iStack_7c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


unsigned __int64
fn_827DBBD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int in_stack_00000054;
  unsigned char auStack_88 [8];
  struct { unsigned int first; int second; } stack_pair_80;

  struct { unsigned int first; unsigned int second; } stack_pair_78;


  fn_827DADC8(&stack_pair_80.first,param_1,param_7,param_8,in_stack_00000054,0);
  lVar1 = fn_827E6BA8(0x44);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    stack_pair_78.first = 0;
    stack_pair_78.second = 0;
    fn_82517978(&stack_pair_78.first,stack_pair_80.first,stack_pair_80.second,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E6F28(lVar1,param_2,param_3,param_4,param_5,uVar2,param_6,param_7);
  }
  fn_82517978(auStack_88,stack_pair_80.first,stack_pair_80.second,0);
  uVar2 = fn_827DAB30(param_1,uVar2,in_stack_00000054,auStack_88,0);
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}
