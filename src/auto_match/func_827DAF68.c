extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E4778();
extern int fn_827E4938();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64
fn_827DAF68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_68 [8];
  struct { unsigned int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  
  fn_827DADC8(&stack_pair_60.first,param_1,param_4,param_5,param_6,0);
  lVar1 = fn_827E4778(0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_54 = 0;
    fn_82517978(&uStack_58,stack_pair_60.first,stack_pair_60.second,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E4938(lVar1,param_2,param_3,uVar2,param_4,param_5,&uStack_58,param_1);
  }
  fn_82517978(auStack_68,stack_pair_60.first,stack_pair_60.second,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_6,auStack_68,0);
  if (stack_pair_60.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}

