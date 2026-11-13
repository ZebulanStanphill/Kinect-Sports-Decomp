typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_824B5770();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824D7000(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x10c);
  bVar3 = false;
  bVar4 = false;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) != 0)) {
    bVar3 = true;
    *(unsigned int *)(iVar1 + 0x44) = 0;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) != 0)) {
    bVar4 = true;
    *(unsigned int *)(iVar2 + 0x44) = 0;
  }
  if ((!bVar3) && (!bVar4)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  dVar6 = (double)ltcg_pool_0_0f;
  dVar5 = dVar6;
  if (iVar1 != 0) {
    dVar5 = (double)fn_824B5770(iVar1,*(unsigned int *)(iVar1 + 0x50),*(unsigned int *)(iVar1 + 0x54),
                                 *(unsigned int *)(iVar1 + 0x58));
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  if (iVar1 != 0) {
    dVar6 = (double)fn_824B5770(iVar1,*(unsigned int *)(iVar1 + 0x50),*(unsigned int *)(iVar1 + 0x54),
                                 *(unsigned int *)(iVar1 + 0x58));
  }
  if (bVar3) {
    if (!bVar4) {
      *param_2 = (float)dVar5;
      return 1;
    }
    if (ABS(dVar6) < ABS(dVar5)) {
      dVar6 = dVar5;
    }
  }
  else if (!bVar4) {
    return 1;
  }
  *param_2 = (float)dVar6;
  return 1;
}

