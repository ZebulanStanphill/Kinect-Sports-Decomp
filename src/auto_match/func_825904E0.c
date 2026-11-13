extern unsigned int *auStack_80;
extern int fn_82570110();
extern int fn_82631C78();
extern int fn_82647738();
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern int (*lbl_8326C004)();
extern int (*lbl_8327F7E8)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_825904E0(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int in_r0;
  unsigned int *puVar4;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int *puStack_98;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  uStack_6c = ltcg_pool_0_0f;
  uStack_88 = *(unsigned int *)(param_1 + 0x44);
  uStack_9c = (unsigned int)param_2;
  uStack_8c = 8;
  iVar1 = *(int *)(param_1 + 0x894);
  puStack_98 = &uStack_90;
  uStack_a0 = 0;
  uStack_90 = lbl_8327F8A0;
  puVar4 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000104b0;
  puVar4[1] = in_register_000104b4;
  puVar4[2] = in_register_000104b8;
  puVar4[3] = in_vr75;
  uStack_5c = uStack_6c;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_84 = uStack_9c;
  if (iVar1 != 0) {
    fn_82570110();
  }
  iVar1 = *(int *)(param_1 + 0x8ac);
  if ((*(unsigned int *)(iVar1 + 0x14) & 0x10000000) != 0) {
    fn_82631C78(lbl_8320A898,0,(unsigned __int64)*(unsigned int *)(iVar1 + 0xbbbc),
                      0x80 - (unsigned __int64)*(unsigned int *)(iVar1 + 0xbbbc));
    (**(int (***)())(**(int **)((int)((param_2 + 0x2ed3U & 0xffffffff) << 2) + iVar1) + 8))();
    if (lbl_8327F7E8 != (int (**)())0x0) {
      (*lbl_8327F7E8)(*(unsigned int *)(iVar1 + 0x24),param_2);
    }
    if ((*(unsigned int *)(iVar1 + 0x14) & 0x8000000) != 0) {
      if (lbl_8326B498 == 0) {
        fn_82A1E7D8(lbl_8326B4AC);
        lbl_8326B498 = fn_82647738(lbl_8320A898);
        fn_82A1E810(lbl_8326B4A8);
      }
      (**(int (***)())(**(int **)((int)((param_2 + 0x2edcU & 0xffffffff) << 2) + iVar1) + 8))();
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(int (***)())(*(int *)(iVar1 + -0x38) + 0x28))(iVar1 + -0x38,&uStack_a0);
  }
  puVar4 = *(unsigned int **)(param_1 + 0xa0);
  for (puVar2 = (unsigned int *)*puVar4; puVar2 != puVar4; puVar2 = (unsigned int *)*puVar2) {
    piVar3 = (int *)puVar2[2];
    if (piVar3[2] == 2) {
      (**(int (***)())(*piVar3 + 0x24))(piVar3,&uStack_a0);
    }
    puVar4 = *(unsigned int **)(param_1 + 0xa0);
  }
  if (lbl_8326C004 != (int (**)())0x0) {
    (*lbl_8326C004)(param_1,param_2,0);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8ac) + 0x2c) + 0x34) == 1) {
    (**(int (***)())(**(int **)((int)((param_2 + 0x2ed7U & 0xffffffff) << 2) + *(int *)(param_1 + 0x8ac)
                           ) + 8))();
  }
  return;
}

