extern int fn_822C72E0();
extern int fn_823345C0();
extern int fn_82334668();
extern int fn_82334868();
extern int fn_823349C0();
extern int fn_82334A70();
extern int fn_82334E28();
extern int fn_82334FD0();
extern int fn_82335158();
extern int fn_82335838();
extern int fn_82336398();
extern int fn_823364B8();
extern int fn_82417F58();
extern unsigned int ltcg_pool_0_0f;
extern unsigned char switchdataD_82195038[];


void fn_82334340(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float fVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  double dVar11;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar1 = *(unsigned int *)(param_2 + 0x230);
  uVar8 = (unsigned __int64)uVar1;
  *(float *)(param_2 + 0x22c) = *(float *)(param_2 + 0x228);
  *(float *)(param_2 + 0x228) = (float)((double)*(float *)(param_2 + 0x228) + param_1);
  uVar9 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x238);
  if (uVar9 == 0) {
    return;
  }
  if (((*(int *)(uVar1 + 0x24) != 0) || (*(int *)(uVar1 + 0x280) == 0)) ||
     (uVar4 = fn_82417F58(uVar9), fVar3 = ltcg_pool_0_0f,
     (uVar4 & 0xffffffff) != (uVar8 & 0xffffffff))) {
    uVar9 = fn_82417F58(uVar9);
    if ((uVar9 & 0xffffffff) == (uVar8 & 0xffffffff)) {
      return;
    }
    *(unsigned int *)(param_2 + 0x14) = 0;
    return;
  }
  dVar11 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x14) == 0) {
    *(float *)(param_2 + 0x228) = ltcg_pool_0_0f;
    *(unsigned int *)(param_2 + 0x224) = 1;
    *(float *)(param_2 + 0x22c) = fVar3;
  }
  *(unsigned int *)(param_2 + 0x14) = 1;
  uVar1 = *(unsigned int *)(param_2 + 0x224);
  if (0xb < uVar1) {
    return;
  }
  iVar6 = (unsigned int)(switchdataD_82195038)[uVar1] * 4;
  switch(uVar1) {
  case 0:
    fn_823345C0(param_2);
    break;
  case 1:
    fn_82334668(param_2);
    break;
  case 2:
    iVar6 = fn_823364B8(param_2,param_2 + 0x1f0,0);
    if (iVar6 == 0) {
      return;
    }
    fn_822C72E0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x20),param_2 + 0x198);
    uVar10 = 3;
    goto LAB_82334440;
  case 3:
    fn_82334868(param_2);
    break;
  case 4:
    iVar6 = fn_823364B8(param_2,param_2 + 0x1e0,1);
    if (iVar6 == 0) {
      return;
    }
    if (*(int *)(param_2 + 0x184) == 0) {
      uVar7 = 0xffffffff821b09cc;
    }
    else {
      uVar7 = 0xffffffff821b09b4;
    }
    fn_822C72E0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x20),uVar7);
    uVar10 = 5;
LAB_82334440:
    *(float *)(param_2 + 0x228) = (float)dVar11;
    *(unsigned int *)(param_2 + 0x224) = uVar10;
    *(float *)(param_2 + 0x22c) = (float)dVar11;
    break;
  case 5:
    iVar6 = fn_82336398(param_2,param_2 + 0x1e0);
    if (iVar6 == 0) {
      return;
    }
    if (*(int *)(param_2 + 400) != 0) {
      *(int *)(param_2 + 0x21c) = *(int *)(param_2 + 0x21c) + 1;
    }
    uVar10 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x230) + 0x23c) + 0x928);
    *(unsigned int *)(param_2 + 0x224) = 6;
    *(unsigned int *)(param_2 + 0x238) = uVar10;
    goto LAB_823344a4;
  case 6:
    fn_823349C0(param_2);
    break;
  case 7:
    fn_82334A70(param_2);
    break;
  case 8:
    if (*(int *)(param_2 + 0x210) == 0) {
      fn_82335838(param_2,*(unsigned int *)((int)uVar8 + 0x238));
    }
    iVar5 = fn_82336398(param_2,param_2 + 0x1e0);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0x230) + 0x114);
    puVar2 = (unsigned int *)(iVar6 + iVar5 + 0x50 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    *(unsigned int *)(iVar5 + 0x7c) = 0;
    puVar2 = (unsigned int *)(iVar5 + 0x60U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    *(unsigned int *)(param_2 + 0x224) = 3;
LAB_823344a4:
    *(float *)(param_2 + 0x228) = (float)dVar11;
    *(float *)(param_2 + 0x22c) = (float)dVar11;
    break;
  case 9:
    fn_82334E28(param_2);
    break;
  case 10:
    fn_82334FD0(param_2);
    break;
  case 0xb:
    fn_82335158(param_2);
  }
  return;
}

