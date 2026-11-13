#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8226B7E0();
extern int fn_8226C7C0();
extern unsigned int lbl_82193AF0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_70;


void fn_8227A990(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned __int64 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  unsigned __int64 uStack_48;
  float fStack_40;
  float fStack_3c;
  unsigned __int64 uStack_38;
  __int64 lStack_30;
  __int64 alStack_28 [5];
  
  uVar6 = *(unsigned __int64 *)(param_2 + 0x228);
  uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)uVar6 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)*(unsigned __int64 *)(param_2 + 0x230) >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  dVar7 = (double)ltcg_pool_0_0f;
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)*(unsigned __int64 *)(param_2 + 0x230))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar6)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  fStack_68 = ltcg_pool_0_0f;
  fStack_60 = ltcg_pool_0_0f;
  fStack_58 = ltcg_pool_0_0f;
  fStack_50 = ltcg_pool_0_0f;
  fStack_64 = ltcg_pool_0_0f;
  fStack_5c = ltcg_pool_0_0f;
  fStack_54 = ltcg_pool_0_0f;
  fStack_4c = ltcg_pool_0_0f;
  uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + (((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF),(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) + (((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
  dVar9 = dVar7;
  dVar10 = dVar7;
  dVar11 = dVar7;
  uStack_48 = uVar6;
  uVar6 = fn_8226C7C0(*(unsigned int *)(param_1 + 0xf0),&uStack_48,&fStack_40,0);
  uVar6 = fn_8226C7C0(uVar6,&uStack_70,&uStack_48,0);
  lStack_30 = *(__int64 *)(param_2 + 0x238);
  alStack_28[0] = *(__int64 *)(param_2 + 0x240);
  uStack_70 = *(unsigned __int64 *)(param_2 + 0x248);
  uStack_38 = *(unsigned __int64 *)(param_2 + 0x250);
  cVar1 = *(char *)(param_2 + 600);
  if (cVar1 == '\0') {
    dVar12 = (double)fStack_3c;
    dVar13 = (double)(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF);
  }
  else {
    uVar6 = fn_8226C7C0(uVar6,&uStack_70,&fStack_68,0);
    uVar6 = fn_8226C7C0(uVar6,&uStack_38,&fStack_60,0);
    uVar6 = fn_8226C7C0(uVar6,&lStack_30,&fStack_58,0);
    uVar6 = fn_8226C7C0(uVar6,alStack_28,&fStack_50,0);
    dVar7 = (double)fStack_64;
    dVar12 = (double)fStack_3c;
    dVar9 = (double)fStack_5c;
    dVar8 = (double)lbl_82193AF0;
    if (((double)(float)(dVar7 - dVar8) <= dVar12) && (dVar12 <= (double)(float)(dVar7 + dVar8))) {
      dVar12 = dVar9;
    }
    dVar11 = (double)fStack_54;
    dVar10 = (double)fStack_4c;
    if (((double)(float)(dVar11 - dVar8) <= dVar12) && (dVar12 <= (double)(float)(dVar11 + dVar8)))
    {
      dVar12 = dVar10;
    }
    dVar13 = (double)(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF);
    if (((double)(float)(dVar9 - dVar8) <= dVar13) && (dVar13 <= (double)(float)(dVar9 + dVar8))) {
      dVar13 = dVar7;
    }
    if (((double)(float)(dVar10 - dVar8) <= dVar13) && (dVar13 <= (double)(float)(dVar10 + dVar8)))
    {
      dVar13 = dVar11;
    }
  }
  lStack_30 = (__int64)(int)dVar13;
  alStack_28[0] = (__int64)(int)(((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF);
  fn_8226B7E0(uVar6,(int)fStack_40,(unsigned __int64)(unsigned int)(int)(((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) - 1,(int)dVar12,
                    (unsigned __int64)(unsigned int)(int)dVar13 - 1,0);
  if (cVar1 == '\0') {
    fn_8226B7E0(*(unsigned int *)(param_1 + 0xf0),0,0,0,0,0);
    lVar5 = 0;
    iVar4 = 0;
    lVar3 = 0;
    iVar2 = 0;
  }
  else {
    lStack_30 = (__int64)(int)fStack_60;
    alStack_28[0] = (__int64)(int)dVar9;
    fn_8226B7E0(*(unsigned int *)(param_1 + 0xf0),(int)fStack_68,
                      (unsigned __int64)(unsigned int)(int)fStack_60 - 1,(int)dVar7,(unsigned __int64)(unsigned int)(int)dVar9 - 1
                      ,0);
    iVar2 = (int)fStack_58;
    lStack_30 = (__int64)iVar2;
    iVar4 = (int)dVar11;
    alStack_28[0] = (__int64)(int)dVar10;
    lVar3 = (unsigned __int64)(unsigned int)(int)fStack_50 - 1;
    lVar5 = (unsigned __int64)(unsigned int)(int)dVar10 - 1;
  }
  fn_8226B7E0(*(unsigned int *)(param_1 + 0xf0),iVar2,lVar3,iVar4,lVar5,0);
  return;
}

