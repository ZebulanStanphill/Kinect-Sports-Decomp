extern unsigned int fStack_5c;
extern unsigned int fStack_68;
extern int fn_82554260();
extern int fn_82554860();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_825077E8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iVar3;
  double dVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  float fStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  float fStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  iVar3 = param_1[0x51];
  dVar4 = (double)ltcg_pool_0_0f;
  if (iVar3 == 0) {
    uVar2 = (**(int (***)())(*(int *)*param_1 + 0x4c))();
    param_1[0x50] = uVar2;
    uVar1 = fn_827F04B0(0x1a0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82554260(uVar1,param_1[0x50],1);
    }
    param_1[0x51] = uVar2;
    fn_827F2DD0(dVar4,param_1[0x50]);
    iVar3 = param_1[0x51];
    if (iVar3 == 0) {
      return 0;
    }
  }
  fStack_68 = (float)dVar4;
  fStack_5c = (float)dVar4;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_48 = 0;
  stack_pair_70.first = 0x4d697850;
  stack_pair_70.second = lbl_821CA460;
  uStack_64 = 0x20;
  uStack_60 = lbl_821917C0;
  uStack_54 = 0x40;
  uStack_50 = lbl_821917C0;
  uStack_44 = 0;
  uStack_58 = param_3;
  fn_82554860(iVar3,0,param_2,&stack_pair_70.first);
  return 1;
}

