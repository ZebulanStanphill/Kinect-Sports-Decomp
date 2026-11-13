extern unsigned int *auStack_20;
extern int fn_82359698();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83276570;


void fn_823A3768(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  unsigned int auStack_20 [4];
  
  fVar4 = ltcg_pool_0_0f;
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  iVar2 = *(int *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = fVar1;
  if (fVar4 < fVar1) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x14) == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xd4) + 0x14);
      if (*(int *)(iVar3 + 0x14) != 0) {
        return;
      }
      if (*(int *)(iVar3 + 0x18) != 0) {
        return;
      }
      auStack_20[0] = *(unsigned int *)(param_2 + 0x1c);
      auStack_20[0] =
           fn_82535298(auStack_20,*(unsigned int *)(*(int *)(iVar2 + 0x174) + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(auStack_20);
      iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x94);
      if (iVar2 != 0) {
        *(unsigned int *)(iVar2 + 0x3c) = 1;
        *(unsigned int *)(iVar2 + 0x48) = 0;
      }
      if (*(int *)(*(int *)(param_2 + 8) + 0x864) != 0) {
        *(unsigned int *)(*(int *)(param_2 + 8) + 0x864) = 0;
      }
      *(unsigned int *)(param_2 + 0x18) = 0;
      *(unsigned int *)(param_2 + 0x14) = 1;
      *(unsigned int *)(param_2 + 0xc) = lbl_83276570;
      return;
    }
    if (*(int *)(iVar2 + 0x864) == 0) {
      return;
    }
  }
  fn_82359698(iVar2,8);
  return;
}

