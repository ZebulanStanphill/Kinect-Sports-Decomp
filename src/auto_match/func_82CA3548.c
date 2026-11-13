unsigned __int64 fn_82CA3548(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned int uVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  
  puVar1 = *(unsigned int **)(param_1 + 0xebc);
  uVar7 = 0;
  param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d4c) + param_2;
  uVar2 = *(unsigned int *)(param_1 + 0x84);
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*puVar1;
  uVar3 = *(unsigned int *)(param_1 + 0x80);
  lVar8 = (unsigned __int64)puVar1[1] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar5 = (unsigned __int64)puVar1[2] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  if (uVar2 != 0) {
    do {
      uVar9 = 0;
      if (uVar3 != 0) {
        lVar10 = param_2;
        lVar11 = lVar6;
        lVar12 = lVar8;
        do {
          if (uVar9 == uVar3 - 1) {
            lVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x9c) - (unsigned __int64)*(unsigned int *)(param_1 + 0xb4)) +
                    0x10;
LAB_82ca3614:
            (**(int (***)())(param_1 + 0x3e44))
                      (param_1,lVar10,lVar11,lVar12,(lVar5 - lVar8) + lVar12,
                       *(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0x6c),lVar4);
          }
          else {
            if (uVar7 == uVar2 - 1) {
              lVar4 = 0x10;
              goto LAB_82ca3614;
            }
            (**(int (***)())(param_1 + 0x3e40))
                      (param_1,lVar10,lVar11,lVar12,(lVar5 - lVar8) + lVar12,
                       *(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0x6c),
                       *(unsigned int *)(param_1 + 0x3d44));
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x10;
          lVar12 = lVar12 + 4;
          lVar10 = lVar10 + (unsigned __int64)*(unsigned int *)(param_1 + 0x3d50);
        } while (uVar9 < uVar3);
      }
      uVar7 = uVar7 + 1;
      lVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) & 0xfffffff) * 0x10;
      lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 100) + lVar6;
      lVar8 = lVar10 + lVar8;
      lVar5 = lVar10 + lVar5;
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d5c) + param_2;
    } while (uVar7 < uVar2);
  }
  return 0;
}

