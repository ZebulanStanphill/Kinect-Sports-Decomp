extern unsigned int *auStack_70;
extern unsigned int *auStack_94;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_d4;
extern unsigned int *auStack_f0;
extern int fn_8263C700();
extern int fn_8263C7D8();
extern int fn_829F5000();
extern unsigned int uStack_74;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_82A13AD0(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned __int64 *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned char auStack_f0 [4];
  unsigned int uStack_ec;
  unsigned __int64 uStack_e8;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int auStack_d4 [7];
  unsigned int auStack_b8 [9];
  unsigned int auStack_94 [8];
  unsigned int uStack_74;
  unsigned int auStack_70 [28];
  
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x1ab4) = (int)param_2;
  lVar8 = (param_2 & 0x1fffffff) * 8;
  lVar7 = 0;
  uVar9 = 0;
  do {
    if ((uVar9 & 0xffffffff) == 0) {
      lVar7 = param_2 * 0x38 + param_1 + 0xc28;
      fn_8263C7D8(lVar7,0,auStack_f0,0,3);
      *(unsigned int *)(iVar1 + 0x19d4) = 0;
      *(unsigned int *)(iVar1 + 0x19d8) = 0;
      *(unsigned int *)(iVar1 + 0x19dc) = 0;
      *(unsigned int *)(iVar1 + 0x19d0) = uStack_ec;
    }
    else {
      uVar10 = 0;
      lVar11 = (lVar8 + uVar9) * 0x38 + param_1 + 0xcd0;
      do {
        fn_8263C700(lVar11,uVar10,0,auStack_f0,0,3);
        uVar3 = (uVar9 + 0x19d & 0x3fffffff) * 4 + uVar10;
        uVar10 = uVar10 + 1;
        *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + iVar1) = uStack_ec;
      } while ((uVar10 & 0xffffffff) < 4);
      *(int *)((int)auStack_94 + (int)((uVar9 & 0xffffffff) << 2)) = (int)lVar11;
    }
    lVar11 = (lVar8 + uVar9) * 0x38 + param_1 + 0x1290;
    fn_8263C7D8(lVar11,0,auStack_f0,0,3);
    uVar3 = uVar9 + 0x694;
    uVar10 = uVar9 & 0xffffffff;
    uVar9 = uVar9 + 1;
    *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + iVar1) = uStack_ec;
    *(int *)((int)auStack_70 + (int)(uVar10 << 2)) = (int)lVar11;
  } while ((uVar9 & 0xffffffff) < 8);
  lVar8 = 9;
  puVar2 = &uStack_e8;
  do {
    puVar5 = puVar2;
    puVar2 = puVar5 + 1;
    *puVar2 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(unsigned int *)(puVar5 + 2) = 0;
  puVar6 = auStack_94;
  uStack_e0 = 0;
  puVar4 = auStack_d4;
  auStack_d4[0] = (unsigned int)lVar7;
  uStack_d8 = 0xe;
  lVar7 = 7;
  do {
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = &uStack_74;
  puVar4 = auStack_b8;
  lVar7 = 8;
  do {
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_dc = (int)param_2;
  fn_829F5000(2,&uStack_e0,0x4c);
  return;
}

