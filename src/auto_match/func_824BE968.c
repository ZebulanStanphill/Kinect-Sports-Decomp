#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8245D538();
extern int fn_8245DE90();
extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83276594;


/* WARNING: Removing unreachable block (ram,0x824be9a8) */

void fn_824BE968(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 alStack_40;
  
  *(unsigned int *)(param_1 + 0xe4) = 0xb;
  *(unsigned int *)(param_1 + 0x54c) = 0;
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 != *(int *)(param_1 + 0xf8)) {
    for (iVar5 = iVar1; iVar5 != *(int *)(param_1 + 0xf8); iVar5 = iVar5 + 8) {
    }
    *(int *)(param_1 + 0xf8) = iVar1;
  }
  uVar2 = *(unsigned int *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar6 = *(unsigned int *)(param_1 + 0x4fc);
      goto LAB_824bea28;
    }
    if (uVar2 < 3) {
      uVar6 = *(unsigned int *)(param_1 + 0x500);
      goto LAB_824bea28;
    }
    if (uVar2 < 5) {
      uVar6 = *(unsigned int *)(param_1 + 0x504);
      goto LAB_824bea28;
    }
  }
  uVar6 = *(unsigned int *)(param_1 + 0x4f8);
LAB_824bea28:
  alStack_40 = CONCAT44(uVar6,((unsigned int)(alStack_40)));
  lVar3 = fn_8251F720(&alStack_40,0);
  uVar4 = fn_8251FBA8();
  lVar7 = lVar3;
  for (uVar4 = (uVar4 & 0xffffffff) >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    fn_824BF8A8(param_1 + 0xf4,lVar7);
    lVar7 = lVar7 + 8;
  }
  fn_8251FA58(lVar3);
  uVar2 = (unsigned int)*(float *)(*(int *)(param_1 + 0xf8) + -4);
  alStack_40 = (__int64)(int)uVar2;
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  fn_8245DE90(lbl_83276594,(unsigned __int64)uVar2 + 1);
  *(unsigned int *)(param_1 + 0xd8) = 1;
  *(unsigned int *)(param_1 + 0xdc) = ltcg_pool_0_0f;
  return;
}

