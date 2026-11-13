extern unsigned int *auStack_50;
extern int fn_82822E38();
extern int fn_828233A8();
extern int fn_828299A8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;


void fn_8282B3B0(int param_1,unsigned int *param_2)

{
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [2];
  unsigned int *puStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_50 [16];
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  puStack_60 = param_2;
  fn_828299A8(&puStack_60,param_1,&iStack_70);
  puStack_60 = (unsigned int *)*param_2;
  fn_828299A8(&puStack_60,param_1,&iStack_6c);
  uStack_3c = *(unsigned int *)(iStack_70 + 0xc);
  uStack_38 = *(unsigned int *)(iStack_6c + 0xc);
  uStack_34 = uStack_5c;
  puStack_40 = param_2;
  fn_828233A8(param_1 + 0x344,aiStack_68,0xffffffff8282af88,auStack_50);
  if (aiStack_68[0] != 0) {
    fn_82822E38();
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return;
}

