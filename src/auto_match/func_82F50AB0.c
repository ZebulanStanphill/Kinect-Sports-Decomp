extern unsigned int *auStack_30;
extern int fn_824B4288();
extern int fn_82F50188();
extern int fn_82F53830();
extern int fn_82F539A8();
extern int fn_8307DA20();
extern unsigned int lbl_82021544;
extern unsigned int lbl_821657C0;
extern unsigned int lbl_821657D0;
extern unsigned int lbl_821657D4;
extern unsigned int lbl_821657D8;
extern unsigned int lbl_821657DC;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F50AB0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [1];
  
  fn_824B4288(param_1 + 0x20,0x1c0);
  fn_824B4288(param_1 + 0x1e0,0xab0);
  fn_82F53830((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
  fn_82F53830((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040);
  *(unsigned int *)(*(int *)(param_1 + 0xcf0) + 0x1844) = 0;
  fn_824B4288((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1854,0x50);
  fn_824B4288((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x18b8,0x50);
  puVar3 = (unsigned int *)((unsigned int)(&lbl_821657C0 + in_r0) & 0xfffffff0);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar3 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar3 = (unsigned int *)(param_1 + 0xcc0U & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar3 = (unsigned int *)fn_8307DA20(auStack_30);
  uVar1 = *(unsigned int *)(param_1 + 0xcf0);
  *(unsigned int *)(param_1 + 0xce0) = *puVar3;
  *(unsigned int *)(param_1 + 0xce4) = puVar3[1];
  uVar2 = lbl_821657DC;
  uVar9 = lbl_821657D8;
  uVar8 = lbl_821657D4;
  uVar7 = lbl_821657D0;
  uVar6 = puVar3[2];
  *(unsigned int *)(param_1 + 0xc94) = lbl_82021544;
  *(unsigned char *)(param_1 + 0xcb1) = 0;
  puVar3 = (unsigned int *)(param_1 + 0xca0U & 0xfffffff0);
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar2;
  *(unsigned char *)(param_1 + 0xcb0) = 1;
  *(unsigned int *)(param_1 + 0xce8) = uVar6;
  fn_82F50188(param_1,(unsigned __int64)uVar1 + 0x60);
  fn_82F539A8((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,
                    (unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
  iVar4 = 0;
  lVar5 = 0x14;
  *(unsigned int *)(*(int *)(param_1 + 0xcf0) + 0x191c) = lbl_821AAD20;
  do {
    *(unsigned int *)(*(int *)(param_1 + 0xcf0) + iVar4) = 0;
    iVar4 = iVar4 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

