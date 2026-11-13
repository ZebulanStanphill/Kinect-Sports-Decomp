extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_822DB5D0();
extern int fn_8245CCF8();
extern int fn_82579B78();
extern int fn_82579EF0();
extern int fn_8257A028();
extern int fn_8257A140();
extern int fn_8265CA20();
extern int fn_829C90F0();
extern int fn_829C9100();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192754;
extern unsigned int ltcg_pool_0_0f;


void fn_824A14F0(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  double dVar3;
  int aiStack_60;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [48];
  
  fn_82579B78(&aiStack_60);
  iVar2 = fn_8257A140(&aiStack_60);
  if (iVar2 == 0) {
    uVar1 = fn_82579EF0(&aiStack_60,0xffffffff821bf4cc,1);
    fn_829C90F0(0,0,uVar1);
    fn_8257A028((double)lbl_82192754,&aiStack_60,0xffffffff821bf4e0);
    fn_829C9100(0,0);
    fn_8257A028((double)ltcg_pool_0_0f,&aiStack_60,0xffffffff821bf4f0);
    fn_829C9100(0,5);
    dVar3 = (double)lbl_821916FC;
    fn_8257A028(dVar3,&aiStack_60,0xffffffff821bf510);
    fn_829C9100(0,6);
    fn_8257A028(dVar3,&aiStack_60,0xffffffff821bf520);
    fn_829C9100(0,7);
    fn_8257A028(dVar3,&aiStack_60,0xffffffff821bf530);
    fn_829C9100(0,8);
  }
  fn_8245CCF8(auStack_40);
  fn_822DB5D0(auStack_50);
  if (aiStack_60 != 0) {
    fn_8265CA20();
  }
  return;
}

