extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E5E00();
extern int fn_827E63B0();
extern unsigned int iStack_7c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


unsigned __int64
fn_827DBA00(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned char auStack_88 [8];
  unsigned int uStack_80;
  int iStack_7c;
  struct { unsigned int first; unsigned int second; } stack_pair_78;

  
  fn_827DADC8(&uStack_80,param_1,in_stack_0000005c,in_stack_00000064,in_stack_0000006c);
  if ((param_6 & 0xffffffff) != 0) {
    fn_827D5078(uStack_80,param_6);
  }
  lVar1 = fn_827E5E00(100);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    stack_pair_78.first = 0;
    stack_pair_78.second = 0;
    fn_82517978(&stack_pair_78.first,uStack_80,iStack_7c,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E63B0(lVar1,param_2,param_4,param_5,param_7,param_8,param_3,uVar2);
  }
  fn_82517978(auStack_88,uStack_80,iStack_7c,0);
  uVar2 = fn_827DAB30(param_1,uVar2,in_stack_0000006c,auStack_88,0);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

