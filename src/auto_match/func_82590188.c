extern unsigned int *auStack_90;
extern int fn_825268A8();
extern int fn_82576AD8();
extern int fn_82577848();
extern int fn_8258C000();
extern int fn_8258C840();
extern int fn_82631C78();
extern int fn_82645EA8();
extern int fn_82647738();
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern int (*lbl_8326C000)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82590188(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int *puStack_a8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  uStack_7c = ltcg_pool_0_0f;
  uStack_98 = *(unsigned int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x8ac);
  stack_pair_b0.second = (unsigned int)param_2;
  puStack_a8 = &uStack_a0;
  stack_pair_b0.first = 0;
  uStack_a0 = lbl_8327F8A0;
  puVar5 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  uStack_9c = 4;
  uStack_6c = uStack_7c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xffffffff;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_94 = stack_pair_b0.second;
  if ((*(unsigned int *)(iVar1 + 0x14) & 0x4000000) != 0) {
    fn_82631C78(lbl_8320A898,0,0x70,0x10);
    (**(int (***)())(**(int **)((int)((param_2 + 0x2edeU & 0xffffffff) << 2) + iVar1) + 8))();
  }
  fn_82631C78(lbl_8320A898,0,0x40,0x40);
  (**(int (***)())(**(int **)((int)((param_2 + 0x2ee3U & 0xffffffff) << 2) + iVar1) + 8))();
  if ((*(unsigned int *)(iVar1 + 0x14) & 0x20000000) != 0) {
    fn_82631C78(lbl_8320A898,0,(unsigned __int64)*(unsigned int *)(iVar1 + 0xbbbc),
                      0x80 - (unsigned __int64)*(unsigned int *)(iVar1 + 0xbbbc));
    uVar6 = 2;
    do {
      if ((uVar6 & 0xffffffff) == 0) {
        uVar4 = 3;
      }
      else if ((uVar6 & 0xffffffff) == 1) {
        uVar4 = 0xc;
      }
      else {
        uVar4 = 0;
      }
      fn_82645EA8(lbl_8320A898,uVar4);
      lVar7 = 0;
      do {
        (**(int (***)())(**(int **)((int)((((uVar6 & 0x7fffffff) * 2 + param_2 & 0x3fffffff) * 4 +
                                       0x2eb9 + lVar7 & 0xffffffff) << 2) + iVar1) + 8))();
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < 4);
      uVar6 = uVar6 - 1;
    } while (-1 < (__int64)uVar6);
    fn_82645EA8(lbl_8320A898,0);
    (**(int (***)())(**(int **)((int)((param_2 + 0x2ed1U & 0xffffffff) << 2) + iVar1) + 8))();
  }
  fn_82631C78(lbl_8320A898,0,0x40,0x40);
  (**(int (***)())(**(int **)((int)((param_2 + 0x2ed5U & 0xffffffff) << 2) + iVar1) + 8))();
  uVar4 = fn_8258C000();
  fn_8258C840(uVar4,param_2);
  fn_82631C78(lbl_8320A898,0,0x28,0x58);
  (**(int (***)())(**(int **)((int)((param_2 + 0x2ee7U & 0xffffffff) << 2) + iVar1) + 8))();
  if ((*(unsigned int *)(iVar1 + 0x14) & 0x8000000) != 0) {
    if (lbl_8326B498 == 0) {
      fn_82A1E7D8(lbl_8326B4AC);
      lbl_8326B498 = fn_82647738(lbl_8320A898);
      fn_82A1E810(lbl_8326B4A8);
    }
    (**(int (***)())(**(int **)((int)((param_2 + 0x2edaU & 0xffffffff) << 2) + iVar1) + 8))();
  }
  if (*(int *)(param_1 + 0x93c) != 0) {
    fn_82576AD8((double)*(float *)(param_1 + 0x828));
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x8c4) + 8)) {
    fn_82577848(*(int *)(param_1 + 0x8c4),param_2);
  }
  if (lbl_8326C000 != (int (**)())0x0) {
    (*lbl_8326C000)(param_1,param_2,0);
  }
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(int (***)())(*(int *)(iVar1 + -0x38) + 0x28))(iVar1 + -0x38,&stack_pair_b0.first);
  }
  puVar5 = *(unsigned int **)(param_1 + 0xa0);
  for (puVar2 = (unsigned int *)*puVar5; puVar2 != puVar5; puVar2 = (unsigned int *)*puVar2) {
    piVar3 = (int *)puVar2[2];
    if (piVar3[2] == 2) {
      (**(int (***)())(*piVar3 + 0x24))(piVar3,&stack_pair_b0.first);
    }
    puVar5 = *(unsigned int **)(param_1 + 0xa0);
  }
  fn_825268A8(1);
  return;
}

