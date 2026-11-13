typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82292780();
extern int fn_82292AE8();
extern int fn_824A75E0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82536358();
extern int fn_828647D8();
extern int fn_824A75E0();
extern unsigned int ltcg_pool_0_0f;


void fn_824A6B70(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar8;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned char *puVar7;
  unsigned __int64 uVar9;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [80];

  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(float *)(iVar1 + 0x20) <= ltcg_pool_0_0f) {
    return;
  }
  if ((*(float *)(iVar1 + 0x24) <= ltcg_pool_0_0f) ||
     (bVar2 = true, *(float *)(iVar1 + 0x20) <= *(float *)(iVar1 + 0x24))) {
    bVar2 = false;
  }
  if ((*(float *)(iVar1 + 0x28) <= ltcg_pool_0_0f) ||
     (bVar3 = true,
     *(float *)(*(int *)(param_1 + 0x3c) + 0x20) <= *(float *)(*(int *)(param_1 + 0x3c) + 0x28))) {
    bVar3 = false;
  }
  if (bVar2) {
    if (bVar3) {
      fn_824A75E0(param_1);
      uVar9 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x38);
      if (uVar9 == 0) {
        return;
      }
      cVar8 = fn_82536358(uVar9);
      if (cVar8 != '\0') {
        (**(int (***)())*(unsigned int *)uVar9)(uVar9);
        fn_82536288((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + 0x38);
      }
      *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x38) = 0;
      return;
    }
  }
  else if (bVar3) {
    fn_824A75E0(param_1);
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x38) != 0) {
      return;
    }
    lVar4 = fn_82292AE8();
    fn_82292780(auStack_80,lVar4 + 0x28);
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar5 = fn_828647D8(auStack_80);
    auStack_90[0] = *(unsigned int *)(iVar1 + 0x30);
    uVar6 = fn_82535298(auStack_90,uVar5,0xffffffff83296bc0,0xffffffff83296bd0);
    puVar7 = auStack_80;
    *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x38) = uVar6;
    goto LAB_824a6d78;
  }
  uVar9 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x38);
  if (uVar9 != 0) {
    cVar8 = fn_82536358(uVar9);
    if (cVar8 != '\0') {
      (**(int (***)())*(unsigned int *)uVar9)(uVar9);
      fn_82536288((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + 0x38);
    }
    *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x38) = 0;
  }
  if (!bVar2) {
    fn_824A75E0(param_1);
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x34) != 0) {
    return;
  }
  lVar4 = fn_82292AE8();
  fn_82292780(auStack_50,lVar4 + 0x28);
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar5 = fn_828647D8(auStack_50);
  auStack_90[0] = *(unsigned int *)(iVar1 + 0x30);
  uVar6 = fn_82535298(auStack_90,uVar5,0xffffffff83296bc0,0xffffffff83296bd0);
  puVar7 = auStack_50;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x34) = uVar6;
LAB_824a6d78:
  fn_824A75E0(puVar7);
  return;
}
