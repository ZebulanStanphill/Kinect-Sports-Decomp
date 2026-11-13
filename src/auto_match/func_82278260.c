extern int fn_82278950();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_82278260(double param_1,double param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  uVar5 = (unsigned __int64)param_2;
  uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)uVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar1 = (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  uVar4 = (unsigned __int64)param_1;
  uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  param_3[8] = iVar1;
  param_3[7] = (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 2;
  param_3[0xe] = 0;
  if ((uVar4 & 0x1f) != 0) {
    param_3[7] = (-(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0x1fU) + (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  }
  if ((uVar5 & 0x1f) != 0) {
    param_3[8] = (-iVar1 & 0x1fU) + iVar1;
  }
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[9] = (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  param_3[5] = param_3[7];
  param_3[6] = param_3[8];
  param_3[10] = iVar1;
  if ((uVar4 & 0x1f) != 0) {
    param_3[9] = (-(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0x1fU) + (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  }
  if ((uVar5 & 0x1f) != 0) {
    param_3[10] = (-iVar1 & 0x1fU) + iVar1;
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uVar3 = 0x800 - (int)((((__int64)(int)(param_3[10] + 0xf & 0xfffffff0) *
                          (__int64)(int)(((param_3[9] + 0x4f) / 0x50) * 0x50) & 0x3fffffffU) << 2)
                       / 0x1400);
  uStack_40 = (unsigned __int64)uVar3 << 0x20;
  uVar2 = fn_8263C910(param_3[9],param_3[10],0x18280186,0,&uStack_40);
  param_3[1] = uVar2;
  uStack_40 = (unsigned __int64)
              (uVar3 - (int)((((__int64)(int)(param_3[10] + 0xf & 0xfffffff0) *
                               (__int64)(int)(((param_3[9] + 0x4f) / 0x50) * 0x50) & 0x3fffffffU)
                             << 2) / 0x1400)) << 0x20;
  uVar2 = fn_8263C910(param_3[9],param_3[10],0x1a220197,0,&uStack_40);
  param_3[2] = uVar2;
  uVar2 = fn_8263C7F0(param_3[9],param_3[10],1,1,0,0x18280186,0,3);
  *param_3 = uVar2;
  fn_82278950(param_3);
  param_3[0xe] = 0;
  return param_3;
}

