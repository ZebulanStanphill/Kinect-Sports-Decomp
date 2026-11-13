extern int fn_82337B90();
extern int fn_82341BF0();
extern int fn_82349F78();
extern int fn_824CD030();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823427C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_82337B90(**(unsigned int **)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar2 != 0) {
    (*(int **)(param_1 + 0xc))[4] = 2;
    iVar3 = fn_824CD030(iVar2);
    if (iVar3 != 0) {
      (**(int (***)())(*(int *)**(unsigned int **)(iVar2 + 0xfc) + 0x24))();
      *(unsigned int *)(*(int *)(**(int **)(iVar2 + 0xfc) + 0x3c) + 0x78) = 0;
    }
    *(unsigned int *)(*(int *)(iVar2 + 0xfc) + 100) = 2;
  }
  if ((int)param_3 == 3) {
    iVar2 = *(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) + 0x174);
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x5c);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar2 + 0x40) + 0xf0) == 0) {
      fn_82341BF0(param_1);
      goto LAB_82342908;
    }
    iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
    fVar1 = ltcg_pool_0_0f;
  }
  else {
    if ((int)param_3 != 4) goto LAB_82342908;
    iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
    fVar1 = lbl_821CA460;
  }
  fn_827F57E8((double)fVar1,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
  *(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x108) = *(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x10c);
LAB_82342908:
  fn_82349F78(param_1,param_2,param_3);
  return;
}

