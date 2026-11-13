typedef unsigned char bool;
#define TBLr 0
extern unsigned int *auStack_80;
extern unsigned int fStack_74;
extern int fn_82A2ABE0();
extern int fn_82A59B60();
extern int fn_82A766A0();
extern int __u64tod();
extern float lbl_82005748;
extern unsigned int uRam8315f6d8;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A59E40(__int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  __int64 *plVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 *puVar8;
  int *piVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  __int64 lVar10;
  double dVar11;
  double dVar12;
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  float fStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  do {
    piVar9 = (int *)(param_1 + 0x290);
    plVar1 = (__int64 *)*piVar9;
    if (in_RESERVE != '\0') {
      iVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x290);
      *piVar9 = iVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *plVar1 = (unsigned __int64)param_2 + *plVar1;
  if ((*(unsigned int *)(plVar1 + 2) == 0) || (param_2 < *(unsigned int *)(plVar1 + 2))) {
    *(unsigned int *)(plVar1 + 2) = param_2;
  }
  if ((*(unsigned int *)((int)plVar1 + 0x14) == 0) || (*(unsigned int *)((int)plVar1 + 0x14) < param_2)) {
    *(unsigned int *)((int)plVar1 + 0x14) = param_2;
  }
  iVar4 = (int)param_1;
  uVar6 = (**(int (***)())(**(int **)(*(int *)(iVar4 + 0x78) + 0x84) + 4))();
  *(unsigned int *)((int)plVar1 + 0x1c) = uVar6;
  iVar2 = *(int *)(iVar4 + 0x78);
  if (*(int *)(iVar2 + 0x94) != 0) {
    uStack_90 = (unsigned __int64)param_2;
    dVar12 = (double)__u64tod(uRam8315f6d8);
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x68);
    dVar11 = (double)(__int64)uStack_90;
    uStack_90 = uVar7;
    if ((double)*(unsigned int *)(iVar4 + 100) / (double)uVar7 < dVar11 / dVar12) {
      fn_82A766A0(iVar2);
    }
  }
  lVar10 = 6;
  *(unsigned int *)(plVar1 + 4) = *(unsigned int *)(*(int *)(iVar4 + 0x78) + 0x98);
  puVar5 = &uStack_88;
  do {
    puVar8 = puVar5;
    puVar5 = puVar8 + 1;
    *puVar5 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(unsigned int *)(puVar8 + 2) = 0;
  uVar3 = TBLr;
  uStack_78 = (unsigned int)uVar3;
  uStack_7c = (unsigned int)((unsigned __int64)uVar3 >> 0x20);
  dVar11 = (double)__u64tod((param_3 & 0xffffffff) - *(__int64 *)(iVar4 + 0x2a8));
  *(unsigned __int64 *)(iVar4 + 0x2a8) = param_3 & 0xffffffff;
  uStack_90 = (unsigned __int64)param_2;
  fStack_74 = ((float)param_2 / (float)dVar11) * lbl_82005748;
  fn_82A59B60(0xffffffff83219d50,0xffffffffffffffff,&uStack_90,0);
  uStack_70 = (((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF);
  if (*(int *)(*(int *)(iVar4 + 0x78) + 0x98) != *(int *)(iVar4 + 0x29c)) {
    uStack_6c = 1;
    *(unsigned int *)(iVar4 + 0x29c) = *(unsigned int *)(*(int *)(iVar4 + 0x78) + 0x98);
  }
  (**(int (***)())(**(int **)(iVar4 + 0x6c) + 0xc))(*(int **)(iVar4 + 0x6c),auStack_80);
  fn_82A2ABE0(0x58417532,auStack_80,0x34);
  sync(1);
  *piVar9 = (int)plVar1;
  *(unsigned int *)(iVar4 + 0x298) = 1;
  return;
}

