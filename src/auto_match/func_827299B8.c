extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826A7398();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826CECC8();
extern int fn_826F74F8();
extern int fn_82700248();
extern int fn_827255B0();
extern unsigned int iStack_68;
extern unsigned int iStack_8c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_827299B8(int param_1)

{
  unsigned int uVar1;
  int iVar4;
  __int64 lVar2;
  int iVar5;
  unsigned __int64 uVar3;
  int iVar6;
  int aiStack_b0 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_a8;

  unsigned int uStack_a0;
  unsigned char auStack_90 [4];
  int iStack_8c;
  unsigned char auStack_80 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned short uStack_58;
  unsigned char uStack_56;
  unsigned char uStack_55;
  unsigned char uStack_54;
  unsigned char uStack_53;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char uStack_48;
  int (**pcStack_44)();
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;

  iVar6 = param_1 + -0xd8;
  iVar4 = (**(int (***)())(*(int *)(param_1 + -0xd8) + 0x5c))(iVar6);
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_55 = 0xff;
  uStack_54 = 0;
  uStack_53 = 0;
  *(int *)(param_1 + -0xd4) = *(int *)(param_1 + -0xd4) + 1;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  stack_pair_70.first = 0;
  uStack_34 = 0;
  stack_pair_70.second = 4;
  uStack_64 = 0;
  pcStack_44 = fn_827255B0;
  iStack_68 = iVar6;
  lVar2 = fn_826A7398();
  iVar5 = fn_826F74F8(lVar2 + 0xa2c,4,&stack_pair_70.first);
  if (iVar5 == 0) {
    stack_pair_a8.first = 0;
    stack_pair_a8.second = 0;
    uStack_a0 = 0;
    fn_82681728(aiStack_b0,(unsigned __int64)*(unsigned int *)(iVar4 + 0x78) + 0x254,0xffffffff820111c4);
    auStack_90[0] = 5;
    iStack_8c = aiStack_b0[0];
    *(int *)(aiStack_b0[0] + 8) = *(int *)(aiStack_b0[0] + 8) + 1;
    fn_826CD420(&stack_pair_a8.first,auStack_90);
    fn_82696330(auStack_90);
    lVar2 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
    *(int *)(aiStack_b0[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_b0[0]);
    }
    uVar3 = fn_82695520(auStack_80,iVar6);
    fn_826CD420(&stack_pair_a8.first,uVar3);
    fn_82696330(auStack_80);
    lVar2 = fn_826A7398(iVar4);
    iVar4 = fn_82700248(lVar2 + 0xa2c,4);
    *(unsigned int *)(iVar4 + 4) = 4;
    *(int *)(param_1 + -0xd4) = *(int *)(param_1 + -0xd4) + 1;
    if (*(int *)(iVar4 + 8) != 0) {
      fn_8267C498();
    }
    *(int *)(iVar4 + 8) = iVar6;
    if (*(int *)(iVar4 + 0xc) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(iVar4 + 0xc) = 0;
    *(int (***)())(iVar4 + 0x2c) = fn_827255B0;
    fn_826CD840(iVar4 + 0x30,&stack_pair_a8.first);
    uVar1 = stack_pair_a8.first;
    fn_8269A990(stack_pair_a8.first,stack_pair_a8.second);
    fn_8267BE38(uVar1);
  }
  fn_826CECC8(&stack_pair_70.first);
  return;
}
