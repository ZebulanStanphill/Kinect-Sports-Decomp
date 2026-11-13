extern unsigned int *auStack_50;
extern int fn_824EBB80();
extern int fn_82837D98();
extern int fn_82F6A540();
extern int fn_82F6A58C();


void fn_824EC288(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  int in_r8;
  unsigned __int64 uVar1;
  unsigned char auStack_50 [64];
  
  uVar1 = fn_82F6A540();
  fn_82837D98(*(unsigned int *)(in_r8 + 0x14),0,auStack_50);
  fn_824EBB80(uVar1,param_2,param_3,param_4,param_5,param_6);
  fn_82F6A58C();
  return;
}

