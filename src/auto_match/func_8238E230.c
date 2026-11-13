extern unsigned int *auStack_20;
extern int fn_8229AC50();
extern int fn_82359698();
extern int fn_8236FB68();
extern int fn_82372A58();
extern int fn_82373268();
extern int fn_82373428();
extern int fn_82380FA8();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CA1A8;


void fn_8238E230(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int auStack_20 [2];
  
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  iVar2 = *(int *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = fVar1;
  if (fVar1 <= ltcg_pool_0_0f) {
    if (*(int *)(param_2 + 0x10) == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xd4) + 0x14);
      if ((*(int *)(iVar3 + 0x14) == 0) && (*(int *)(iVar3 + 0x18) == 0)) {
        lVar5 = fn_8236FB68(0x19);
        if (lVar5 != 0) {
          fn_82508078(*(unsigned int *)(iVar2 + 0xa4),lVar5,0);
        }
        iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x94);
        if (iVar2 != 0) {
          *(unsigned int *)(iVar2 + 0x3c) = 1;
          *(unsigned int *)(iVar2 + 0x48) = 0;
        }
        fn_82373428(*(unsigned int *)(param_2 + 8),0);
        *(unsigned int *)(param_2 + 0x10) = 1;
        *(unsigned int *)(param_2 + 0xc) = lbl_831CA1A8;
        auStack_20[0] = *(unsigned int *)(param_2 + 0x14);
        auStack_20[0] =
             fn_82535298(auStack_20,**(unsigned int **)(*(int *)(param_2 + 8) + 0x9b8),
                               0xffffffff83296bc0,0xffffffff83296bd0);
        fn_82536288(auStack_20);
        fn_8229AC50(*(unsigned int *)(*(int *)(param_2 + 8) + 0xd4));
      }
    }
    else if (*(int *)(iVar2 + 0x9dc) != 0) {
      fn_82380FA8(*(unsigned int *)(iVar2 + 0x7e4));
      fn_82373268(iVar2);
      uVar4 = fn_82372A58(*(unsigned int *)(param_2 + 8));
      fn_82359698(iVar2,uVar4);
    }
  }
  return;
}

