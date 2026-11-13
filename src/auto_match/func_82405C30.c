#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82405638();
extern int fn_82405E08();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int ltcg_pool_0_0f;


void fn_82405C30(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lStack_20;
  
  iVar5 = *(int *)(param_1 + 0x30) + 1;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x30) = iVar5;
  *(unsigned int *)(param_1 + 0x44) = ltcg_pool_0_0f;
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x84c);
  if (iVar5 == *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3) {
    lStack_20 = CONCAT44(*(unsigned int *)(param_1 + 0x8c),(((unsigned __int64)(lStack_20) >> 32) & 0xFFFFFFFF));
    uVar3 = fn_82535298(&lStack_20,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
    lStack_20 = CONCAT44(uVar3,(((unsigned __int64)(lStack_20) >> 32) & 0xFFFFFFFF));
    fn_82536288(&lStack_20);
    fn_82405E08(param_1);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar4 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
    lStack_20 = (__int64)((iVar1 - iVar5 >> 3) + -1);
    piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + *(int *)(iVar4 + 0x2c) * 4);
    *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) = (float)lStack_20;
    fn_82405638(param_1,5);
  }
  else {
    lStack_20 = CONCAT44(*(unsigned int *)(param_1 + 0x84),(((unsigned __int64)(lStack_20) >> 32) & 0xFFFFFFFF));
    uVar3 = fn_82535298(&lStack_20,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
    lStack_20 = CONCAT44(uVar3,(((unsigned __int64)(lStack_20) >> 32) & 0xFFFFFFFF));
    fn_82536288(&lStack_20);
  }
  return;
}

