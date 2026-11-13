extern int fn_82F02778();
extern int fn_82F11418();


void fn_82E953A0(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar3 = (int)param_2;
  iVar1 = iVar3 >> 1;
  iVar2 = param_3 >> 1;
  *(int *)(param_1 + 0x548) = iVar3;
  *(int *)(param_1 + 0x550) = param_3;
  *(int *)(param_1 + 0x330) = iVar3;
  *(int *)(param_1 + 0x554) = iVar1;
  *(int *)(param_1 + 0x55c) = iVar2;
  *(int *)(param_1 + 0x334) = iVar1;
  *(int *)(param_1 + 0x338) = param_3;
  *(int *)(param_1 + 0x33c) = iVar2;
  if (*(int *)(param_1 + 0xa0c) != 0) {
    iVar4 = *(int *)(param_1 + 0x31c) + 1 >> 1;
    iVar6 = *(int *)(param_1 + 800) + 1 >> 1;
    *(int *)(param_1 + 0x334) = iVar4;
    *(int *)(param_1 + 0x33c) = iVar6;
    *(int *)(param_1 + 0x330) = iVar4 << 1;
    *(int *)(param_1 + 0x338) = iVar6 << 1;
  }
  *(int *)(param_1 + 0x560) = iVar3 * param_3;
  *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x330) + 0x20;
  *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x334) + 0x10;
  if ((iVar3 != *(int *)(param_1 + 0x31c)) || (uVar5 = 1, param_3 != *(int *)(param_1 + 800))) {
    uVar5 = 0;
  }
  iVar3 = iVar3 >> 4;
  *(unsigned int *)(param_1 + 0x340) = uVar5;
  *(int *)(param_1 + 0x2d0) = iVar3;
  iVar4 = 0x1800;
  if (0x17ff < iVar3 * 0x600) {
    iVar4 = iVar3 * 0x600;
  }
  iVar6 = iVar1 + 0x20;
  *(int *)(param_1 + 0x1a4c) = iVar4;
  *(int *)(param_1 + 0x568) = iVar6;
  *(int *)(param_1 + 0x2d4) = param_3 >> 4;
  *(int *)(param_1 + 0x564) = (int)(param_2 + 0x40U);
  *(int *)(param_1 + 0x2d8) = (param_3 >> 4) * iVar3;
  *(int *)(param_1 + 0x2dc) = iVar3 + -1;
  *(int *)(param_1 + 0x56c) = param_3 + 0x40;
  *(int *)(param_1 + 0x580) = iVar6 * 8;
  *(int *)(param_1 + 0x57c) = (int)((param_2 + 0x40U & 0xffffffff) << 4);
  *(int *)(param_1 + 0x578) = (iVar1 + 0x21) * 0x10;
  *(int *)(param_1 + 0x570) = iVar2 + 0x20;
  *(int *)(param_1 + 0x584) = iVar6 * 0x10;
  *(int *)(param_1 + 0x574) = (int)((param_2 + 0x41U & 0xffffffff) << 5);
  fn_82F02778(param_1,1);
  if (((*(int *)(param_1 + 4) == 8) && (*(int *)(param_1 + 0x6d54) != 0)) &&
     (*(int *)(param_1 + 0x7b38) != 0)) {
    fn_82F11418(param_1);
  }
  return;
}

