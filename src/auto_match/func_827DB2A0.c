extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E4DE8();
extern int fn_827E50C0();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


unsigned __int64
fn_827DB2A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_60 [8];
  struct { unsigned int first; int second; } stack_pair_58;

  unsigned char auStack_50 [16];
  
  fn_827DADC8(&stack_pair_58.first,param_1);
  lVar1 = fn_827E4DE8(0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
    uVar2 = fn_827E50C0(lVar1,param_2,param_3,param_4,auStack_50,0,param_1);
  }
  fn_82517978(auStack_60,stack_pair_58.first,stack_pair_58.second,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_5,auStack_60,0);
  if (stack_pair_58.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}

