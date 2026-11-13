typedef unsigned char bool;
#define false 0
extern int fn_8229A000();
extern int fn_8229AAF8();
extern int fn_82359698();
extern int fn_82406BE0();
extern int fn_827F5708();
extern unsigned int ltcg_pool_0_0f;


void fn_82407EA8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  *(unsigned int *)(iVar2 + 1000) = 1;
  fn_82359698(iVar2,1);
  fn_8229AAF8(*(unsigned int *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0xd4));
  fn_8229A000((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0xd4) + 0x68);
  fn_82406BE0(iVar1,0);
  *(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x14) + 0x1d0)
       = 1;
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x118) + 0x2e4) !=
      0) {
    fn_827F5708((double)ltcg_pool_0_0f);
  }
  piVar3 = (int *)(*(int *)(param_1 + 4) + 0x44);
  if (piVar3 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *piVar3 != 0;
  }
  if (bVar4) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x78) = 0;
  }
  return;
}

