extern int fn_82789C80();
extern int fn_82789CF8();
extern unsigned int iStack_98;
extern unsigned int uStack_58;
extern unsigned int uStack_5a;
extern unsigned int uStack_5b;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82789E08(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  int iStack_98;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  unsigned char uStack_5b;
  unsigned char uStack_5a;
  unsigned int uStack_58;
  
  iVar2 = param_1 + 0x10;
  iVar1 = *(int *)(param_1 + 0x20) * 4;
  uStack_78 = *(unsigned int *)(param_1 + 0x10);
  uStack_6c = 0xffffffff;
  uStack_70 = 0xffffffff;
  uStack_74 = 0xffffffff;
  uStack_60 = 0xffffffff;
  uStack_64 = 0xffffffff;
  uStack_68 = 0xffffffff;
  uStack_5a = 0;
  uStack_5b = 0;
  uStack_5c = 0;
  uStack_a0 = param_2;
  uStack_9c = param_3;
  iStack_98 = iVar1;
  stack_pair_90.first = param_2;
  stack_pair_90.second = param_3;
  uStack_88 = param_4;
  uStack_84 = param_2;
  uStack_80 = param_3;
  uStack_7c = param_4;
  uStack_58 = param_5;
  fn_82789C80(iVar2,&uStack_a0);
  iStack_98 = iVar1 + 1;
  uStack_a0 = param_3;
  uStack_9c = param_4;
  fn_82789C80(iVar2,&uStack_a0);
  iStack_98 = iVar1 + 2;
  uStack_a0 = param_4;
  uStack_9c = param_2;
  fn_82789C80(iVar2,&uStack_a0);
  fn_82789CF8(param_1 + 0x20,&stack_pair_90.first);
  *(unsigned int *)(param_1 + 0x7c) = param_5;
  return;
}

