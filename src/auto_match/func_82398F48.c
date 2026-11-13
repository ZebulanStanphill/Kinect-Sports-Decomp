extern unsigned int *auStack_50;
extern int fn_8225FFE0();
extern int fn_822B6A58();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C996C;


void fn_82398F48(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  double dVar3;
  unsigned char auStack_50 [80];
  
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
    fn_822B6A58(auStack_50,*(unsigned int *)(iVar1 + 0x44),*(unsigned short *)(iVar1 + 0x40));
  }
  fn_8225FFE0(ABS((double)*(float *)(param_1 + 0x26c)),dVar3,lbl_831C996C,
                    *(unsigned int *)(param_2 + 0x214),uVar2,0x80,0x20,*(unsigned int *)(param_2 + 0x2c)
                    ,*(unsigned int *)(param_2 + 0x28));
  return;
}

