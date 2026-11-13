extern unsigned int *auStack_60;
extern int fn_82260130();
extern int fn_822B6A58();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C996C;


void fn_823990F0(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  double dVar3;
  unsigned char auStack_60 [96];
  
  dVar3 = (double)*(float *)(param_1 + 0x268);
  uVar2 = 0xffffffff8219622c;
  if (dVar3 <= (double)ltcg_pool_0_0f) {
    if (dVar3 < (double)ltcg_pool_0_0f) {
      uVar2 = 0xffffffff821b4ad0;
    }
  }
  else {
    uVar2 = 0xffffffff821a6998;
  }
  if ((*(int *)(param_2 + 0x20c) != 0) || (*(int *)(param_2 + 0x210) != 0)) {
    iVar1 = *(int *)(param_2 + 0x210);
    if (*(int *)(param_2 + 0x210) == 0) {
      iVar1 = *(int *)(param_2 + 0x20c);
    }
    fn_822B6A58(auStack_60,*(unsigned int *)(iVar1 + 0x44),*(unsigned short *)(iVar1 + 0x40));
  }
  fn_82260130((double)*(float *)(param_1 + 0x264),ABS((double)*(float *)(param_1 + 0x26c)),
                    dVar3,lbl_831C996C,*(unsigned int *)(param_2 + 0x214),uVar2,
                    *(unsigned int *)(param_2 + 0x244));
  return;
}

