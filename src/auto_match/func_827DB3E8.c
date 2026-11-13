extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E51E8();
extern int fn_827E5360();
extern unsigned int iStack_84;
extern unsigned int uStack_88;


unsigned __int64
fn_827DB3E8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned char auStack_90 [8];
  struct { unsigned int first; int second; } stack_pair_88;

  unsigned char auStack_80 [80];
  
  fn_827DADC8(&stack_pair_88.first,param_4,in_stack_0000005c,in_stack_00000064,in_stack_0000006c,0);
  lVar1 = fn_827E51E8(0x4c);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_80,stack_pair_88.first,stack_pair_88.second,0);
    uVar2 = fn_827E5360(param_1,param_2,param_3,lVar1,param_5,param_6,param_7,param_8);
  }
  fn_82517978(auStack_90,stack_pair_88.first,stack_pair_88.second,0);
  uVar2 = fn_827DAB30(param_4,uVar2,in_stack_0000006c,auStack_90,0);
  if (stack_pair_88.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}

