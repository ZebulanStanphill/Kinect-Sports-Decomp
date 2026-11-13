extern int fn_8277DB90();
extern int fn_82784390();
extern int fn_827898D0();


__int64 fn_826EEB08(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2ec);
  uVar2 = *(unsigned int *)(param_1 + 0x2dc);
  uVar3 = *(unsigned int *)(param_1 + 0xb4);
  uVar4 = *(unsigned int *)(param_1 + 0xb8);
  uVar5 = *(unsigned int *)(param_1 + 0x2c8);
  uVar6 = *(unsigned int *)(param_1 + 0x2f0);
  uVar7 = *(unsigned int *)(param_1 + 0x2e0);
  uVar8 = *(unsigned int *)(param_1 + 0x2cc);
  lVar11 = fn_827898D0(param_1 + 0x308);
  iVar9 = *(int *)(param_1 + 0x39c);
  iVar10 = *(int *)(*(int *)(param_1 + 0x3a4) + 4);
  lVar12 = fn_8277DB90(param_1 + 0xc4);
  lVar13 = fn_82784390(param_1 + 0x50);
  lVar14 = fn_82784390(param_1 + 8);
  return lVar14 + lVar12 + lVar13 + (__int64)iVar10 * (__int64)iVar9 + lVar11 +
         ((((unsigned __int64)uVar1 + (unsigned __int64)uVar2 & 0x3fffffff) * 4 + (unsigned __int64)uVar5) * 0xc0 +
          (unsigned __int64)uVar6 + (unsigned __int64)uVar7 + (unsigned __int64)uVar8 & 0x3fffffff) * 4 +
         ((unsigned __int64)uVar3 * 0xc0 + (unsigned __int64)uVar4 & 0x3fffffff) * 4;
}

