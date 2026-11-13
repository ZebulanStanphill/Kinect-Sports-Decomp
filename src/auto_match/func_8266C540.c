extern int fn_82637AF8();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637F58();
extern int fn_82637FC0();
extern int fn_826381E0();
extern int fn_82638288();
extern int fn_82638790();
extern int fn_826390F8();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263A7E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8266C540(int param_1)

{
  unsigned int uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  fn_82639F28(*(unsigned int *)(param_1 + 0xcc),param_1 + 0xb0);
  uVar1 = fn_8263A7E0(*(unsigned int *)(param_1 + 0xcc),0);
  *(unsigned int *)(param_1 + 0xac) = uVar1;
  uStack_24 = *(unsigned int *)(param_1 + 0xd4);
  uStack_28 = *(unsigned int *)(param_1 + 0xd0);
  stack_pair_30.first = 0;
  uStack_20 = lbl_82002AE0;
  stack_pair_30.second = 0;
  uStack_1c = lbl_821AAD20;
  fn_82637C50(*(unsigned int *)(param_1 + 0xcc),6);
  fn_82637CE0(*(unsigned int *)(param_1 + 0xcc),7);
  fn_82637AF8(*(unsigned int *)(param_1 + 0xcc),1);
  fn_82637F58(*(unsigned int *)(param_1 + 0xcc),0);
  fn_82637FC0(*(unsigned int *)(param_1 + 0xcc),4);
  fn_826390F8(*(unsigned int *)(param_1 + 0xcc),0);
  fn_82638288(*(unsigned int *)(param_1 + 0xcc),0);
  fn_82638790(*(unsigned int *)(param_1 + 0xcc),7);
  fn_826381E0(*(unsigned int *)(param_1 + 0xcc),0);
  fn_82639EA8(*(unsigned int *)(param_1 + 0xcc),&stack_pair_30.first);
  return;
}

