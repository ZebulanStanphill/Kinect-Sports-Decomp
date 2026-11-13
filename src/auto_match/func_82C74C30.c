extern int fn_82F68CC0();


void fn_82C74C30(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0xef8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  uVar1 = *(unsigned int *)(param_1 + 0xefc);
  lVar10 = *(unsigned int *)(param_1 + 0xec4) + uVar3;
  uVar2 = *(unsigned int *)(param_1 + 0xf00);
  lVar8 = *(unsigned int *)(param_1 + 0xec8) + uVar3;
  *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x268) =
       *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x268);
  lVar11 = uVar1 + uVar3;
  lVar9 = uVar2 + uVar3;
  if ((*(int *)(param_1 + 0x3e5c) == 0) || (*(int *)(param_1 + 0x4fc0) != 0)) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        fn_82F68CC0(lVar11,lVar10,*(unsigned int *)(param_1 + 0xd0));
        uVar1 = *(unsigned int *)(param_1 + 0xd0);
        lVar11 = (unsigned __int64)uVar1 + lVar11;
        lVar10 = (unsigned __int64)uVar1 + lVar10;
        fn_82F68CC0(lVar9,lVar8,uVar1);
        lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar9;
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar8;
        fn_82F68CC0(lVar7,lVar6,*(unsigned int *)(param_1 + 0xcc));
        uVar1 = *(unsigned int *)(param_1 + 0xcc);
        lVar7 = (unsigned __int64)uVar1 + lVar7;
        lVar6 = (unsigned __int64)uVar1 + lVar6;
        fn_82F68CC0(lVar7,lVar6,uVar1);
        iVar5 = iVar5 + 1;
        lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar7;
        lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar6;
      } while (iVar5 < *(int *)(param_1 + 200));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xeb0);
    iVar4 = *(int *)(iVar5 + 0x250) * 0x44 + iVar5;
    *(int *)(iVar5 + 0x250) = *(int *)(iVar5 + 0x250) + 1;
    *(unsigned int *)(iVar4 + 0x30) = 2;
    *(unsigned int *)(iVar4 + 0x34) = *(unsigned int *)(param_1 + 0xea0);
    *(unsigned int *)(iVar4 + 0x3c) = *(unsigned int *)(param_1 + 0xcc);
    *(unsigned int *)(iVar4 + 0x40) = *(unsigned int *)(param_1 + 0xd0);
    *(unsigned int *)(iVar4 + 0x38) = *(unsigned int *)(param_1 + 0x8c);
    *(unsigned int *)(iVar4 + 0x44) = *(unsigned int *)(param_1 + 0xdc);
    *(unsigned int *)(iVar4 + 0x48) = *(unsigned int *)(param_1 + 0xe0);
  }
  return;
}

