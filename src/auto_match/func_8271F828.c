extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826A7398();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826F6FA8();
extern int fn_82700248();
extern int fn_8271E440();
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8271F828(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char *puVar4;
  __int64 lVar3;
  int iVar5;
  int iVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned char auStack_60 [8];
  unsigned int uStack_58;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [32];
  
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  uStack_68 = 0;
  if (param_2 == 0) {
    auStack_50[0] = 1;
    fn_826CD420(&stack_pair_70.first,auStack_50);
    puVar4 = auStack_50;
  }
  else {
    uVar2 = fn_82695520(auStack_40);
    fn_826CD420(&stack_pair_70.first,uVar2);
    puVar4 = auStack_40;
  }
  fn_82696330(puVar4);
  auStack_60[0] = 4;
  uStack_58 = param_3;
  fn_826CD420(&stack_pair_70.first,auStack_60);
  fn_82696330(auStack_60);
  lVar3 = fn_826A7398(param_1);
  iVar5 = fn_82700248(lVar3 + 0xa2c,4);
  uVar2 = fn_826A7398(param_1);
  iVar6 = fn_826F6FA8(uVar2,0);
  *(unsigned int *)(iVar5 + 4) = 4;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
  }
  if (*(int *)(iVar5 + 8) != 0) {
    fn_8267C498();
  }
  *(int *)(iVar5 + 8) = iVar6;
  if (*(int *)(iVar5 + 0xc) != 0) {
    fn_8267C498();
  }
  *(unsigned int *)(iVar5 + 0xc) = 0;
  *(int (***)())(iVar5 + 0x2c) = fn_8271E440;
  fn_826CD840(iVar5 + 0x30,&stack_pair_70.first);
  uVar1 = stack_pair_70.first;
  fn_8269A990(stack_pair_70.first,stack_pair_70.second);
  fn_8267BE38(uVar1);
  return;
}

