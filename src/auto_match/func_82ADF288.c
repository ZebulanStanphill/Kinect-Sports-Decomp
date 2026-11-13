extern unsigned int *auStack_70;
extern int fn_82AC8ED0();
extern int fn_82AD00E0();
extern int fn_82ADEED8();


unsigned __int64 fn_82ADF288(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,
                       __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 *param_8)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int *in_stack_00000054;
  unsigned int auStack_70;
  
  if ((*(unsigned int *)(param_2 + 0xc0) & 0x40000000) == 0) {
    param_8[1] = 0;
    param_8[2] = 0;
    param_8[3] = 0;
    param_8[4] = 0;
  }
  else {
    uVar4 = 1;
    param_8[1] = *(unsigned __int64 *)(param_2 + 0x28);
    param_8[2] = *(unsigned __int64 *)(param_2 + 0x30);
    param_8[3] = *(unsigned __int64 *)(param_2 + 0x38);
    param_8[4] = *(unsigned __int64 *)(param_2 + 0x40);
    if (1 < (*(unsigned int *)(param_2 + 0xc0) & 7)) {
      iVar3 = 10;
      do {
        iVar7 = 0;
        lVar9 = 4;
        puVar6 = param_8;
        do {
          iVar5 = iVar3 + iVar7;
          puVar1 = puVar6 + 1;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *(unsigned __int64 *)(iVar5 * 8 + param_2) & *puVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 5;
      } while (uVar4 < (*(unsigned int *)(param_2 + 0xc0) & 7));
    }
    if ((param_3 != 0) && (uVar4 = 0, (*(unsigned int *)(param_3 + 0xc0) & 7) != 0)) {
      iVar3 = 5;
      do {
        iVar7 = 0;
        lVar9 = 4;
        puVar6 = param_8;
        do {
          iVar5 = iVar3 + iVar7;
          puVar1 = puVar6 + 1;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *(unsigned __int64 *)(iVar5 * 8 + param_3) & *puVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 5;
      } while (uVar4 < (*(unsigned int *)(param_3 + 0xc0) & 7));
    }
  }
  uVar8 = 0;
  lVar9 = 0;
LAB_82adf43c:
  uVar2 = fn_82AD00E0(param_8,uVar8,param_5,4);
  if ((int)uVar2 != -1) {
    fn_82ADEED8(&auStack_70,param_2,param_3,param_4,param_5,param_6,param_7,uVar2);
    if ((auStack_70 & 0x300) == 0) {
      if ((*(unsigned int *)(param_2 + 0xc0) & 0x40000000) != 0) goto code_r0x82adf40c;
      goto LAB_82adf434;
    }
    uVar2 = (unsigned __int64)(auStack_70 >> 10) & 0xf | uVar2 & 0xfffffffffffffff0;
    *in_stack_00000054 = auStack_70;
  }
  return uVar2;
code_r0x82adf40c:
  fn_82AC8ED0(param_8,(uVar8 & 0xfffffff) << 4 |
                          (unsigned __int64)(unsigned int)(1 << ((unsigned int)lVar9 & 0x3f)) & 0xffffffff0000000f);
  lVar9 = lVar9 + 1;
  if (4 < (lVar9 + param_5 & 0xffffffffU)) {
    lVar9 = 0;
LAB_82adf434:
    uVar8 = uVar8 + 1;
  }
  goto LAB_82adf43c;
}

