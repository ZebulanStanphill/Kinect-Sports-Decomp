extern unsigned int *auStack_60;
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8264B7E0();
extern int fn_82A1BB18();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82623298(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 auStack_60 [2];
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x2a88) != 0) {
    fn_82A1BB18();
  }
  uVar2 = fn_82A1BB18();
  *(unsigned int *)(iVar1 + 0x2a88) = uVar2;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auStack_60[0] = 0xffffffffffffffff;
  fn_8264B7E0(*param_1,param_1[1],0x10,auStack_60,0,0,0);
  fn_8263A1B8(*param_1,0,param_2);
  fn_8263A508(*param_1,param_3);
  return;
}

