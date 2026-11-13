extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E4A58();
extern int fn_827E4BD0();
extern unsigned int iStack_6c;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned __int64
fn_827DB0F8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_78 [8];
  struct { unsigned int first; int second; } stack_pair_70;

  struct { unsigned int first; unsigned int second; } stack_pair_68;


  fn_827DADC8(&stack_pair_70.first,param_1,param_6,param_7,param_8,0);
  lVar1 = fn_827E4A58(0x13c);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    stack_pair_68.first = 0;
    stack_pair_68.second = 0;
    fn_82517978(&stack_pair_68.first,stack_pair_70.first,stack_pair_70.second,0);
    uVar2 = (**(int (***)())(*param_2 + 0x40))(param_2);
    uVar2 = fn_827E4BD0(lVar1,uVar2,param_4,param_3,param_5,param_6,param_7,&stack_pair_68.first);
  }
  fn_82517978(auStack_78,stack_pair_70.first,stack_pair_70.second,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_8,auStack_78,0);
  if (stack_pair_70.second != 0) {
    fn_822315A0();
  }
  return uVar2;
}
