extern unsigned int fStack_9c;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825456F0();
extern int fn_8262FE50();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263E9F0();
extern int fn_82837D98();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B1C8;
extern unsigned int uRam83282200;
extern unsigned int uRam83282228;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_825B0068(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  int *piVar6;
  double dVar7;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  float fStack_9c;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  int aiStack_70 [28];
  
  piVar6 = aiStack_70;
  lVar5 = 6;
  do {
    iVar2 = fn_8251F720((param_1 - (int)aiStack_70) + (int)piVar6,0);
    *piVar6 = iVar2;
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (lVar5 != 0);
  iVar2 = *(int *)(lbl_8320A898 + 0x3148);
  if (iVar2 != 0) {
    fn_8262FE50(iVar2);
  }
  uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_88 = (((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_c0 = (__int64)*(float *)(lbl_8320A898 + 0x3218);
  uStack_b8 = ((((unsigned __int64)(uStack_b8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_84 = (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  uStack_b8 = (__int64)*(float *)(lbl_8320A898 + 0x321c);
  uStack_80 = *(unsigned int *)(lbl_8320A898 + 0x3228);
  uStack_7c = *(unsigned int *)(lbl_8320A898 + 0x322c);
  uStack_90 = (((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_8c = (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  fn_8263A1B8(lbl_8320A898,0,lbl_8326B1C8);
  uStack_a8 = 0x80;
  uStack_b0 = 0;
  dVar7 = (double)lbl_821CA460;
  uStack_ac = 0;
  uStack_a0 = ltcg_pool_0_0f;
  uStack_a4 = 0x80;
  fStack_9c = lbl_821CA460;
  fn_82639EA8(lbl_8320A898,&uStack_b0);
  iVar1 = lbl_8320A898;
  iVar4 = 0;
  iVar3 = -0x7ce2b090;
  *(unsigned int *)(lbl_8320A898 + 0x480) = *(unsigned int *)(lbl_8320A898 + 0x480) & 0xffffe3ff | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x480) = *(unsigned int *)(lbl_8320A898 + 0x480) & 0xffff1fff | 0x4000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  do {
    iVar1 = *(int *)((int)aiStack_70 + iVar4);
    fn_82837D98(*(unsigned int *)(iVar1 + 0x14),0,&uStack_c0);
    fn_825456F0((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF));
    fn_8263E9F0(dVar7,lbl_8320A898,0,0,0,0,uRam83282200,0,0);
    if (*(int *)(iVar4 + -0x7cd7ddf0) != 0) {
      fn_8251FA58();
    }
    iVar3 = iVar3 + 0x30;
    *(int *)(iVar4 + -0x7cd7ddf0) = iVar1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < -0x7ce2af70);
  uRam83282228 = 3;
  fn_8263A1B8(lbl_8320A898,0,iVar2);
  fn_82639EA8(lbl_8320A898,&uStack_90);
  return;
}

