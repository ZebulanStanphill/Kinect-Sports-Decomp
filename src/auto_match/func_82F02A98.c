void fn_82F02A98(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2 * 0x58 + param_1;
  uVar1 = *(unsigned int *)(iVar7 + 0x6a8);
  *(unsigned int *)(param_1 + 0x548) = uVar1;
  uVar2 = *(unsigned int *)(iVar7 + 0x6ac);
  *(unsigned int *)(param_1 + 0x554) = uVar2;
  uVar3 = *(unsigned int *)(iVar7 + 0x6b0);
  *(unsigned int *)(param_1 + 0x550) = uVar3;
  uVar4 = *(unsigned int *)(iVar7 + 0x6b4);
  *(unsigned int *)(param_1 + 0x334) = uVar2;
  *(unsigned int *)(param_1 + 0x33c) = uVar4;
  *(unsigned int *)(param_1 + 0x55c) = uVar4;
  *(unsigned int *)(param_1 + 0x330) = uVar1;
  *(unsigned int *)(param_1 + 0x338) = uVar3;
  iVar6 = *(int *)(iVar7 + 0x6b8);
  *(int *)(param_1 + 0x31c) = iVar6;
  iVar5 = *(int *)(iVar7 + 0x6bc);
  *(int *)(param_1 + 800) = iVar5;
  *(int *)(param_1 + 0x324) = iVar6 * iVar5;
  *(unsigned int *)(param_1 + 0x54c) = *(unsigned int *)(iVar7 + 0x6c0);
  *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(iVar7 + 0x6c4);
  *(unsigned int *)(param_1 + 0x560) = *(unsigned int *)(iVar7 + 0x6c8);
  *(unsigned int *)(param_1 + 0x340) = *(unsigned int *)(iVar7 + 0x6cc);
  iVar6 = *(int *)(iVar7 + 0x6d0);
  *(int *)(param_1 + 0x2d0) = iVar6;
  iVar6 = iVar6 * 0x600;
  if (iVar6 < 0x1800) {
    iVar6 = 0x1800;
  }
  *(int *)(param_1 + 0x1a4c) = iVar6;
  *(unsigned int *)(param_1 + 0x2d4) = *(unsigned int *)(iVar7 + 0x6d4);
  *(unsigned int *)(param_1 + 0x2d8) = *(unsigned int *)(iVar7 + 0x6d8);
  *(unsigned int *)(param_1 + 0x2dc) = *(unsigned int *)(iVar7 + 0x6dc);
  *(unsigned int *)(param_1 + 0x564) = *(unsigned int *)(iVar7 + 0x6e0);
  iVar6 = *(int *)(iVar7 + 0x6e4);
  *(int *)(param_1 + 0x568) = iVar6;
  *(unsigned int *)(param_1 + 0x56c) = *(unsigned int *)(iVar7 + 0x6e8);
  *(unsigned int *)(param_1 + 0x570) = *(unsigned int *)(iVar7 + 0x6ec);
  *(unsigned int *)(param_1 + 0x574) = *(unsigned int *)(iVar7 + 0x6f0);
  *(unsigned int *)(param_1 + 0x578) = *(unsigned int *)(iVar7 + 0x6f4);
  *(unsigned int *)(param_1 + 0x57c) = *(unsigned int *)(iVar7 + 0x6f8);
  *(unsigned int *)(param_1 + 0x580) = *(unsigned int *)(iVar7 + 0x6fc);
  *(int *)(param_1 + 0x584) = iVar6 << 4;
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  return;
}

