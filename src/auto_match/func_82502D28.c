extern int fn_827F2168();
extern int fn_827F2DD0();
extern int fn_827F5730();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82502D28(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*(unsigned int *)(param_1 + 0xd48) == param_2) {
    return;
  }
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc6c);
    iVar1 = fn_827F2168(*(unsigned int *)(param_1 + 0xc68));
    if (iVar1 != iVar2) {
      fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc68),iVar2,param_3,0x12,0);
    }
    dVar3 = (double)lbl_821CA460;
    fn_827F5730(dVar3,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc84));
    fn_827F5730((double)ltcg_pool_0_0f,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc80));
    fn_827F5730(dVar3,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc78));
    if (*(int *)(param_1 + 0xc7c) == 0) goto LAB_82502f04;
    dVar3 = (double)*(float *)(param_1 + 0xc98);
  }
  else {
    if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0xc6c);
      iVar1 = fn_827F2168(*(unsigned int *)(param_1 + 0xc68));
      if (iVar1 != iVar2) {
        fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc68),iVar2,param_3,0x12,0
                         );
      }
      fn_827F5730((double)lbl_821CA460,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc80));
      dVar3 = (double)ltcg_pool_0_0f;
    }
    else {
      if (2 < param_2) {
        if (param_2 == 3) {
          iVar2 = *(int *)(param_1 + 0xc94);
        }
        else {
          if (4 < param_2) goto LAB_82502f04;
          iVar2 = *(int *)(param_1 + 0xc70);
          iVar1 = fn_827F2168(*(unsigned int *)(param_1 + 0xc68));
          if (iVar1 == iVar2) goto LAB_82502f04;
        }
        fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc68),iVar2,param_3,0x12,0
                         );
        goto LAB_82502f04;
      }
      iVar2 = *(int *)(param_1 + 0xc6c);
      iVar1 = fn_827F2168(*(unsigned int *)(param_1 + 0xc68));
      if (iVar1 != iVar2) {
        fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc68),iVar2,param_3,0x12,0
                         );
      }
      dVar3 = (double)ltcg_pool_0_0f;
      fn_827F5730(dVar3,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc80));
    }
    fn_827F5730(dVar3,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc84));
    fn_827F5730(dVar3,(double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc78));
    *(float *)(param_1 + 0xc98) = (float)dVar3;
    if (*(int *)(param_1 + 0xc7c) == 0) goto LAB_82502f04;
  }
  fn_827F5730(dVar3,(double)lbl_8218E8E8);
LAB_82502f04:
  *(unsigned int *)(param_1 + 0xd48) = param_2;
  return;
}

