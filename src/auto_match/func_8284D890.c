extern unsigned int *auStack_90;
extern int fn_82817C98();
extern int fn_828182C0();
extern int fn_82F6DCE0();
extern unsigned int uStack_2d;


unsigned __int64 fn_8284D890(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int aiStack_a0 [4];
  unsigned char auStack_90 [99];
  unsigned char uStack_2d;
  
  aiStack_a0[0] = 0;
  fn_82F6DCE0(auStack_90,100,0xffffffff8201f554,param_2,param_3);
  uStack_2d = 0;
  if (((*(int *)(param_1 + 0x138) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x138) + 0x28), iVar1 != 0)) &&
     (fn_828182C0(iVar1,auStack_90,0,aiStack_a0), aiStack_a0[0] != 0)) {
    fn_82817C98(aiStack_a0[0],param_4);
    return 1;
  }
  return 0;
}

